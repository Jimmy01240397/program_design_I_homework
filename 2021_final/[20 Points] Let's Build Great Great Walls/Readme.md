\[20 Points\] Let\'s Build Great Great Walls
--------------------------------------------

### Description

<div>

利姆路是隻可愛的始萊姆，雖然是它只是隻始萊姆，但它統領著森林中的魔物們。自古以來，魔物們最大的威脅莫過於人類的殺戮，利姆路為了保護它所管理的魔物們，它決定讓魔物們在村莊四周蓋上城牆，但是在它領導的眾多魔物村莊中，僅有部份村莊生產建造城牆所需的材料，因此其他村莊需要向這些村莊下訂這些材料。經過一年汲汲營營的建造，利姆路的辦公桌上積滿了來自各個村莊下訂建材的訂單，請你寫一個程式幫助它統整這些訂單。

在這題中，你僅需要完成程式的特定函式，在這個函式中，你會拿到**由訂單組成的
linked-list**，其中每筆訂單都會包含以下資訊：訂單的編號、下定的村莊、下定的建材編號以及數量。請注意：**建材數量的資訊被包裝在
union
中**，你必須根據建材編號讀取特定的欄位。你要實做的函式需要**替每個村莊收集屬於它的訂單**，並將它們串接成**獨立的
linked-list**，其中的訂單須按照**訂單編號由少至多**進行排序，並且，請替每個村莊**計算過去這年它共花了多少錢**購買建材（不同建材的單價可以在
loader code
中找到）。最後，為了簡化之後的查詢速度，請**將村莊按照名稱排列**。

------------------------------------------------------------------------

Rimuru is a cute slime who was killed by a random murder in his previous
life, now he becomes the leader of the monsters live in the forest. To
help the monsters prevent threads from the human world, he plans to make
monsters build great walls around their villages. Since there are lots
of villages in his monster kingdom, and only several of them are able to
supply the building parts, they must trade those ingredients between the
villages. After a year went through, the orders between villages are
piled up like a mountain, please, help him to unify the orders.

In the following program, you will get **several orders constructed as a
linked-list**, each order contains following things: order id, consumer
of the order, the ingredient id and the amount of the ingredient. Please
notice that **the amount of the ingredient are packed in an union**, you
have to retrieve it from the specific member depends on the ingredient
id. For each village, your program should not only **gather the orders
belongs to it**, **reconstruct them into an independent linked-list**,
**sort the orders in ascending order by the order id**, but also
**calculate the total cost** of all orders (the unit cost of each
ingredient can be found in the loader program). Finally, your program
should **sort the result list of villages via their name**.

![](https://steamuserimages-a.akamaihd.net/ugc/947342913895300025/7FC9DECBD7B41332CD3D264AA6B07A4BD8674D2C/)

</div>

### Input

輸入的第一行有兩個整數：V 跟 O，分別代表村莊的數量跟訂單的總筆數，接著有
V 行村莊的名字，剩下的 O
行為訂單的內容，訂單內容為以下格式：「訂單編號:建材編號/建材數量-下訂村莊」。
限制： 1. 1 \<= V \<= 75 2. 1 \<= O \<= 1024 3. 1 \<= 建材數量 \<= 1024
4. 村莊名稱 \< 16 5. 訂單編號是一個 16 進位的字串，長度為 8 The first
line contains two integers V, O that indicates the number of villages
and orders, the next V lines are the village names. The rest of O lines
are the orders which are in the format
\"order\_id:integration\_id/amount-consumer\", each order occupies a
line. restrictions: 1. 1 \<= V \<= 75 2. 1 \<= O \<= 1024 3. 1 \<=
amount \<= 1024 4. length of village name \< 16 5. order id is a hex
string with length 8

### Output

程式須輸出每個村莊的名、它一年來的建材費用以及排序後，屬於該村莊的訂單的編號。
Each village and its total cost to get the ingredients followed by the
id of the orders belong to the village, the output ids should be sorted
in ascending order.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #include <‍string.h>

    #define ORDER_ID_LEN 8
    #define MAX_VILLAGE_NAME_LEN 15

    typedef struct order_s {
        struct order_s *next;
        char order_id[ORDER_ID_LEN + 1];
        char consumer[MAX_VILLAGE_NAME_LEN + 1];
        enum {
            INGRED_A = 1,
            INGRED_B,
            INGRED_C,
        } ingredient_id;
        union {
            char ing_a[8];
            long ing_b;
            double ing_c;
        } amount;
    } order_t;

    typedef struct village_s {
        char name[MAX_VILLAGE_NAME_LEN + 1];
        unsigned long total_cost;
        order_t *order_list;
    } village_t;

    static const long unit_costs[] = {
        [INGRED_A] = 256,
        [INGRED_B] = 512,
        [INGRED_C] = 1024,
    };

    static village_t *init_village_array(int v_cnt);
    static order_t *init_order_list(int o_cnt);
    static void unify_orders(village_t *vills, int v_cnt, order_t *orders);
    static void print_result(village_t *vills, int v_cnt);

    int main()
    {
        int village_cnt, order_cnt;
        scanf("%d%d", &village_cnt, &order_cnt);
        village_t *villages = init_village_array(village_cnt);
        if (!villages) {
            goto init_village_failed;
        }
        order_t *orders = init_order_list(order_cnt);
        if (!orders)  {
            goto init_order_failed;
        }
        unify_orders(villages, village_cnt, orders);
        print_result(villages, village_cnt);
        free(orders);

    init_order_failed:
        free(villages);

    init_village_failed:
        return 0;
    }

    static village_t *init_village_array(int v_cnt)
    {
        village_t *villages = malloc(sizeof(village_t) * v_cnt);
        if (!villages) { // Ran out of memory
            return NULL;
        }
        for (int i = 0; i <‍ v_cnt; i++) {
            scanf("%s", villages[i].name);
        }
        return villages;
    }

    static order_t *init_order_list(int o_cnt)
    {
        order_t *orders = malloc(sizeof(order_t) * o_cnt);
        if (!orders) { // Ran out of memory
            return NULL;
        }
        for (int i = 0; i <‍ o_cnt; i++) {
            // Read the content of order
            // the term %[^c] will use 'c' as delimiter while scanning the input
            scanf(" %[^:]:%u/%[^-]-%s",
                    orders[i].order_id,
                    &orders[i].ingredient_id,
                    orders[i].amount.ing_a,
                    orders[i].consumer);
            
            switch (orders[i].ingredient_id) {
                case INGRED_B:
                    orders[i].amount.ing_b = atol(orders[i].amount.ing_a);
                    break;
                case INGRED_C:
                    orders[i].amount.ing_c = atof(orders[i].amount.ing_a);
                    break;
                default:
                    break;
            }
            // Construct orders into linked-list
            if (i) {
                orders[i - 1].next = orders + i;
            }
        }
        // End the linked-list
        orders[o_cnt - 1].next = NULL;
        return orders;
    }

    static void print_result(village_t *vills, int v_cnt)
    {
        for (int i = 0; i <‍ v_cnt; i++) {
            printf("%s %ld\n  ->", vills[i].name, vills[i].total_cost);
            for (order_t *optr = vills[i].order_list; optr; optr = optr->next) {
                printf(" %s", optr->order_id);
            }
            printf("\n");
        }
    }

<div>

### Sample1

#### Input

    3 15
    Guanmiao
    Sinsing
    Taoyuan
    79B3801D:3/59-Guanmiao
    48D32269:2/834-Guanmiao
    3A699371:3/249-Taoyuan
    3C52083B:1/337-Guanmiao
    6916A3F4:2/299-Taoyuan
    753181AF:2/84-Taoyuan
    158C8543:1/260-Guanmiao
    4C9470D9:3/624-Guanmiao
    76FDD0A1:2/723-Taoyuan
    34C1A646:1/788-Sinsing
    49C2EB29:1/772-Sinsing
    657D29BB:1/746-Taoyuan
    24335A5C:3/940-Taoyuan
    526BB92A:3/171-Guanmiao
    6761B64C:3/117-Taoyuan

#### Output

    Guanmiao 1454336
      -> 158C8543 3C52083B 48D32269 4C9470D9 526BB92A 79B3801D
    Sinsing 399360
      -> 34C1A646 49C2EB29
    Taoyuan 2094592
      -> 24335A5C 3A699371 657D29BB 6761B64C 6916A3F4 753181AF 76FDD0A1

</div>

<div>

### Sample2

#### Input

    4 18
    Yujing
    Yanshuei
    Sinsing
    Gangshan
    059D0501:2/441-Sinsing
    362B46E0:3/992-Sinsing
    34713753:2/167-Sinsing
    1C1E24ED:3/679-Yanshuei
    6504A3FD:1/487-Yujing
    598BD3F5:1/491-Sinsing
    6F8037D0:2/725-Yujing
    28B56E0C:3/891-Yanshuei
    3931CEF1:1/109-Yanshuei
    39B15E23:2/789-Sinsing
    572EC1A6:2/2-Yujing
    5137318F:2/458-Yujing
    12117749:2/701-Sinsing
    0D23AF31:2/821-Yanshuei
    2B897B63:3/462-Yujing
    19A04B37:2/126-Yujing
    50005E7A:3/1019-Yanshuei
    44AA8935:1/533-Gangshan

#### Output

    Gangshan 136448
      -> 44AA8935
    Sinsing 2215680
      -> 059D0501 12117749 34713753 362B46E0 39B15E23 598BD3F5
    Yanshuei 3099392
      -> 0D23AF31 1C1E24ED 28B56E0C 3931CEF1 50005E7A
    Yujing 1268992
      -> 19A04B37 2B897B63 5137318F 572EC1A6 6504A3FD 6F8037D0

</div>

<div>

### Sample3

#### Input

    5 20
    South
    Sinshih
    Danei
    Daliao
    Hunei
    166C47E2:1/245-Sinshih
    7375D5C3:2/553-South
    12B62880:2/762-South
    58C3A4C6:1/403-Daliao
    37B7F642:3/38-Sinshih
    44369036:2/338-Daliao
    052D5D75:1/626-Sinshih
    2DACD55A:3/245-Danei
    75F41330:1/350-Sinshih
    6EE8A654:2/269-Daliao
    2A0633F4:3/371-South
    0CA3ECFD:2/970-Hunei
    0380EBFD:2/778-Hunei
    31EC81E4:1/366-Danei
    60BCEDD1:1/647-Danei
    7C8F0D3E:3/105-Danei
    05B5E563:1/355-Sinshih
    1987954B:2/653-Danei
    50C09674:1/506-Danei
    52654703:3/689-Danei

#### Output

    Daliao 413952
      -> 44369036 58C3A4C6 6EE8A654
    Danei 1787136
      -> 1987954B 2DACD55A 31EC81E4 50C09674 52654703 60BCEDD1 7C8F0D3E
    Hunei 894976
      -> 0380EBFD 0CA3ECFD
    Sinshih 442368
      -> 052D5D75 05B5E563 166C47E2 37B7F642 75F41330
    South 1053184
      -> 12B62880 2A0633F4 7375D5C3

</div>

<div>

### Sample4

#### Input

    7 25
    Annan
    Zuojhen
    Nanhua
    River
    Daliao
    Alian
    Maolin
    1A299881:3/197-River
    229EC19C:1/1021-Zuojhen
    46BA7EA1:3/618-Annan
    402C8159:3/319-River
    4AFA3035:2/551-Maolin
    07C76667:3/191-River
    1F5F8051:3/589-Daliao
    16609029:2/282-Daliao
    690461E6:1/22-Alian
    0C16D905:3/145-Maolin
    0F046D3F:1/133-Maolin
    0EDDACF7:2/652-Alian
    2416050E:3/401-Zuojhen
    72A828B7:1/566-Nanhua
    0F34EE9E:3/486-Nanhua
    21A00A47:1/883-River
    412F50DC:2/945-Alian
    12091799:3/393-Alian
    688A9F39:1/882-Annan
    7BC3E7D0:1/349-Annan
    2143B6AD:3/84-Daliao
    4E385D3A:2/109-Zuojhen
    1BD4570B:3/673-Annan
    0CE41551:1/384-Nanhua
    4F1BFD9A:1/16-Alian

#### Output

    Alian 1229824
      -> 0EDDACF7 12091799 412F50DC 4F1BFD9A 690461E6
    Annan 1637120
      -> 1BD4570B 46BA7EA1 688A9F39 7BC3E7D0
    Daliao 833536
      -> 16609029 1F5F8051 2143B6AD
    Maolin 464640
      -> 0C16D905 0F046D3F 4AFA3035
    Nanhua 740864
      -> 0CE41551 0F34EE9E 72A828B7
    River 950016
      -> 07C76667 1A299881 21A00A47 402C8159
    Zuojhen 727808
      -> 229EC19C 2416050E 4E385D3A

</div>
