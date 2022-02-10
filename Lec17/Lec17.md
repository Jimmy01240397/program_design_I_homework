Lec17
=====

HAPPY PARTY TRAIN
-----------------

### Description

<div>

One tourist train is departing, and it\'s powered by a steam locomotive.

Unfortunately, when passengers holding a party in cars,

the coal used as fuel in the back of the locomotive is on fire, burning
red.

And every car contains different number of flammable items.

When passengers see the fire coming, they try to move these items to
prevent fire burn to their car.

If number of peoples in the car \>= amounts of flammable items, fire
will not burn to this car and the following cars.

Otherwise, passengers in this car will evacuate to the the next car.

Now you know the number of people & flammable items in each car,

Please calculate how many cars will be burnt by fire.

This train is represented with linked-list，each `Car` node\'s `next`
will point to the next car，last cat will points to `NULL`

![Image](https://i.imgur.com/sK1mOQQ.png)

一列鐵道觀光專車在春天來臨的花香中，乘著無盡想像發車了

為了為乘客們帶來種種回憶，主辦單位特別使用蒸氣火車頭牽引這列專車

很不幸的，乘客們正在車廂中開派對時，車頭後作為燃料的煤炭起火了，正發出熊熊火光

而後方每節車廂中都有數量不等的易燃物

當大家發現火災發生時，便試著將易燃物搬開來避免火勢延燒

若該節車廂人數 \>=
易燃物數量時，火勢便會停止蔓延，不會延燒到該節和後續的車廂

但若人數不足，則車廂中所有人都會移往下一節車廂逃生

直到延燒停止或所有乘客無處可逃並跳車為止。

你已知的有每節車廂中的人數及易燃物數量

請計算火勢總共會延燒幾節車廂？

這列火車以 linked-list 形式紀錄，每個 `Car` 節點的 `next`
會指向下一節車廂，最後一節車廂則指向 `NULL`\
![Image](https://i.imgur.com/sK1mOQQ.png)

<https://youtu.be/eVwdeIDjXeM>

</div>

### Input

Head node of the linked-list representing the train.

### Output

Return one integer how many car is on fire.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>

    struct Car {
        int passenger;
        int flammable;
        struct Car *next;
    };

    void attachCar(struct Car *head, int passenger, int flammable) {
        struct Car *curr = head;
        while(curr->next) curr = curr->next;             // Find the end of the train

        struct Car *newcar = malloc(sizeof(struct Car)); // Make a new car
        newcar->passenger = passenger;                   // Let passengers in
        newcar->flammable = flammable;                   // Load flammable items
        newcar->next = NULL;                             // This is the last car

        curr->next = newcar;                             // Attach new car to the train
    }

    int fire(struct Car *head);

    int main(int argc, char *argv[])
    {
        int cars;
        int human[13], moeru[13];

        struct Car head;
        head.next = NULL; // passenger & flammable for head in useless

        scanf("%d", &cars);
        for (int i = 0; i <‍ cars; ++i) {
            scanf("%d", &human[i]);
        }
        for (int i = 0; i <‍ cars; ++i) {
            scanf("%d", &moeru[i]);
        }

        for (int i = 0; i <‍ cars; ++i) {
            attachCar(&head, human[i], moeru[i]);
        }

        printf("%d", fire(&head)); // The train is on fire now

        return 0;
    }

<div>

### Sample1

#### Input

    9
    2 1 4 7 4 8 3 6 4
    5 9 8 6 1 3 5 2 4

#### Output

    3

</div>

<div>

### Sample2

#### Input

    4
    17 17 11 8
    23 35 36 37

#### Output

    2

</div>

Returns
-------

### Description

<div>

Sometimes you want to return more than 1 values, you can use pointers to
do this.

Please allocate an array of int with length `n` using `malloc`, and fill
it with `index^2`

使用指標可以傳遞多個數值到 function
外，請使用`malloc`分配長度為`n`的整數陣列，並在其中每一格填入`index^2`

[https://youtu.be/KGR5WZV8gT](https://youtu.be/KGR5WZV8gT4)

</div>

### Input

int n

### Output

A pointer to an array of int

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>

    int *Returns(int n); 

    int main(int argc, char *argv[])
    {
        int in, *out;
        scanf("%d", &in);
        out = Returns(in);
        for(int i = 0; i <‍ in; ++i) {
            printf("out[%d] = %d\n", i, out[i]);
        }   
        free(out);
        return 0;
    }

<div>

### Sample1

#### Input

    4

#### Output

    out[0] = 0
    out[1] = 1
    out[2] = 4
    out[3] = 9

</div>

Stack
-----

### Description

<div>

Stack is an abstract data type that serves as a collection of elements,
with two main principal operations:

1.  Push: which adds an element to the top of the stack

2.  Pop: which removes an element from the top of the stack if the stack
    is not empty

![Image](https://www.tutorialspoint.com/data_structures_algorithms/images/stack_representation.jpg)

Please implement push and pop operations of the stack using linked list.

Reference:
<https://www.tutorialspoint.com/data_structures_algorithms/stack_algorithm.htm>

</div>

### Input

The input contains two parts. The first part is the number of the
operations. The second part contains the content of the operations,
which is push or pop an integer to/from the stack.

### Output

The output contains two lines. The first line is the size of the stack,
and the second line consists of elements\' data and each data is
followed by a space. You should output them in reverse chronological
order.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍string.h>
    #include <‍stdlib.h>

    struct element {
        int data;
        struct element *next;
    };

    void print_stack(struct element *top);
    void push(struct element **top_p, int data);
    struct element *pop(struct element **top_p);

    int main(void) {
        struct element *top = NULL;
        int num, data;
        char command[5];
        scanf("%d", &num);
        while (num--) {
            scanf("%4s", command);
            if (strcmp(command, "push") == 0) {
                scanf("%d", &data);
                push(&top, data);
            }
            else if (strcmp(command, "pop") == 0) {
                struct element *e = pop(&top);
                free(e);
            }
        }
        print_stack(top);
        while (top) {
            struct element *ptr = top;
            top = top->next;
            free(ptr);
        }
        return 0;
    }

    void print_stack(struct element *top) {
        int size = 0;
        for (struct element *ptr = top; ptr != NULL; ptr = ptr->next) {
            size++;
        }
        printf("%d\n", size);
        for (struct element *ptr = top; ptr != NULL; ptr = ptr->next) {
            printf("%d ", ptr->data);
        }
    }

<div>

### Sample1

#### Input

    5
    push 1
    push 2
    push 3
    pop
    pop

#### Output

    1
    1 

</div>

<div>

### Sample2

#### Input

    5
    push 1
    pop
    push 2
    push 3
    pop

#### Output

    1
    2 

</div>

Throwing Cards Away
-------------------

### Description

<div>

Given an ordered deck of n cards numbered 1 to n with card 1 at the top
and card n at the bottom, throw away the top card and move the next card
that is on the top of the deck to the bottom of the deck. Repeat this
process m times and find the sequence of discarded cards.

給一副排組，由上而下的編號為 1\~n，共會進行 m
次抽取，每次抽走最上層的牌並輸出此牌的編號，再將最上層的牌放到牌組的最下方。

</div>

### Input

Two integers n & m.

### Output

The sequence of the discarded cards. Every number is followed by one
space.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    7 7

#### Output

    1 3 5 7 4 2 6 

</div>

<div>

### Sample2

#### Input

    9 7

#### Output

    1 3 5 7 9 4 8 

</div>

法陣模擬器 - The Magic Circle Simulator
---------------------------------------

### Description

<div>

> **01/09 Update：在圖例中各色晶球右上方新增文字標示。**

本學期陪伴著大家的阿超，其實一直都在學習著魔法。\
而他所學習的，是由蘊含力量的『晶球 (Orbs)』組成『魔法陣 (Magic
Circle)』後來施放的。\
將各種不同的晶球置入後會引發各種不同的反應，最終生成一個可以協助施法的魔法陣。

\
就跟學習寫程式一樣，施放魔法也需要不停的練習才能專精；\
但阿超遇到了一個問題：晶球**很貴**。置入後又拿不回來，可經不起他隨意亂試亂浪費。\
於是他打算以程式來模擬放置晶球後的魔法陣的結果，來節省他得來不易的辛苦錢。

###  The Magic Circle

一個完整的魔法陣由以下兩個部分組成：

-   中心圓環，稱作『根』(Root)，**只能放置下方說明的普通晶球**

    -   將其中一個編號為 0，下方圖例為 12 點鐘方向。

-   自中心圓環連接出的的晶球列，稱作『枝』(Stem)，能放置任意晶球

    -   以根部的各晶球為首只能形成單一路徑，不能有圓環、分支。

    -   放置晶球時，必須自編號為 0
        的根部開始依順時針擺放，不論發生什麼反應。

以下是一個簡單範例，球中的數字標示放置的順序：

![](/Lec17/法陣模擬器%20-%20The%20Magic%20Circle%20Simulator/images/6d03f52f4b5c5f09f78965424672d48ad13a914c.png)

### Orbs

晶球名稱後方的括弧內的大寫英文字母，代表在 input 中對應的字元。\

**Red Orb (R) / Blue Orb (B) / Green Orb (G) / Yellow Orb (Y) /**

-   四種顏色的**普通晶球**，放置時不會產生任何反應。\

**\
漂浮晶球 Floater Orb (F)**

-   放置時不產生反應。

-   在同一個 Stem 上這個晶球後被置入的晶球，皆會被移動至該 Stem
    的第一個位置。

-   同一個 Stem
    上只可以有一個漂浮晶球，當置入第二個時該晶球會馬上消失，不對魔法陣做出任何改變。

-   **[所有其他晶球的反應皆會在漂浮反應後發生]{.underline}**[。]{.underline}

-   以下為在某 Stem 上以 `Y R F G B F G` 的順序置入晶球的範例：\
    [\
    ]{.underline}![](/Lec17/法陣模擬器%20-%20The%20Magic%20Circle%20Simulator/images/20dcfe2be0e95816633cfd84b5324f765c9866cb.png)

**\
複製晶球 Cloning Orb (C)**

-   置入在 Stem s 之後，計算目前整個魔法陣上總共有幾個複製晶球，假設為 k
    個。

-   將自 s 的逆時針方向的第 k 個 Stem 的構成轉換為 s 的構成。

-   範例：

![](/Lec17/法陣模擬器%20-%20The%20Magic%20Circle%20Simulator/images/ec95bd2633f20d77028a50fc245ede075b4861f4.png)

**\
擴展晶球 Expand Orb (E)**

-   置入 Stem s 之後，生成與 s 根部相同的普通晶球置入魔法陣上的所有
    Stem。

-   範例：

![](/Lec17/法陣模擬器%20-%20The%20Magic%20Circle%20Simulator/images/d44e02f6ce011e0ebff5292c157bb9850112d894.png)

**\
吸引晶球 Dyson Orb (D)**

-   置入 Stem s 之後，將 s 以外的魔法陣上所有跟 s
    的根相同的普通晶球吸引過來，一一置入。

-   範例:

![](/Lec17/法陣模擬器%20-%20The%20Magic%20Circle%20Simulator/images/d517aa76699c4848372dca990e5f46d3cc810060.png)

### Program Requirement

仔細閱讀以上說明以及下方的 loader code，撰寫程式碼令 Loader
可成功印出阿超完成的魔法陣的構成。

`head_t` 中的 `count` 可以提供你紀錄任何整數資料，但你不一定需要使用。

</div>

### Input

The first line contains two integer \`size\` and \`k\` \`size\`
indicates the size of the center ring. \`k\` indicates how many orbs
will be placed into the magic circle by hand. 1 ≤ size ≤ 100 0 ≤ k ≤
200; The Second Line contains \`size\` characters, Shows the
configuration of the center ring, starting from index 0. The Third Line
contains \`k\` characters, Shows the order to insert the orbs. The
available characters are \'R\' / \'G\' / \'B\' / \'Y\' / \'C\' / \'D\' /
\'E\' / \'F\'.

### Output

Print the final configuration of the magic circle. From index 0, print
the root at form \"CO\_X\", then chain \" -\> X\" To show the stem.
nothing should appear after \"CO\_X\" If the stem is empty The function
print\_magic\_circle() is already finished, you don\'t need to implement
it, but make sure your data is represented correctly for it to run.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>

    // Enumrations
    enum orb_type {
        O_UNSET = -1,
        O_RED = 17, O_BLUE = 1, O_GREEN = 6, O_YELLOW = 24,
        O_FLOAT = 5, O_CLONE = 2, O_EXPAND = 4, O_DYSON = 3
    };

    // Structure Declairation
    struct node_t {
        struct node_t *next;
        enum orb_type orb;
    };

    struct head_t {
        struct node_t *head;
        int count;
        enum orb_type orb;
    };

    // Function Prototypes
    struct head_t *alloc_list_heads(int size);              // Allocate memory for array of list heads
    void init_head_arr(struct head_t *arr, int size);       // Initialize array of linked-lists
    void print_magic_circle(struct head_t *arr, int size);  // Print the structure of magic circle
    void insert_next(struct head_t *arr, int size, const char c);  // Insert the next orb onto the magic circle

    // Main Function
    int main() {
        int size;       // Size of center ring
        int count;      // Number of stem orbs will be put;

        // Allocate ring
        scanf("%d%d%*c", &size, &count);
        struct head_t *center_ring = alloc_list_heads(size);

        // Read and set ring
        init_head_arr(center_ring, size);

        // Place the orbs
        for (int i = 0; i <‍ count; ++i) {
            insert_next(center_ring, size, getchar());
        }

        // Print magic circle configuration
        print_magic_circle(center_ring, size);
        return 0;
    }

    // Function Definitions
    void print_magic_circle(struct head_t *arr, int size) {
        if (!arr) {
            return;
        }

        for (int i = 0; i <‍ size; ++i) {
            // Print center orb
            printf("CO_%c", arr[i].orb + 'A');

            // Print stem
            struct node_t *cur = arr[i].head;
            while (cur) {
                printf(" -> %c", 'A' + cur->orb);
                cur = cur->next;
            }
            if (i + 1 <‍ size) putchar('\n');
        }
        return;
    }

<div>

### Sample1

#### Input

    3 11
    RGB
    RGBFFYYCDFE

#### Output

    CO_R -> G -> C -> G -> F
    CO_G -> G -> E -> C -> G -> F
    CO_B -> B -> Y -> D -> G

</div>

<div>

### Sample2

#### Input

    5 6
    YYYYY
    YYGYYD

#### Output

    CO_Y -> Y -> D -> Y -> Y -> Y
    CO_Y
    CO_Y -> G
    CO_Y
    CO_Y

</div>
