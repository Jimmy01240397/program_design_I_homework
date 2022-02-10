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

![](/Lec17/%E6%B3%95%E9%99%A3%E6%A8%A1%E6%93%AC%E5%99%A8%20-%20The%20Magic%20Circle%20Simulator/images/6d03f52f4b5c5f09f78965424672d48ad13a914c.png)

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
    ]{.underline}![](/Lec17/%E6%B3%95%E9%99%A3%E6%A8%A1%E6%93%AC%E5%99%A8%20-%20The%20Magic%20Circle%20Simulator/images/20dcfe2be0e95816633cfd84b5324f765c9866cb.png)

**\
複製晶球 Cloning Orb (C)**

-   置入在 Stem s 之後，計算目前整個魔法陣上總共有幾個複製晶球，假設為 k
    個。

-   將自 s 的逆時針方向的第 k 個 Stem 的構成轉換為 s 的構成。

-   範例：

![](/Lec17/%E6%B3%95%E9%99%A3%E6%A8%A1%E6%93%AC%E5%99%A8%20-%20The%20Magic%20Circle%20Simulator/images/ec95bd2633f20d77028a50fc245ede075b4861f4.png)

**\
擴展晶球 Expand Orb (E)**

-   置入 Stem s 之後，生成與 s 根部相同的普通晶球置入魔法陣上的所有
    Stem。

-   範例：

![](/Lec17/%E6%B3%95%E9%99%A3%E6%A8%A1%E6%93%AC%E5%99%A8%20-%20The%20Magic%20Circle%20Simulator/images/d44e02f6ce011e0ebff5292c157bb9850112d894.png)

**\
吸引晶球 Dyson Orb (D)**

-   置入 Stem s 之後，將 s 以外的魔法陣上所有跟 s
    的根相同的普通晶球吸引過來，一一置入。

-   範例:

![](/Lec17/%E6%B3%95%E9%99%A3%E6%A8%A1%E6%93%AC%E5%99%A8%20-%20The%20Magic%20Circle%20Simulator/images/d517aa76699c4848372dca990e5f46d3cc810060.png)

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
