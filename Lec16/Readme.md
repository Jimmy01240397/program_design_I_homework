Lec16
=====

LEVEL5 -judgelight-
-------------------

### Description

<div>

Given an array of `struct ESPer` which contains `level` and `name`,

please sort this array in ascending order by level.

hint: You can use C standard library\'s `qsort` function:

學園都市是個進行超能力開發的機關，會定期對學生進行能力檢測

他們使用的資料結構包含兩個欄位：`level` 和 `name`

請你寫一個 function 來對包含這個 struct 的陣列做排序

hint: 你可以使用內建的 `qsort`

<https://youtu.be/EGmLt7mYSo4>

</div>

### Input

An array of \"struct ESPer\", array length

### Output

sort the array in ascending order by level.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>

    struct ESPer {
        char name[64];
        int level;
    };

    int cmp(const void *a, const void *b);
    void sort_level(struct ESPer *arr, int length);

    int main()
    {
        int n;
        struct ESPer tokiwadai[100];

        scanf("%d", &n);
        for(int i = 0; i <‍ n; ++i) {
            scanf("%d %s", &(tokiwadai[i].level), tokiwadai[i].name);
        }

        sort_level(tokiwadai, n);

        for(int i = 0;i <‍ n;++i) {
            printf("%d %s\n", tokiwadai[i].level, tokiwadai[i].name);
        }

        return 0;
    }

<div>

### Sample1

#### Input

    5
    6 NanjoYoshino
    5 MisakaMikoto
    0 SatenRuiko
    1 UiharuKazari
    4 ShiraiKuroko

#### Output

    0 SatenRuiko
    1 UiharuKazari
    4 ShiraiKuroko
    5 MisakaMikoto
    6 NanjoYoshino

</div>

Look Up the Word in the Dictionary
----------------------------------

### Description

<div>

Jack wants to search a word. Please help him to find which page he
should turn to.

**Hint**: use `strcmp()`

</div>

### Input

There are 10 records in a dictionary and a target word.

### Output

Return the target page. If the target word is not in the dictionary,
return 0.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍string.h>
    #define N 10

    typedef struct dict_t_struct {
        char word[10];
        int page;
    } dict_t;

    int search(dict_t arr[], char target[]);

    int main() {
        dict_t dictionary[N];
        char targetWord[10];

        for(int i=0; i<‍N; i++) 
            scanf("%s %d\n", dictionary[i].word, &dictionary[i].page);
        
        scanf("%s", targetWord);
        int targetPage = search(dictionary, targetWord);
        printf("%d", targetPage);
        return 0;
    }

<div>

### Sample1

#### Input

    apple 2
    banana 5
    cow 7
    dog 9
    element 13
    frog 22
    go 44
    horse 51
    in 52
    jet 100
    element

#### Output

    13

</div>

<div>

### Sample2

#### Input

    apple 2
    banana 5
    cap 6
    dog 9
    element 13
    frog 22
    go 44
    horse 51
    in 52
    jet 100
    cow

#### Output

    0

</div>

Matrix Addition and Multiplication
----------------------------------

### Description

<div>

Write a program that implements matrix addition and multiplication of
two matrices.

</div>

### Input

The input contains three parts. The first and second part represent the
information of the first matrix and the second matrix respectively. The
first line of each part contains row and column number of the matrix,
and the following line is an array of integers which represent the
matrix itself. The second part is a character which represents the
operation of the matrix.

### Output

The content of the result matrix. Each element is followed by a space
character.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define SIZE 50

    struct mat {
        int row;
        int col;
        int value[SIZE][SIZE];
    };

    void scan_mat(struct mat *);
    void print_mat(const struct mat *);
    void add_mat(const struct mat *, const struct mat *, struct mat *);
    void mul_mat(const struct mat *, const struct mat *, struct mat *);

    int main(void) {
        struct mat m1, m2, result;
        char op;
        scan_mat(&m1);
        scanf(" %c", &op);
        scan_mat(&m2);
        switch (op) {
            case '+':
                add_mat(&m1, &m2, &result);
                break;
            case '*':
                mul_mat(&m1, &m2, &result);
                break;
        }
        print_mat(&result);
        return 0;
    }

    void scan_mat(struct mat *m_p) {
        scanf("%d %d", &m_p->row, &m_p->col);
        for (int i = 0; i <‍ m_p->row; ++i) {
            for (int j = 0; j <‍ m_p->col; ++j) {
                scanf("%d", &m_p->value[i][j]);
            }
        }
    }

    void print_mat(const struct mat *m_p){
        for (int i = 0; i <‍ m_p->row; ++i) {
            for (int j = 0; j <‍ m_p->col; ++j) {
                printf("%d ", m_p->value[i][j]);
                if (j == m_p->col - 1) {
                    printf("\n");
                }
            }
        }
    }

<div>

### Sample1

#### Input

    2 3
    3 2 6
    2 4 5
    +
    2 3
    4 5 6
    3 1 4

#### Output

    7 7 12 
    5 5 9 

</div>

<div>

### Sample2

#### Input

    2 2
    1 2
    3 4
    *
    2 2
    5 6
    7 8

#### Output

    19 22 
    43 50 

</div>

Notice Struct Pointer
---------------------

### Description

<div>

Given two struct Nodes, please multiply their `num`.

Be careful these two Node\'s type, one is a struct variable and another
is a struct pointer.

</div>

### Input

Two struct Nodes, long long int ans and every variable num \< 10000

### Output

Multiply these two node\'s num

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>

    struct Node {
        int num;
    };
    void mul(struct Node *, struct Node, long long int *);

    int main(void) {
        struct Node node_a, node_b;
        long long int ans = 1;
        scanf("%d", &node_a.num);
        scanf("%d", &node_b.num);
        mul(&node_a, node_b, &ans);
        printf("%lld", ans);
        return 0;
    }

<div>

### Sample1

#### Input

    8687 363 

#### Output

    3153381

</div>

<div>

### Sample2

#### Input

    3741 3313 

#### Output

    12393933

</div>

Sei\'s online potion store
--------------------------

### Description

<div>

Sei is a researcher at the Medicinal Flora Research Institute. She has
been work there for a year and is struggling to improve her KPI. One day
she finds out that she can sell potions online to improve her poor KPI
(?. After several days of hard working, she has finished a framework of
the ordering system, there are only two little functions that aims to
calculate the total cost of orders and reordering the orders gaps her
from finish, please help her to fulfill those functions.

She currently sells 15 potion products over the online shop that are
given name `Prod_A, Prod_B ..., Prod_O`, each product costs differently,
the information could be found in the finished part (loader code) of the
platform. You do not need to concern the orders with the same pick up
time.![](https://64.media.tumblr.com/a527a758b1d7ad5b066382dd1e879acb/da9735baa45d502a-9e/s400x600/39963fb633c270428befd5937883837e6ae46561.gifv)

</div>

### Input

The first line contains an integer N that indicates the number of orders
which followed by the detail of N orders. For each order, the order ID
comes first, then the pick up time of the order which followed by the
item count M of the order, finally M items and the count are given.

### Output

The order ID and the total cost of the orders, the order that has a
closer pick up time comes first.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍string.h>
    #include <‍stdlib.h>

    typedef struct {
        unsigned char hour;
        unsigned char minute;
    } hm_t;

    typedef struct {
        const char *item_name;
        unsigned cost;
        unsigned cnt;
    } item_t;

    typedef struct {
        unsigned order_id;
        hm_t pick_up_time;
        unsigned total_cost;
        unsigned item_cnt;
        item_t *items;
    } order_t;

    const item_t avaliable_items[] = {
        {"Prod_A",  10},
        {"Prod_B",  20},
        {"Prod_C",  15},
        {"Prod_D",  30},
        {"Prod_E",  50},
        {"Prod_F",  60},
        {"Prod_G",  75},
        {"Prod_H",   5},
        {"Prod_I",  25},
        {"Prod_J",  80},
        {"Prod_K", 100},
        {"Prod_L",  90},
        {"Prod_M",  45},
        {"Prod_N",  40},
        {"Prod_O",  85},
    };

    const unsigned avaliable_item_cnt = 15;
    #define MAX_ORDER_CNT 1024

    unsigned fetch_orders(order_t orders[]);
    void sum_total_costs(order_t orders[], unsigned order_cnt);
    void reorder(order_t orders[], unsigned order_cnt);
    void print_result(order_t orders[], unsigned order_cnt);
    void clean_up(order_t orders[], unsigned order_cnt);

    int main()
    {
        order_t orders[MAX_ORDER_CNT];
        unsigned order_cnt = fetch_orders(orders);
        sum_total_costs(orders, order_cnt);
        reorder(orders, order_cnt);
        print_result(orders, order_cnt);
        clean_up(orders, order_cnt);
        return 0;
    }

    unsigned fetch_orders(order_t orders[])
    {
        unsigned order_cnt;
        scanf("%u", &order_cnt);

        // Prepare the orders.
        order_t *curr = orders;
        for (unsigned i = 0; i <‍ order_cnt; i++, curr++) {
            hm_t *curr_pu = &(curr->pick_up_time);
            scanf("%u %hhu:%hhu %u",
                                    &(curr->order_id),
                                    &(curr_pu->hour),
                                    &(curr_pu->minute),
                                    &(curr->item_cnt));

            // Create a variable length array with malloc.
            item_t *curr_items = curr->items = malloc(sizeof(item_t) * curr->item_cnt);
            for (unsigned j = 0; j <‍ curr->item_cnt; j++) {
                char item_name[32];
                scanf("%s", item_name);
                for (unsigned k = 0; k <‍ avaliable_item_cnt; k++) {
                    if (!strcmp(item_name, avaliable_items[k].item_name)) {
                        // Copy the memory content from avaliable_items to curr_items.
                        curr_items[j] = avaliable_items[k];
                        break;
                    }
                }
                scanf("%u", &(curr_items[j].cnt));
            }
        }
        return order_cnt;
    }

    void print_result(order_t orders[], unsigned order_cnt)
    {
        for (unsigned i = 0; i <‍ order_cnt; i++) {
            printf("#%u %u\n", orders[i].order_id, orders[i].total_cost);
        }
    }

    void clean_up(order_t orders[], unsigned order_cnt)
    {
        for (unsigned i = 0; i <‍ order_cnt; i++) {
            free(orders[i].items);
        }
    }

<div>

### Sample1

#### Input

    3
    123 1:40 2
    Prod_A 2
    Prod_B 3
    234 2:10 3
    Prod_D 12
    Prod_E 1
    Prod_C 4
    345 1:30 4
    Prod_A 3
    Prod_B 5
    Prod_C 1
    Prod_D 2

#### Output

    #345 205
    #123 80
    #234 470

</div>

<div>

### Sample2

#### Input

    5
    100 3:10 1
    Prod_O 1
    101 1:00 3
    Prod_K 2
    Prod_L 5
    Prod_A 20
    102 0:40 2
    Prod_C 4
    Prod_I 2
    103 5:45 1
    Prod_E 2
    104 6:00 4
    Prod_F 1
    Prod_N 1
    Prod_L 1
    Prod_A 1

#### Output

    #102 110
    #101 850
    #100 85
    #103 100
    #104 200

</div>

Sort Snacks
-----------

### Description

<div>

In lab, students buy snacks once a month. They want to choose snacks
with good value for money. (物超所值)

The `value` means `weight/price`.

Please help them sort snacks in descending order based on snacks\'
`value`.\
If the `value` of snacks are equal, sort snacks in ascending order based
on snacks\' `price`.\
If the `price` of snacks are equal, sort snacks in ascending order based
on snacks\' `id`.

You can use C standard library\'s `qsort` function to sort snacks:

`void qsort (void* base, size_t num, size_t size, int (*compar)(const void*,const void*));`

The reference link:
<https://www.cplusplus.com/reference/cstdlib/qsort/?kw=qsort>

</div>

### Input

n kinds of snacks.

### Output

Output the id and value of n sorted snacks.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍stdlib.h>

    struct snack
    {
        int id;
        int price;
        int weight;
        double value;
    };

    int cmp(const void *a, const void *b);
    void sort_snacks(struct snack snacks[], int n);

    int main() {
        int n;
        struct snack snacks[100];
        scanf("%d", &n);
        for(int i=0; i<‍n; i++) {
            snacks[i].id = i+1;
            scanf("%d %d", &snacks[i].price, &snacks[i].weight);
        }
        sort_snacks(snacks, n);
        for(int i=0; i<‍n; i++) {
            printf("%d %.2f\n", snacks[i].id, snacks[i].value);
        }
        return 0;
    }

<div>

### Sample1

#### Input

    5
    1 2
    4 6
    4 10
    2 3
    12 18

#### Output

    3 2.50
    1 2.00
    4 1.50
    2 1.50
    5 1.50

</div>

<div>

### Sample2

#### Input

    7
    8 2
    44 10
    7 2
    22 5
    6 9
    10 4
    4 1

#### Output

    5 1.50
    6 0.40
    3 0.29
    7 0.25
    1 0.25
    4 0.23
    2 0.23

</div>

Struct Array
------------

### Description

<div>

Given a struct array (named Node) and every Node has variable `a` (int
type).

Node array has 5 Node elements, please multiply every Node\'s `a`
variable.

</div>

### Input

struct Node array (contain five nodes), long long int ans and each
variable a \< 30.

### Output

Multiply every Node\'s a variable

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define SIZE 5

    struct Node {
        int a;
    };

    void mul(struct Node *, long long int *);

    int main(void) {
        struct Node node_array[SIZE];
        for(int i=0; i<‍SIZE; i++){
            scanf("%d", &node_array[i].a);
        } 
        long long int ans = 1;
        mul(node_array, &ans);
        printf("%lld", ans);
        return 0;
    }

<div>

### Sample1

#### Input

    25 21 17 8 15 

#### Output

    1071000

</div>

<div>

### Sample2

#### Input

    11 2 28 24 3 

#### Output

    44352

</div>

Weighted Score
--------------

### Description

<div>

期末快到了，該到結算成績的時候，請你幫助教算出所有學生們的期末成績以及最高分章節成績與最低分章節。\
在這裡有三個 struct:

-   `weight` : 每個章節會有不同的比重，**全部的比重加起來為 100**

-   `score` : 每個章節加權前的分數

-   `report_card` :

    -   `final` : 加權後的分數 (無條件捨去到整數位)

    -   `max_score` : 最高分章節成績

    -   `min_score` : 最低分章節成績

------------------------------------------------------------------------

Please help TAs to calculate student's final score, maximum score and
minimum score.

There are three structs:

-   `weight` : Each chapter contain different weight, **sum of them is
    100**.

-   `score` : The score of each chapter

-   `report_card` :

    -   `final` : Score after weighting

    -   `max_score` : Maximum score

    -   `min_score` : Minimum score

</div>

### Input

First line contain two numbers: chapter\_num (n), student\_num (m) 1 \<=
chapter\_num (n) \<= 10 1 \<= student\_num (m) \<= 100 Each of following
n lines contain one number and a string. The number means the weight of
chapter. The string means the name of chapter. Followings are the
student information. First line is student name. Next n lines are
student score and chapter. 0 \<= student score \<= 100

### Output

Student name, final score, maximum score and minimum score

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>

    struct weight {
        char chapter[10];
        int percent;
    };

    struct score {
        char chapter[10];
        int score;
    };

    struct report_card {
        char name[32];
        struct score record[10];
        int final;
        int max_score;
        int min_score;
    };

    void calculate (struct report_card[], struct weight[], int student_num, int chapter_num);

    int main () {
        int student_num, chapter_num;
        struct weight chapter[10];
        struct report_card card[100];

        scanf("%d %d\n", &chapter_num, &student_num);
        for (int i = 0; i <‍ chapter_num; ++i) {
            scanf("%d %s", &chapter[i].percent, chapter[i].chapter);
        }

        for (int i = 0; i <‍ student_num; ++i) {
            scanf("%s", card[i].name);
            for (int j = 0; j <‍ chapter_num; ++j) {
                scanf("%d %s", &card[i].record[j].score, card[i].record[j].chapter);
            }
        }

        calculate(card, chapter, student_num, chapter_num);

        for (int i = 0; i <‍ student_num; ++i) {
            printf("%s %d %d %d\n", card[i].name, card[i].final, card[i].max_score, card[i].min_score);
        }
    }

<div>

### Sample1

#### Input

    3 3
    30 array
    30 loop
    40 pointer
    amy
    80 array
    70 loop
    100 pointer
    sam
    80 pointer
    80 array
    80 loop
    alice
    60 loop
    50 pointer
    60 array

#### Output

    amy 85 100 70
    sam 80 80 80
    alice 56 60 50

</div>

<div>

### Sample2

#### Input

    2 4
    10 union
    90 struct
    lili
    80 union
    80 struct
    christopher
    80 union
    80 struct
    pata
    0 struct
    100 union
    pon
    100 struct
    0 union

#### Output

    lili 80 80 80
    christopher 80 80 80
    pata 10 100 0
    pon 90 100 0

</div>

windowlocation
--------------

### Description

<div>

在 Chrome 瀏覽器內按下 F12，會打開瀏覽器的開發者工具。在 console
當中輸入 `window.location`，會看到一個叫作 `Location`
的結構跑出來，上頭記載了你當前所在的網址所包含的資訊，包含：

-   通訊協定 (protocol)

-   主機名稱 (host)

-   通訊埠 (port)

-   所在路徑 (pathname)

-   查詢字串/Query String (search)

-   識別符號 (hash)

那麼，這些不同的部份是怎麼被切出來的呢？其實網址是有固定格式的，就跟你家的門牌號碼一樣。網址的格式為：

`[通訊協定]://[主機名稱]:[通訊埠]/[所在路徑]?[查詢字串]#[識別符號]`

舉例，`https://www.abc.com/user/12345/photo?from=20180101&to=20201231#favorite`可以被切成：

-   通訊協定 = `https`

-   主機名稱 = `www.abc.com`

-   通訊埠 = 預設不顯示（但因為使用的是 https，所以可知是 443）

-   所在路徑 = `/user/12345/photo`

-   查詢字串 = `?from=20180101&to=20201231`

-   識別符號 = `#favorite`

但也並非所有部份都位同時存在於一個網址中，像是本頁面的網址就沒有查詢字串的部份。

現在，給你一些網址，請你幫忙找出上述的片段，並裝入 `Location` 結構當中。

</div>

### Input

An valid url. Must includes protocol and host part, but port, pathname,
search and hash are not necessarily existing.

### Output

You should put the information parsed from url into the struct passed by
argument. For information not existing in url, if it\'s an integer, set
to 0; if it\'s a string, make it an empty string. Hint: you should
prepare memory storage yourself.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #include <‍string.h>

    typedef struct
    {
        char *protocol;
        char *host;
        char *pathname;
        char *search;
        char *hash;
        int port;
    } Location;

    Location *parse_url(char *url);

    int main()
    {
        char url[500] = "";
        fgets(url, 500, stdin); // Get url string
        Location *l = parse_url(url);
        printf("Location {\n  protocol: %s,\n  host: %s,\n", l->protocol, l->host);
        if (l->port)
            printf("  port: %d,\n", l->port);
        else
            printf("  port: (default),\n");
        printf("  pathname: /%s,\n  search: ?%s,\n  hash: #%s,\n}\n", l->pathname, l->search, l->hash);
        return 0;
    }

<div>

### Sample1

#### Input

    https://www.abc.com:80/user/12345/photo?from=20180101&to=20201231#favorite

#### Output

    Location {
      protocol: https,
      host: www.abc.com,
      port: 80,
      pathname: /user/12345/photo,
      search: ?from=20180101&to=20201231,
      hash: #favorite,
    }

</div>

<div>

### Sample2

#### Input

    http://1.2.3.4:443/it/is/a/very/long/path/name

#### Output

    Location {
      protocol: http,
      host: 1.2.3.4,
      port: 443,
      pathname: /it/is/a/very/long/path/name,
      search: ?,
      hash: #,
    }

</div>

<div>

### Sample3

#### Input

    ip://193.55.28.30

#### Output

    Location {
      protocol: ip,
      host: 193.55.28.30,
      port: (default),
      pathname: /,
      search: ?,
      hash: #,
    }

</div>

