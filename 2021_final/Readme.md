2021\_final
===========

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

\[20 Points\] String Combination
--------------------------------

### Description

<div>

沒有錯，又是組合！

給予 n 個字串及數字 k，請將所有可能的組合列出來。

例如：給予 `n = 5`, `k = 2`，以及 `andy becky cindy jacky willy`
五個字串，

代表從 5 個字串中挑選 2
個出來，注意，須根據字串給予時的順序組合進行列印。詳細請見範例。

------------------------------------------------------------------------

Yah, Combination Again!

Given n strings and number k, please print all possible combinations
out.

For example, given `n = 5`, `k = 2`, and `andy becky cindy jacky willy`
five strings,

which means that you have to choose 2 strings from the 5 strings.

Notice that you need print out them according to the given order. See
examples.

</div>

### Input

輸入第一行為 n 跟 k，第二行有 n 個字串（以空格分開）。 1 \<= n \<=
20，且每個字串不超過十個字。 Print out k strings from the n strings,
according to the given order in the input.

### Output

印出 n 個字串取 k 個的結果，須根據字串給予時的順序組合進行列印。 Print
out k strings from the n strings, according to the given order in the
input.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5 2
    andy becky cindy jacky willy

#### Output

    andy becky 
    andy cindy 
    andy jacky 
    andy willy 
    becky cindy 
    becky jacky 
    becky willy 
    cindy jacky 
    cindy willy 
    jacky willy 

</div>

<div>

### Sample2

#### Input

    5 3
    andy becky cindy jacky willy

#### Output

    andy becky cindy 
    andy becky jacky 
    andy becky willy 
    andy cindy jacky 
    andy cindy willy 
    andy jacky willy 
    becky cindy jacky 
    becky cindy willy 
    becky jacky willy 
    cindy jacky willy 

</div>

<div>

### Sample3

#### Input

    8 1
    andy becky cindy jacky larry mandy sandy willy

#### Output

    andy 
    becky 
    cindy 
    jacky 
    larry 
    mandy 
    sandy 
    willy 

</div>

\[25 Points\] Birdy\'s Network
------------------------------

### Description

<div>

Birdy 是一個網路管理員，他想要使用一個 **鄰接表** (adjacency list)
來紀錄他負責管理的網路。\
我們可以使用一條 list 紀錄當前節點的所有相鄰節點(neighbor
node)，並將所有的節點資訊儲存於一條陣列中，\
以下是本鄰接表的示意圖：

![](/2021_final/%5B25%20Points%5D%20Birdy's%20Network/images/9b93c2bb45ee6823fe06d6554e9cfcd4679c94bd.png)

同時，他也希望鄰接表上的節點按照 id 由小到大的排序。\
請你幫助他建立並排序這張鄰接表。

------------------------------------------------------------------------

Birdy is a network administrator. He wants to use an **adjacency list**
to represent his network. One representation of adjacency list is an
array of linked lists which records the neighbors for each node. The
structure of the adjacency list is shown as following:

![](/2021_final/%5B25%20Points%5D%20Birdy's%20Network/images/9b93c2bb45ee6823fe06d6554e9cfcd4679c94bd.png)He
also wants to make the order of the adjacency list ascending. Please
help him load the data to an adjacency list and reorganize its order.

Note that the connection is directed.

</div>

### Input

Input contains multiple lines (\<= 1000 lines). The first number in each
line is node id. The numbers after \"-\>\" are the neighbor ids of
current node (in ascending order). The last number in each line is
always 0, which indicates the end of the line. All ids are positive
integers (1 \<= id \<= 2147483647).

### Output

Output contains the neighbor ids of each node (list in ascending order).

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>

    struct node {
        int id;
        struct node *next;
    };

    struct node *read_data(int *size); // TODO: implement this function

    void print_data(struct node *adj, int size) {
        if (!adj) {
            return;
        }
        for (int i = 0; i <‍ size; ++i) {
            printf("%d -> ", adj[i].id);
            for (struct node *ptr = adj[i].next; ptr != NULL; ptr = ptr->next) {
                printf("%d ", ptr->id);
            }
            putchar('\n');
        }
        return;
    }

    void free_data(struct node *adj, int size) {
        if (!adj) {
            return;
        }
        for (int i = 0; i <‍ size; ++i) {
            struct node *ptr = adj[i].next;
            while (ptr) {
                adj[i].next = ptr->next;
                free(ptr);
                ptr = adj[i].next;
            }
        }
        free(adj);
        return;
    }

    int main() {
        int size;
        struct node *adj = read_data(&size);
        if (!adj) {
            fprintf(stderr, "Error allocating memory.");
            exit(1);
        }
        print_data(adj, size);
        free_data(adj, size);
        return 0;
    }

<div>

### Sample1

#### Input

    100356 -> 4 458 0
    4 -> 458 0
    458 -> 0

#### Output

    4 -> 458
    458 -> 
    100356 -> 4 458

</div>

<div>

### Sample2

#### Input

    32 -> 14 22 0
    37 -> 14 32 0
    8 -> 22 37 0
    14 -> 8 22 32 37 0
    22 -> 8 14 32 37 0

#### Output

    8 -> 22 37
    14 -> 8 22 32 37
    22 -> 8 14 32 37
    32 -> 14 22
    37 -> 14 32

</div>

\[25 Points\] Order Recovery
----------------------------

### Description

<div>

小混蛋工廠最近遇到了大麻煩！

他們的系統不知道出了什麼問題，接收到的訂單可能會少字，並以奇怪的格式呈現。

請協助他們恢復訂單內容，並告訴他們該訂單要的貨到底是什麼！

舉例來說，當訂單收到的是 `ter:mel`，代表要的貨有兩個（以 `:`
隔開），其中一個包含字串 `ter`，另一個包含字串 `mel`。

然而，工廠內有太多東西了，以符合 `ter` 來說，可能是 `water`，可能是
`battery`，也可能是 `butter`。（沒錯，這間工廠什麼都有。）

因此小混蛋工廠的員工決定只選擇「最先符合該字串」的物品，當作客人要的貨，上述三項的話，將會選擇
`water` 當作結果。

（因為 `water`
是在第三個字母開始符合，其他兩者都是在第四個字母才開始符合。）

當然，若有兩個以上字串符合上述情況，則優先選擇字數最短的字串，字數相同時，則比較兩字串各字元，優先選擇字元較前面的字串。

例如：訂單要求 `ham`，則 `hammer` 和 `hamburger` 將選擇 `hammer`。

又例如：訂單要求 `yo`，則 `yolk` 和 `yoyo` 將選擇 `yolk`（因為順序上 `l`
比 `y` 前面）。

最後回到訂單的舉例，若 `ter` 選出的貨為 `water`，`mel` 選出的貨為
`melon`，則最後以 `+` 連結，輸出 `water+melon`。

另外，每張訂單最少有 1 樣物品，但最多不會超過 30 樣物品。

------------------------------------------------------------------------

Bestards\' Factory has a big trouble!

Somewhere is wrong in their system, so the order they received may miss
some characters, and is showed in a strange way.

Please help them recover the order, and tell they what the customers
want.

For example, if the order\'s content is `ter:mel`, it means there are
two items（separated by `:`）, one includes substring `ter`, and the
other includes substring `mel`.

However, there are too many goods, we use `ter` as an example, it may be
`water`, `battery`, or `butter`. (Yah, the factory sells everything!)

Hence we choose the goods that 「is matched by the substring from the
more forward position」, as the goods that the customers want.

In the example, we will choose `water`. (Since `water` matches `ter`
from the third position, while the other two match from the fourth
position.)

If there are at least two goods meet the condition, then we choose the
string with shorter length.

If the length are the same, then compare two strings, and choose the one
that is less than the other.

For example, if `ham`, then `hammer` and `hamburger`, we choose
`hammer`.

Another example, if `yo`, then `yolk` and `yoyo`, we choose `yolk`.
(Since in ascii, `l` is prior to `y`.)

Back to the first example, if `ter` represents for `water`, and `mel`
represents for `melon`, then concatenate them by using `+` and print out
`water+melon` as the result.

Every order orders at least 1 goods, but won\'t exceed 30 goods.

</div>

### Input

輸入為一字串，其中以 \':\' 分隔訂單物品。 The input is a string, and the
goods are separated by \':\'.

### Output

將各物品以 \'+\' 連結，輸出該筆訂單內容。 Concatenate each goods by
using \'+\', and then print it out.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #include <‍string.h>
    #define GOODS_SIZE 120
    #define MAX_ORDER_SIZE 30
    #define MAX_NAME_LEN 15

    void recovering_order(char *, char **);

    char names[GOODS_SIZE][MAX_NAME_LEN] = {
        "aluminum", "ammunition", "orange", "aspirin", "ax",
        "basketball", "zipper", "bell", "blanket", "drum",
        "canvas", "flute", "eraser", "mirror", "comb",
        "eggplant", "diamond", "zucchini", "door", "butter",
        "egg", "dart", "chair", "encyclopedia", "china",
        "fan", "glue", "elevator", "flower", "hat",
        "garlic", "strawberry", "glove", "flour", "ice",
        "ship", "hammer", "fur", "key", "honey",
        "grape", "icecream", "lock", "iron", "ivory",
        "jacket", "oil", "uniform", "kiwi", "pan",
        "helmet", "keyboard", "yoyo", "jet", "knife",
        "tie", "lemon", "xerox", "ink", "mutton",
        "newspaper", "melon", "coconut", "motorcycle", "longan",
        "nail", "rice", "magnet", "peanut", "ointment",
        "oar", "jeans", "nut", "arrow", "oven",
        "jewel", "wool", "noodle", "pencil", "lamp",
        "refrigerator", "needle", "roast", "vest", "yarn",
        "saw", "hamburger", "soap", "glass", "wine",
        "tangerine", "pillow", "umbrella", "zinc", "train",
        "uglifruit", "toast", "underwear", "vanilla", "jeep",
        "unicycle", "vase", "rope", "violin", "warship",
        "volleyball", "water", "yogurt", "submarine", "passionfruit",
        "yacht", "rose", "window", "yolk", "kite",
        "liquor", "xylophone", "toothbrush", "battery", "doll"
    };

    int main(void) {
        char order[500] = "", *result = NULL;
        scanf("%s", order);
        recovering_order(order, &result);
        printf("%s", result);
        free(result);
        return 0;
    }

<div>

### Sample1

#### Input

    ter:mel

#### Output

    water+melon

</div>

<div>

### Sample2

#### Input

    nut:il

#### Output

    nut+oil

</div>

<div>

### Sample3

#### Input

    in:lo:low

#### Output

    ink+lock+flower

</div>

\[30 Points\] Magic Bug
-----------------------

### Description

<div>

司波達也是名魔法工程師，平常的工作是替客戶調校及改善魔法道具（想不到吧，魔法也跟程式一樣喔～），今天他接到了一個棘手的案子，不管用什麼方式都找不到
Bug
在哪裡，因此他決定直接把魔法道具的記憶體倒出來看看，請你幫他開寫一支程式來印出魔法道具的記憶體內容。

你的程式會得到兩個數字：stb 跟 num，其中 num 是長度固定為 8
位元組的數字，而 stb
代表司波想要檢測的記憶體內容的開頭。司波每次固定檢查從 stb 開始的 8
個位元，為了避免模糊焦點，請將不需要被檢測的記憶體內容設為 0。

Tatsuya is a magic engineer whose daily job is to calibrate and improve
the magic tools. One day he got sucked in a tricky job that an unknown
bug takes him a week and still no progress. To find out the mistake of
the magic program, he decides to dump the entire memory of the magic
tool, please help him to fulfill that.

Your program will recieve two integer: stb and num, where num is an
8-byte number, and stb indicates the begining bit that Tatsuya
interested in. Notice that only 8 bits will be checked each time, please
zero out the rest of bits to zero before print out the content.

![Screenshot from 2022-01-10
18-58-51.png](/2021_final/%5B30%20Points%5D%20Magic%20Bug/images/510d94bb3ee8cb778ce3016d5ce8f1426d60c836.png)

![](http://5b0988e595225.cdn.sohucs.com/images/20190310/8e8de645effc4993a1da8e22bbf7006d.gif)

</div>

### Input

輸入的第一行是一個整數 N 代表記憶體內容的數量，之後的 N
行皆是記憶體內容，且輸入符合「stb-num」的格式，其中 stb
代表要檢查的記憶體區段的起始位置，而 num 為一個固定為 8 位元組的 16
進位數字。 The first line contains an integer N that indicates the
number of memory contents to print. The rest of N lines are the memory
content in the format \"stb-num\" where stb indicates the start bit, and
num is an integer in hex format with fixed length in 8 bytes.

### Output

對於每行記憶體內容，請印出相對應的二進位內容。 N lines of integers in
binary format, there should be a whitespace between two bytes of with in
an integer.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    6
    6-0x36c3bf4154901a51
    24-0x6cd08f786630bc7d
    7-0x49662b322f44fe5
    4-0xd19c56a0052f04e
    24-0x50f25f5349ba72e6
    27-0x4486df6f6fdda642

#### Output

    00000000 00000000 00000000 00000000 00000000 00000000 00011010 01000000 
    00000000 00000000 00000000 00000000 01100110 00000000 00000000 00000000 
    00000000 00000000 00000000 00000000 00000000 00000000 01001111 10000000 
    00000000 00000000 00000000 00000000 00000000 00000000 00000000 01000000 
    00000000 00000000 00000000 00000000 01001001 00000000 00000000 00000000 
    00000000 00000000 00000000 00000111 01101000 00000000 00000000 00000000 

</div>

<div>

### Sample2

#### Input

    11
    48-0x3f9b91e666a0e8b
    15-0x64feb3044281b8ad
    25-0x5256e33a7882f5d1
    47-0x75f7469226eb2fdd
    27-0xe1013e93f389ce9
    45-0x74205f5211db3a0
    18-0xf58b2e3427ec21d
    15-0x65e523c00e7427f3
    9-0x49028dfe4917ca7e
    20-0x70222da20482132a
    30-0x373d4c0b087bcc49

#### Output

    00000000 11111001 00000000 00000000 00000000 00000000 00000000 00000000 
    00000000 00000000 00000000 00000000 00000000 00000001 10000000 00000000 
    00000000 00000000 00000000 00000000 01111000 00000000 00000000 00000000 
    00000000 01110111 00000000 00000000 00000000 00000000 00000000 00000000 
    00000000 00000000 00000000 00000001 00111000 00000000 00000000 00000000 
    00000000 00000010 00000000 00000000 00000000 00000000 00000000 00000000 
    00000000 00000000 00000000 00000000 00000010 01111100 00000000 00000000 
    00000000 00000000 00000000 00000000 00000000 01110100 00000000 00000000 
    00000000 00000000 00000000 00000000 00000000 00000001 11001010 00000000 
    00000000 00000000 00000000 00000000 00000100 10000000 00000000 00000000 
    00000000 00000000 00000000 00001011 00000000 00000000 00000000 00000000 

</div>

<div>

### Sample3

#### Input

    6
    7-0x1151b9a4384027f7
    26-0x5d63ecf71ec5a259
    54-0x606a23ce0dfa5d1c
    19-0x1f4b24710d61928b
    1-0xbd1352f748aa177
    42-0xad8c1441228c898

#### Output

    00000000 00000000 00000000 00000000 00000000 00000000 00100111 10000000 
    00000000 00000000 00000000 00000011 00011100 00000000 00000000 00000000 
    00100000 01000000 00000000 00000000 00000000 00000000 00000000 00000000 
    00000000 00000000 00000000 00000000 00000101 01100000 00000000 00000000 
    00000000 00000000 00000000 00000000 00000000 00000000 00000001 01110110 
    00000000 00000000 11000000 00000000 00000000 00000000 00000000 00000000 

</div>

<div>

### Sample4

#### Input

    1
    26-0x463180af3385451e

#### Output

    00000000 00000000 00000000 00000011 00110000 00000000 00000000 00000000 

</div>

\[30 Points\] Pull The Radish
-----------------------------

### Description

<div>

在開心農場裡，Ariel 種了 `N`
根蘿蔔，每個蘿蔔的間距為一公尺，今天是收成的日子，但 Ariel
不想要一次拔光所有蘿蔔，所以他決定以自己為起點 (起點為
`y`)，分別向左和向右，每隔 `x` 公尺就拔一根蘿蔔，請輸出 Ariel
今天總共收成了幾根蘿蔔，並告訴他現在農場的情況。\
\
`farm[N]` 表示農場狀況，若 `farm[i]` 為 1 ，表示在 index 為 `i`
時，有種一根蘿蔔 ; 若 `farm[i]` 為 0 ，表示在 index 為 `i`
時，沒有種蘿蔔。( index `i` 與 `i+1` 之間表示間隔為一公尺)

**Notice**: 請完成 `pull_radish`
函式，並回傳總共拔了幾個蘿蔔，注意參數是什麼 !

------------------------------------------------------------------------

In happy farm, Ariel planted `N` radishes. The radishes are spaced at
one-meter intervals. It is time to harvest, but Ariel doesn\'t want to
pull all radishes. Therefore, she deicides to start with herself
(starting point is `y`), and pulls radishes every `x` meters to left and
right, respectively. Please output how many radishes Ariel pulls and the
situation of farm.

`farm[N]` represents the situation of farm. If `farm[i]` is 1, that
means there is a radish at index `i` ; If `farm[i]` is 0, that means
there isn\'t a radish at index `i`.

**Notice**: Please finish `pull_radish` function, and return the number
of radishes that Ariel pulls. Pay attention to the parameter!

</div>

### Input

There are three number, integer N , y and x, represent the number of
radishes, Ariel\'s position and the interval.

### Output

Output the total of radishes which Ariel pulled and the array farm\[N\]

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍stdlib.h>

    int pull_radish(int *l, int *r, int *pos, int x);

    int main() {
        int N, y, x;
        scanf("%d %d %d", &N, &y, &x);
        int *farm = malloc(N * sizeof(int));

        // initialize farm[N]
        for(int i=0; i<‍N; i++) {
            farm[i] = 1;
        }

        int total = pull_radish(&farm[0], &farm[N-1], &farm[y], x);
        printf("%d\n", total);
        for(int i=0; i<‍N; i++) {
            printf("%d ", farm[i]);
        }

        return 0;
    }

<div>

### Sample1

#### Input

    8 2 2

#### Output

    3
    0 1 1 1 0 1 0 1 

</div>

<div>

### Sample2

#### Input

    15 14 5

#### Output

    2
    1 1 1 1 0 1 1 1 1 0 1 1 1 1 1 

</div>

