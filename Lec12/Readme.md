Lec12
=====
Cropped Report Card
-------------------

### Description

<div>

考試考完，又到了面對現實的時刻。大雄很緊張，因為他知道肯定會有科目不及格，但是不能給媽媽看到不及格的成績，所以裁切成績單的時刻到了！

裁切成績單的規則是：

1.  裁切後的成績單內只有及格 (大於等於六十分) 的成績

2.  成績數量越多越好，這樣媽媽才不會懷疑成績單是不是被動了手腳

3.  如果數量相等，取成績合最大的區段

舉例來說，現在大雄的成績是 `40 50 60 70 80 50 90`，\
那我們想要找到的成績區段就是 `60 70 80`

請你幫助大雄度過難關！

------------------------------------------------------------------------

After the exam, it's time to face the reality.\
Nobita is nervious because he knows that he must have failed some
subjects. He will be in trouble if his mom knows that. It is time to
crop the report card!

The rules of croping reocrd card are listed below:

1.  The cropped report card should only contain the score higher or
    equal to 60 points.

2.  There should be as many score records as possibile.

3.  If the number of score records is the same, choose the section with
    the highest sum of scores.

For example, Nobita's scores are`40 50 60 70 80 50 90`,\
the result should be `60 70 80`.

Please help Nobita overcome this difficulty.

</div>

### Input

A line contain n integers. The 1st number to (n - 1)th number indicate
the score. The nth number is -1 0 \<= score \<= 100 1 \<= n \<= 1000

### Output

The scores on the report card. Each number must follow by a space.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    int *report_card (int *s) ;

    int main () {
        int score[1001];
        int *show;
        int count = 0;

        do {
            scanf("%d", &score[count++]);
        } while (score[count - 1] != -1);

        show = report_card(score);

        count = 0;
        while (*(show + count) != -1) {
            printf("%d ", *(show + count));
            count++;
        }
    }

<div>

### Sample1

#### Input

    50 60 70 80 90 40 80 -1

#### Output

    60 70 80 90 

</div>

<div>

### Sample2

#### Input

    40 60 70 50 80 90 -1

#### Output

    80 90 

</div>
Modifying Array Problem
-----------------------

### Description

<div>

給定一陣列，利用指標操作，根據給定的模式，將陣列的值做對應的轉換。

規則如下：

一開始給定一個陣列 `arr`，其中的第一個元素（`arr[0]`）代表的是「模式」。

對於接下來的元素（`arr[1]` \~ `arr[SIZE-1]`），我們用一個新的陣列
`newArr` 來講解。

我們讓：

`newArr[0]` = `arr[1]`

`newArr[1]` = `arr[2]`

`newArr[2]` = `arr[3]`

依此類推，`newArr[i]` = `arr[i+1]`。

在 `newArr` 裡，

如果模式為 1，則 index 為 2 的倍數的值將加上 10；

如果模式為 2，則 index 為 3 的倍數的值將乘以 8；

如果模式為 3，則 index 為 5 的倍數的值將減去 2。

最後，將改動後的內容印出來（不包含「模式」的值）。

**注意：須根據給定之** `main` **函式完成** `modify_array`
**函式的實作，請仔細閱讀** `main` **函式的內容 ;) 。**

------------------------------------------------------------------------

Given an array, please use pointer to modify its elements\' values based
on the provided mode.

The rule is showed below:

We will give you an array `arr`, the first element (`arr[0]`)
means「mode」.

For the other elements (`arr[1]` \~ `arr[SIZE-1]`), we will use a new
array `newArr` to introduce.

Let\...

`newArr[0]` = `arr[1]`

`newArr[1]` = `arr[2]`

`newArr[2]` = `arr[3]`

and so on, `newArr[i]` = `arr[i+1]`.

In `newArr`,

if the mode is 1, then the value should add 10 if its index is the
multiples of 2;

if the mode is 2, then the value should time 8 if its index is the
multiples of 3;

if the mode is 3, then the value should minus 2 if its index is the
multiples of 5.

Then, print the modified array excluding the mode\'s value.

**Notice: You have to implement** `modify_array()` **based on the
provided** `main()`**, please read** `main()` **carefully ;).**

</div>

### Input

給定一陣列，第一個元素為改動模式的數值。 Given an array, the first
element is the mode\'s value.

### Output

改動後陣列的內容（不包含「模式」的值）。 The modified array excluding
the mode\'s value.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define SIZE 201

    void modify_array(int *);

    int main(void) {
        int arr[SIZE];
        for (int i = 0; i <‍ SIZE; i++) {
            scanf("%d", &arr[i]);
        }
        modify_array(&arr[SIZE/2]);
        for (int i = 1; i <‍ SIZE; i++) {
            printf("%d ", arr[i]);
        }
        return 0;
    }

<div>

### Sample1

#### Input

    1 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120 121 122 123 124 125 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 181 182 183 184 185 186 187 188 189 190 191 192 193 194 195 196 197 198 199 200

#### Output

    11 2 13 4 15 6 17 8 19 10 21 12 23 14 25 16 27 18 29 20 31 22 33 24 35 26 37 28 39 30 41 32 43 34 45 36 47 38 49 40 51 42 53 44 55 46 57 48 59 50 61 52 63 54 65 56 67 58 69 60 71 62 73 64 75 66 77 68 79 70 81 72 83 74 85 76 87 78 89 80 91 82 93 84 95 86 97 88 99 90 101 92 103 94 105 96 107 98 109 100 111 102 113 104 115 106 117 108 119 110 121 112 123 114 125 116 127 118 129 120 131 122 133 124 135 126 137 128 139 130 141 132 143 134 145 136 147 138 149 140 151 142 153 144 155 146 157 148 159 150 161 152 163 154 165 156 167 158 169 160 171 162 173 164 175 166 177 168 179 170 181 172 183 174 185 176 187 178 189 180 191 182 193 184 195 186 197 188 199 190 201 192 203 194 205 196 207 198 209 200 

</div>

<div>

### Sample2

#### Input

    2 9281 8293 5184 3152 3314 9795 1335 688 4603 966 5017 1925 2200 8093 6444 91 8008 7484 2945 2271 7564 6816 3946 2637 1483 5961 8304 2152 2097 1155 5698 8110 1749 4219 516 5908 8335 4489 3745 5787 2837 4147 9199 1620 2332 8403 6188 8737 862 7394 4311 2979 9528 4049 9284 2849 6504 1330 4447 4841 3844 3778 446 3795 7968 1227 9662 7755 7274 1742 3423 7011 9956 6114 3468 4477 2702 5423 131 8380 3755 1911 6627 985 5090 9956 1259 1350 7166 6546 7981 118 8025 616 2886 4100 1076 9151 1315 5260 4150 8749 5919 2082 992 4428 568 3224 550 1791 1964 7851 7335 49 6577 603 1203 3572 2659 1798 688 1966 8779 4843 9493 2533 9266 2937 1995 3416 8445 6014 1615 7448 195 6125 7055 2248 1979 8849 5580 419 494 6146 2794 886 5114 4408 1750 4211 3094 2491 3775 5255 2690 4130 4502 5136 955 1628 7721 6755 7220 5867 4780 3462 7571 3376 7035 2802 7917 6125 1654 9611 5181 9674 7403 6336 4689 7055 304 6573 2823 4665 268 731 1536 2415 7293 6012 9972 8897 7501 7498 8080 7224 5683 8868 6187 1010

#### Output

    74248 8293 5184 25216 3314 9795 10680 688 4603 7728 5017 1925 17600 8093 6444 728 8008 7484 23560 2271 7564 54528 3946 2637 11864 5961 8304 17216 2097 1155 45584 8110 1749 33752 516 5908 66680 4489 3745 46296 2837 4147 73592 1620 2332 67224 6188 8737 6896 7394 4311 23832 9528 4049 74272 2849 6504 10640 4447 4841 30752 3778 446 30360 7968 1227 77296 7755 7274 13936 3423 7011 79648 6114 3468 35816 2702 5423 1048 8380 3755 15288 6627 985 40720 9956 1259 10800 7166 6546 63848 118 8025 4928 2886 4100 8608 9151 1315 42080 4150 8749 47352 2082 992 35424 568 3224 4400 1791 1964 62808 7335 49 52616 603 1203 28576 2659 1798 5504 1966 8779 38744 9493 2533 74128 2937 1995 27328 8445 6014 12920 7448 195 49000 7055 2248 15832 8849 5580 3352 494 6146 22352 886 5114 35264 1750 4211 24752 2491 3775 42040 2690 4130 36016 5136 955 13024 7721 6755 57760 5867 4780 27696 7571 3376 56280 2802 7917 49000 1654 9611 41448 9674 7403 50688 4689 7055 2432 6573 2823 37320 268 731 12288 2415 7293 48096 9972 8897 60008 7498 8080 57792 5683 8868 49496 1010 

</div>

<div>

### Sample3

#### Input

    3 9836 514 4670 7917 85 1977 6163 4573 3527 4370 2640 9413 7489 2920 790 8447 2313 6810 9255 1004 2122 7134 562 5469 3621 8177 3510 4972 6966 3210 1571 6877 7964 5556 9975 134 7366 3767 8512 286 2924 9121 1879 436 4611 1722 2689 8424 9331 445 2989 1468 1282 11 514 1945 3425 1509 5482 7889 9195 7106 1411 8479 3344 7794 649 3659 3996 1100 1731 5341 1836 4418 2205 2137 9598 3427 2564 8474 1994 6369 4532 27 7142 483 8429 6117 6454 2178 354 137 6560 655 507 4234 3669 4050 1652 753 4145 6901 4185 80 2955 5908 1049 5940 7420 1315 2584 3052 657 8300 3683 9935 3663 3795 2939 1978 5090 1871 4022 2225 8503 316 2154 5866 896 2173 396 5660 4335 9794 3074 7679 2180 8553 7 4194 929 549 5461 2212 8884 8212 9941 8129 2693 890 1520 1886 1514 534 9309 1105 5760 9952 5720 6228 2955 5504 8461 777 8972 1985 7850 1381 9678 45 3131 1225 2570 8164 7219 6075 1734 9108 9728 6291 1197 6298 3899 2736 3880 9137 3202 1244 8012 5299 6646 5474 2044 9468 9879 8780 4818 8618 6807 2793

#### Output

    9834 514 4670 7917 85 1975 6163 4573 3527 4370 2638 9413 7489 2920 790 8445 2313 6810 9255 1004 2120 7134 562 5469 3621 8175 3510 4972 6966 3210 1569 6877 7964 5556 9975 132 7366 3767 8512 286 2922 9121 1879 436 4611 1720 2689 8424 9331 445 2987 1468 1282 11 514 1943 3425 1509 5482 7889 9193 7106 1411 8479 3344 7792 649 3659 3996 1100 1729 5341 1836 4418 2205 2135 9598 3427 2564 8474 1992 6369 4532 27 7142 481 8429 6117 6454 2178 352 137 6560 655 507 4232 3669 4050 1652 753 4143 6901 4185 80 2955 5906 1049 5940 7420 1315 2582 3052 657 8300 3683 9933 3663 3795 2939 1978 5088 1871 4022 2225 8503 314 2154 5866 896 2173 394 5660 4335 9794 3074 7677 2180 8553 7 4194 927 549 5461 2212 8884 8210 9941 8129 2693 890 1518 1886 1514 534 9309 1103 5760 9952 5720 6228 2953 5504 8461 777 8972 1983 7850 1381 9678 45 3129 1225 2570 8164 7219 6073 1734 9108 9728 6291 1195 6298 3899 2736 3880 9135 3202 1244 8012 5299 6644 5474 2044 9468 9879 8778 4818 8618 6807 2793 

</div>
Shin\'s Attacking Zone
----------------------

### Description

<div>

As the leader of the 86 spearhead squadron, Shin\'s main job is to guide
the squadron members to the right place. He will receive the coordinates
of the enemies from the handler during the mission, all he has to do is
convert the coordinates into directions and distances that will become
the instructions of the squadron members.

![](https://c.tenor.com/Z34tCoScISsAAAAC/86anime-eighty-six.gif)

</div>

### Input

First line contains an integer N which indicates the number of the
enemies. Next, follows a list of coordinates (x, y) of the enemies,
where each coordinate of an enemy occupies a line. 1 \<= N \<= 1024
-1000 \<= x, y \<= 1000, where origin is (0, 0)

### Output

N lines of the direction DIR and the distance DIST of enemies where the
direction comes first followed by the distance and closed by a newline
character. 0 \<= DIR \<360, where 0 represents the positive x axis and
increases through counterclockwise. Both DIR and DIST should be rounded
to the hundredths.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #include <‍math.h>

    #define MAX_N 1024

    void convert_to_polar(int *coords, int N);

    int main()
    {
        int N, coords[MAX_N + 1][2];
        scanf("%d", &N);
        
        for (int i = 0; i <‍ N; i++)
            scanf("%d%d", &coords[i][0], &coords[i][1]);
        
        
        convert_to_polar((int *) coords, N);
        
        return 0;
    }

<div>

### Sample1

#### Input

    4
    1 1
    -2 2
    -3 -3
    4 -4

#### Output

    45.00 1.41
    135.00 2.83
    225.00 4.24
    315.00 5.66

</div>

<div>

### Sample2

#### Input

    4
    3 4
    -3 4
    -3 -4
    3 -4

#### Output

    53.13 5.00
    126.87 5.00
    233.13 5.00
    306.87 5.00

</div>
Spread the Color
----------------

### Description

<div>

Read a graph with size `M(5) * N(8)`, for each pixel there are **3
colors(Red, Green, Blue)** that we respectively use `R`, `G`, `B` to
represent. If the pixel is **empty**, we use `X` to represent. After
reading the graph, read `row` and `col` to get the color of
`graph[row][col]`.Now, you need to spread the color starting from the
position `(row, col)` and finally print out the result. The spreading
rules are below:

**Spread color** `graph[row][col]` **starting from** `(row, col)`**in 4
directions(Up, Down, Left, Right).** You will encounter three
situations.\
1. Pixel\'s color is `X`: Fill the color with `graph[row][col]` and go
on.\
2. Pixel\'s color is the same as `graph[row][col]`: Go on.\
3. Pixel\'s color is different from `graph[row][col]`: Stop spreading.

### **Hint: See two-dimensional array as one-dimensional array.**

Given `char *p = &graph[0][0]`, you can use `*(p+row*N+col)` to visit
the element in `graph[row][col]`.

</div>

### Input

Input a is a pointer which indicates graph\[0\]\[0\], row and col are
int that indicate the starting position for spreading.

### Output

Your function needs to change the colors for each pixel in the graph
after spreading.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define M 5
    #define N 8
    char colors[4] = {'R', 'G', 'B', 'X'};   // Red, Green, Blue, Empty

    void spread(char*, int, int);

    int main(void) {
        char graph[M][N];
        int row, col;

        for(int i = 0; i <‍ M; i++) {
            for(int j = 0; j <‍ N; j++)
                scanf("%c", &graph[i][j]);
            getchar();      // Ignore '\n'
        }
        scanf("%d %d", &row, &col);    // Starting position
        
        spread(&graph[0][0], row, col);
        
        // Print out the spreading result
        for(int i = 0; i <‍ M; i++) {
            for(int j = 0; j <‍ N; j++)
                printf("%c", graph[i][j]);
            printf("\n");
        }
        return 0;
    }

<div>

### Sample1

#### Input

    XXXXXXXX
    XXGXXXXX
    XRRXRXBX
    XXXXXXXX
    XXBXXXXX
    2 2

#### Output

    XXXXXXXX
    XXGXXXXX
    RRRRRRBX
    XXRXXXXX
    XXBXXXXX

</div>

<div>

### Sample2

#### Input

    RXXXXXXX
    XXXXXXXX
    XXXXXXXX
    XXXXXXXX
    XXXXXXXX
    0 0

#### Output

    RRRRRRRR
    RXXXXXXX
    RXXXXXXX
    RXXXXXXX
    RXXXXXXX

</div>
Sum the values
--------------

### Description

<div>

Given an array\'s initial address(means arr\[0\]) which contains 5
elements, please print out the sum of these five elements.

給定一個陣列的起始記憶體位置並且這個陣列包含五個元素，請你輸出陣列所有元素的和

</div>

### Input

Input arr is a pointer to an array address

### Output

Your function need to assign correct value(int type) to variable result.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>

    void star(int*, int*);

    int main()
    {
        int arr[5], result;
        for(int i=0; i<‍5; i++)
            scanf("%d", &arr[i]);
        
        star(arr, &result);

        printf("%d", result);

        return 0;
    }

<div>

### Sample1

#### Input

    1 2 3 4 5

#### Output

    15

</div>

<div>

### Sample2

#### Input

    900 904 262 677 562

#### Output

    3305

</div>
阿抄的小聰明 - David\'s Petty Tricks
------------------------------------

### Description

<div>

阿抄身為一個開明且優秀的教師，不會做一些對學生學習沒有益處的事，例如公開成績時他從不將學生的成績排序。－－至少表面上是。

今天，阿抄終於忍不住了決定好好的排一下，看看到底學生們到底做的多糟，\
然而，阿抄用陣列儲存學生的原始成績資料的資料庫都是公開的，突然排序勢必引起軒然大波，\
聰明的他想到：『只要我把記憶體位址拿來排序另外儲存，大家就只會看到奇怪的資料了，我真棒。』

問題是，雖然阿抄能夠寫出檢測用的程式，卻沒辦法寫出這個偷偷排序的函式（對，邏輯一點問題都沒有），\
請幫幫阿抄完成，維護他的表面吧。

### Problem Requirement

------------------------------------------------------------------------

\
請仔細觀察 Loader
Code，**設計出可以通過**`main()`**中各個檢測的函式**`sort_pointer()`。註解中會告訴你各個測試的檢測對象。\
Please carefully read the loader code, **design the
function**`sort_pointer()`**so that all tests in**`main()`**are
passed**. Purpose of each tests are written in the comments.\

### The \"Address of every`arr[]`entries appears in`ptr_arr[]`\" Check

-   此檢查用來確定`arr[0]`\~`arr[n]`的位址都有出現在`ptr_arr[]`中一次且僅有一次。\
    The verifies that the addresses of`arr[0]`\~`arr[n]`appears
    in`ptr_arr[]`once and only once.

```{=html}
<!-- -->
```
-   以
    [XOR-sum](https://stackoverflow.com/questions/17284337/what-is-an-xor-sum)
    來執行 [checksum](https://en.wikipedia.org/wiki/Checksum)
    的方式檢查，有興趣可以點開連結閱讀。\
    Performing [checksum](https://en.wikipedia.org/wiki/Checksum) with
    the
    [XOR-sum](https://stackoverflow.com/questions/17284337/what-is-an-xor-sum)
    method to verify. You can read about it by clicking into the links.\

### **void** sort\_pointer**(int \*\***ptr\_arr**, int \***arr**, int** size**)**

-   **由大到小**排序指向`arr[]`之中各個元素的指標，存入`ptr_arr`之中。\
    Sort the values within`arr[]`in **descending order**, and store the
    pointer of the elements into`ptr_arr`.

-   你**不應該**對`arr`做出任何的改動。\
    You **should not** make any change to`arr`.

### Judging

------------------------------------------------------------------------

1.  本題的評分方法較為特殊，**你不需要自己撰寫任何關於輸出的程式碼**，而是觀察
    main function 的動作，補完程式碼並讓程式正確執行。\
    This is a custom judge problem. **You don\'t need to write any
    program outputting text**, finish the program so that the main
    function can be executed successfully.

2.  `assert()`這個 macro
    在**括號中的值為**`false`**時會報錯並直接結束程式**。你需要讓程式完整執行完才能獲得分數。\
    **When the expression with the parenthesis of the
    macro**`assert()`**evaluates to**`false`**, the program will raise
    an error and shut-down itself.** You must let the program fully
    execute in order to get the points.

### Trivia

------------------------------------------------------------------------

1.  `<type> **ptr` 等，稱作 **Pointer-to-Pointer**，而[不是 Double
    Pointer]{.underline}。

    Things like `<type> **ptr`, are called **Pointer-to-Pointer**, [not
    Double Pointer.]{.underline}

2.  兩個 pointer
    相減，得到的差的型態其實是`ptrdiff_t`而不是`int`，其定義於`<stddef.h>`中。\
    The result when subtracting two pointers actually has a type
    of`ptrdiff_t`, not`int`, defined in`<stddef.h>`.

</div>

### Input

The 1st line is a integer N, indicating how many entries are in the
array. 1 ≤ N ≤ 100 The 2nd line lists the entries of the array, starting
from index 0. All numbers appearing in the array are within the range
\[1, 1000\].

### Output

The program should successfully execute, Printing a single line of
string, \"All test passed successfully! :)\"

### Loader Code

<div>

Your code will be judge using this program:

</div>

    /* Loader Start */
    #include <‍stdio.h>
    #include <‍stdint.h>
    #include <‍assert.h>

    // Function Declairation 
    void sort_pointers(int **ptr_arr, int *arr, int size);

    // Main Function
    int main(){
        // Read length of array
        int N;
        scanf("%d", &N);
        
        // Read entries of array, starting from idx = 0, also store a copy
        int arr[N], backup[N];
        for(int i = 0; i <‍ N; ++i){
            scanf("%d", &arr[i]);
            backup[i] = arr[i];
        }

        // Sort the pointers of arr[] into ptr_arr[]
        int *ptr_arr[N];
        sort_pointers(ptr_arr, arr, N);

        // Check if arr[] is unchanged
        for(int i = 0; i <‍ N; ++i){
            assert(arr[i] == backup[i]);
        }

        // Check if all entry of ptr_arr[] are pointers of arr[] entries
        for(int i = 0; i <‍ N; ++i){
            assert((ptr_arr[i] >= arr) && (ptr_arr[i] <‍ &arr[N]));
        } 

        // Check if value pointed by pointers in ptr_arr[] are in descending order
        for(int i = 0; i <‍ N - 1; ++i){
            assert(*ptr_arr[i] >= *ptr_arr[i + 1]);
        }

        // Check if address of every arr[] entries appears in ptr_arr[]
        uintptr_t a = (uintptr_t)arr, b = (uintptr_t)ptr_arr[0];
        for(int i = 1; i <‍ N; ++i){
            a ^= (uintptr_t)&arr[i];
            b ^= (uintptr_t)ptr_arr[i];
        }
        assert(a == b);

        // Success if program runs until here.
        printf("All test passed successfully! :)\n");
        return 0;
    }

<div>

### Sample1

#### Input

    7 
    7 2 5 4 3 6 1

#### Output

    All test passed successfully! :)

</div>

<div>

### Sample2

#### Input

    5
    7 21 5 22 100

#### Output

    All test passed successfully! :)

</div>
