Lec20
=====

Bingo!
------

### Description

<div>

**UPDATE !!**

由於有同學反應在 windows 電腦上面的 clion 無法正常執行 loader code
內容，

所以更新 loader code ，

請注意讀取時與 bingo function 的參數資料型態。

------------------------------------------------------------------------

大家都玩過賓果吧！\
以下是 4 \* 4 的範例：

1 0 1 **1**\
0 0 **1** **1**\
0 **1** 0 **1**\
**1** 0 1 **1**

可以看到有一條直的，一條斜的，總共兩條連線。

為了環保愛地球，一個 `n * n` 的賓果使用 `n * n`
大小的空間實在太浪費了！\
聰明的 Amy 想到，在電腦中，所有的變數背後都是 0 或
1，那我們可以使用一些數字來替代這張表格，減少使用的空間。

舉例來說，把這些 0 與 1 視作二進制的表示方式，並把他轉化為十進制

`1 0 1 1` -\> 2\^3 + 2\^1 + 2\^0 = `11`\
`0 0 1 1` -\> 2\^1 + 2\^0 = `3`\
`0 1 0 1` -\> 2\^2 + 2\^0 = `5`\
`1 0 1 1` -\> 2\^3 + 2\^1 + 2\^0 = `11`

所以我們可以使用 `11 3 5 11` 來表示上圖的表格。

在這裡，我們要玩的是進階版賓果！\
題目會給出 8 個 8 bits 的數字來表示 `8*8`
大小的表格，請你算出當中會有幾條連線

------------------------------------------------------------------------

Here is 4 \* 4 sample:

1 0 1 **1**\
0 0 **1** **1**\
0 **1** 0 **1**\
**1** 0 1 **1**

There are two lines above, vertical and diagonal.

It's wasteful to use `n * n` space to play `n * n` bingo.\
As every number is stored as 0 or 1 in computer, we can use some other
numbers to represent that table.

For example, those 0 and 1 can be regarded as binary, and we can convert
it into decimal.

`1 0 1 1` -\> 2\^3 + 2\^1 + 2\^0 = `11`\
`0 0 1 1` -\> 2\^1 + 2\^0 = `3`\
`0 1 0 1` -\> 2\^2 + 2\^0 = `5`\
`1 0 1 1` -\> 2\^3 + 2\^1 + 2\^0 = `11`

So the above bingo can be represented as `11 3 5 11`.

Here we are going to play `8 * 8` bingo.\
Eight 8 bits numbers are provided to represent the `8 * 8` bingo. Please
count how many lines are in the bingo.

</div>

### Input

8 8-bits numbers

### Output

a number

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdint.h>

    int bingo (uint16_t num[]);

    int main () {
        uint16_t num[8];
        for (int i = 0; i <‍ 8; ++i) {
            scanf("%hu", &num[i]);
        }

        printf("%d\n", bingo(num));
    }

<div>

### Sample1

#### Input

    1 2 4 8 16 32 64 128 

#### Output

    1

</div>

<div>

### Sample2

#### Input

    255 2 6 10 18 35 66 130 

#### Output

    3

</div>

XOR Cipher
----------

### Description

<div>

Given a string of text, which is our input data, encrypt the data by
applying the bitwise XOR operator to every character using a given key.

![](/Lec20/XOR%20Cipher/images/c863db41704f71e81272da277a3016cbeda09d1d.png)For
example, given a plaintext data `TAs are so handsome` and the key `key`,
the result cipher is:

-   Plaintext data: `'T'`, `'A'`, `'s'`, `' '`, `'a'`, \...

-   Key: `'k'`,`'e'`, `'y'`, `'k'`, `'e'`, \...

-   Result (hex): `3f`, `24`, `0a`, `4b`, `04`, `0b`, `0e`, `45`, `0a`,
    `04`, `45`, `11`, `0a`, `0b`, `1d`, `18`, `0a`, `14`, `0e`

Note that you should output the raw result instead of hex value, which
means that it might contain invalid ascii characters in the output.

</div>

### Input

The first line is the key (1 \<= len(key) \<= 1000). The second line is
the given data (1 \<= len(data) \<= 10000).

### Output

The cipher text.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    key
    TAs are so handsome

#### Output

    ?$
    KE
    E
    
    

</div>

<div>

### Sample2

#### Input

    T/dz%-*u`IFa
    .EWS!1qH$a>^`4sG=U7SiVCY|M#^ (iNh8x3`<‍.9IIr"QM+(4S5yc[&m\8

#### Output

    zj3)[=D(x?4=x&    8(bG$C;q>R4JCldXW1mI`|QFv<‍q

</div>
