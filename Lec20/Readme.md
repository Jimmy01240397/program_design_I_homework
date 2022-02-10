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

![](data:image/png;base64,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)For
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
