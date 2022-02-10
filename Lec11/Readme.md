Lec11
=====

FORTUNE LOVER 世界的加法規則
----------------------------

### Description

<div>

卡塔麗娜今年就要上小學囉\~
在小學的第一節數學課，老師要教大家怎麼做整數加法！

在 FORTUNE LOVER 裡，整數加法的規則是這樣的：

1.  先把被加數和加數當作 float 看待（以 [IEEE 754
    單精度浮點數的格式](https://zh.wikipedia.org/zh-tw/IEEE_754)表達）。

    -   所以 1 並不是 00000000 00000000 00000000 00000001，而是 00111111
        10000000 00000000 00000000。

    -   然後 2 也不是 00000000 00000000 00000000 00000010，而是 01000000
        00000000 00000000 00000000。

    -   如果你不知道怎麼做轉換，可以用[這個網站](https://www.binaryconvert.com/convert_float.html)來幫你，只要在
        Decimal 處輸入一個整數，按下 \"Convert to
        binary\"，就可以知道他的 IEEE 754 表示法是什麼囉\~

2.  將兩個 32-bits 的二進位數字作加法，得到一個 32-bits 的二進位數字

3.  將該二進位數字當作 int
    （[二補數](https://zh.wikipedia.org/zh-tw/%E4%BA%8C%E8%A3%9C%E6%95%B8)的有號整數）解讀。

    -   如果該二進位數字是 00000000 00000000 00000000
        00001111，那你就要把他當成 15

    -   如果該二進位數字是 11111111 11111111 11111111
        11110000，那你就要把他當成 -16

    -   Again，如果你不知道怎麼做轉換，可以用[這個網站](https://www.binaryconvert.com/convert_signed_int.html)來幫你，只要在
        Binary 處輸入32-bits 的二進位數字（不要有空白分隔），按下
        \"Convert to Decimal\"， 就可以知道這個 32-bits
        二進位數字對應的整數是多少了\~

舉例來說，如果我們想進行 1 + 2 的加法：

1.  把 1 和 2 當作 float，寫出他們的 bit pattern：

    -   1 = 00111111 10000000 00000000 00000000

    -   2 = 01000000 00000000 00000000 00000000

```{=html}
<!-- -->
```
2.  將兩個 32-bits 的二進位數字作加法，得到一個 32-bits 的二進位數字

           00111111 10000000 00000000 00000000
        +) 01000000 00000000 00000000 00000000
        ---------------------------------------
           01111111 10000000 00000000 00000000

```{=html}
<!-- -->
```
3.  將該二進位數字當作 int 解讀

    -   01111111 10000000 00000000 00000000 = 2139095040

所以， 1 + 2 = 2139095040。

你是卡塔麗娜的數學老師，為了讓卡塔麗娜更理解這個複雜的加法是怎麼進行的，請你在進行每一題範例講解時都把這個相加的過程清楚的寫出來喔\~

![](https://c.tenor.com/ZqSIoxyMrIIAAAAC/otome-game-bakarina.gif)

</div>

### Input

Two integer a, b. The range of a, b is -999,999 \<= a, b \<= 999,999.

### Output

The process of addition and its result. Please refer to examples.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>

    void addition();

    void print_binary(void *n){
        for(int i = 31; i >= 0; --i){
            printf("%d", (*(int *)n >> i) & 1);
            if (i && !(i % 8)) printf(" ");
        }
    }

    int main(){
        addition();
        return 0;
    }

<div>

### Sample1

#### Input

    1 2

#### Output

       00111111 10000000 00000000 00000000
    +) 01000000 00000000 00000000 00000000
    ---------------------------------------
       01111111 10000000 00000000 00000000
    1 + 2 = 2139095040

</div>

<div>

### Sample2

#### Input

    5 -5

#### Output

       01000000 10100000 00000000 00000000
    +) 11000000 10100000 00000000 00000000
    ---------------------------------------
       00000001 01000000 00000000 00000000
    5 + -5 = 20971520

</div>

<div>

### Sample3

#### Input

    -4 38

#### Output

       11000000 10000000 00000000 00000000
    +) 01000010 00011000 00000000 00000000
    ---------------------------------------
       00000010 10011000 00000000 00000000
    -4 + 38 = 43515904

</div>

<div>

### Sample4

#### Input

    -15942 -18168

#### Output

       11000110 01111001 00011000 00000000
    +) 11000110 10001101 11110000 00000000
    ---------------------------------------
       10001101 00000111 00001000 00000000
    -15942 + -18168 = -1928919040

</div>

Kira Kira Random Star
---------------------

### Description

<div>

Here comes the POINTER, some stars start to appear in your program.

Let\'s start from the easiest one !

Please implement this function:

`void star(int* a, int b, int* sum)`

一閃一閃亮晶晶 滿天都是小星星

教到指標後大家的程式編輯器裡也開始充滿了星星~~（相信某些人的頭上也開始冒出星星了）~~

就讓我們從最簡單的部份開始認識這令人心跳不已的功能吧！

請實作以下函式：

`void star(int* a, int b, int* sum)`

<https://youtu.be/Y7JoFiRQ0RA>

</div>

### Input

Input a is a pointer to an int, b is an int

### Output

Sum of the value a points to and b, stored in the memory space sum
points to

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>

    void star(int*, int, int*);

    int main()
    {
        int kirakira, dokidoki, kasumi;
        scanf("%d%d", &kirakira, &dokidoki);

        // kasumi = kirakira + dokidoki
        star(&kirakira, dokidoki, &kasumi);

        printf("%d", kasumi);

        return 0;
    }

<div>

### Sample1

#### Input

    242 104

#### Output

    346

</div>

<div>

### Sample2

#### Input

    693 488

#### Output

    1181

</div>

Polynomial Function
-------------------

### Description

<div>

Ariel learns pointer today. She wants to implement a polynomial function
named \'poly\'.

The polynomial function is\

> *𝐱³ + y² + z*

\
The \'poly\' function has three parameters `A`, `B`, `C` and all of them
are pointer to integer. `x`, `y`, `z` are integer variables which
pointed by `A`,`B`,`C`. **Notice** that they\'re maybe `NULL`. If the
pointer is `NULL`, then set integer variable zero.**(referring to Sample
2)**

Finally, return a pointer from \'poly\' function.\
Please implement \'poly\' function!

</div>

### Input

The \'poly\' function has three parameters A, B, C. All of them are
pointer to integer.(They\'re maybe NULL.)

### Output

Return a pointer from \'poly\' function.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>

    int *poly(int*, int*, int*);

    int main() {
        int a, b, c;
        int *A, *B, *C;
        scanf("%d %d %d", &a, &b, &c);
        A = &a;
        B = &b;
        C = &c;
        if (a <‍ 0) A = NULL;
        if (b <‍ 0) B = NULL;
        if (c <‍ 0) C = NULL;

        int *result = poly(A, B, C);
        printf("%d", *result);
        return 0;
    }

<div>

### Sample1

#### Input

    1 2 3

#### Output

    8

</div>

<div>

### Sample2

#### Input

    -1 10 5

#### Output

    105

</div>

Score Calculation
-----------------

### Description

<div>

小宇是位聰明絕頂的國中生，某日在自學指標後，他決定來炫技算一下自己期中考的成績。

給予國文、英文、數學、自然、社會五科的分數。

計算這五科的總分以及平均。

值得注意的是，小宇為了炫技，因此有時使用指標有時不用，因此請仔細看看
main 函式內的內容為何。

------------------------------------------------------------------------

Yu, a smart student, learned pointer on his own.

He decided to use pointer to calculate his midterm\'s scores.

Given five subjects\' scores (Chinese, English, Math, Science, and
Social Studies), please calculate the total score and the average score.

Notice that he may or may not use pointer in the code, please see the
main function carefully.

</div>

### Input

給予五科（國英數自社）的分數。 Given five subjects\' scores (Chinese,
English, Math, Science, and Social Studies).

### Output

五科的總分以及平均。 The total score and the average score.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>

    double calculate_score(int, int, int *, int, int, int *);

    int main(void) {
        int chinese, english, math, science, social_studies;
        scanf("%d %d %d %d %d", &chinese, &english, &math, &science, &social_studies);
        int total = 0;
        double average = calculate_score(chinese, english, &math, science, social_studies, &total);
        printf("%d %.1lf", total, average);
        return 0;
    }

<div>

### Sample1

#### Input

    87 78 22 66 69

#### Output

    322 64.4

</div>

<div>

### Sample2

#### Input

    99 99 99 99 99

#### Output

    495 99.0

</div>

Share Candy
-----------

### Description

<div>

You are a teacher in a kindergarten. Today you bring a bag of candies to
the class, and you want to share them with your kids. Kids all LOVE
candy! They all want as many as they can have. But for the fairness, you
have to give each kid the same number of candies. Given the total number
of candies and the number of kids, how many candies can a kid have? And
how many candies will remain?

Attention: You HAVE TO implement this logic in a function.

你是一個幼稚園老師，今天你買了一包糖糖想要分給班上的小朋友們。小朋友都愛死糖果了，所以每個人都想要儘量得到最多的糖果，但是為了公平起見，每個人分到的糖果數必須要一樣多。給定糖果的個數與小朋友的人數，請問每個人可以得到幾顆糖果呢？最後你會剩下幾顆糖果呢？

注意：你必須將以上邏輯實作在函數裏面。

</div>

### Input

The input consists of 2 integers m, n. m is the number of candies, and n
is the number of kids. Notice that 0 \< n \< m \< 100000.

### Output

Your function need to \"return\" 2 number q, r. q is the number of
candies each kid can have, and r is the number of candies remained.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>

    void share_candy(int m, int n, int* q, int* r);

    int main(){
        int m, n, candy_each, candy_remain;
        scanf("%d %d", &m, &n);
        share_candy(m, n, &candy_each, &candy_remain);
        printf("%d %d", candy_each, candy_remain);
        return 0;
    }

    // Your code goes here

<div>

### Sample1

#### Input

    114 28

#### Output

    4 2

</div>

<div>

### Sample2

#### Input

    500 100

#### Output

    5 0

</div>

Swap Again
----------

### Description

<div>

There are two arrays `A` and `B`. Both of them have the same length `n`.
We want to make`A[i]` not less than that of `B[i]` (0 \<=`i`\<= `n`- 1)
by swapping them. Please implement the `swap` function.

</div>

### Input

The first line contains the length of the array. The second and third
lines are the elements of array A and B.

### Output

The swapped arrays separated by newline character.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define MAX_LEN 20000

    void swap(int *, int *);

    int main() {
      int n, A[MAX_LEN], B[MAX_LEN];

      // read input
      scanf("%d", &n);
      for (int i = 0; i <‍ n; ++i)
        scanf("%d", &A[i]);
      for (int i = 0; i <‍ n; ++i)
        scanf("%d", &B[i]);

      // swapping
      for (int i = 0; i <‍ n; ++i)
        swap(&A[i], &B[i]);

      // output
      for (int i = 0; i <‍ n; ++i)
        printf("%d ", A[i]);
      putchar('\n');
      for (int i = 0; i <‍ n; ++i)
        printf("%d ", B[i]);

      return 0;
    }

<div>

### Sample1

#### Input

    5
    1 8 7 8 5 
    5 2 5 8 10 

#### Output

    5 8 7 8 10 
    1 2 5 8 5 

</div>

<div>

### Sample2

#### Input

    10
    36 74 47 79 6 44 42 5 98 69 
    10 97 90 53 39 83 68 22 14 52 

#### Output

    36 97 90 79 39 83 68 22 98 69 
    10 74 47 53 6 44 42 5 14 52 

</div>
