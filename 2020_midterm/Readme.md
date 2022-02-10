2020\_midterm
=============

Calculating Volume
------------------

### Description

<div>

Read an integer `mode`, you need to calculate the volume for the mode.
In different modes, you need to read different number of double
precision floating-points and then print out the volume that is rounded
to 2 decimal places. The followings are 4 modes:

1.  Mode 1:\
    In this mode, you need to `scanf` **a double precision
    floating-point which represents the length of cube(立方體)**.\
    **volume = length \* length \* length.**

2.  Mode 2:\
    In this mode, you need to `scanf` **three double precision
    floating-points which sequentially represent length, width and
    height of cuboid(長方體)**.\
    **volume = length \*** ** **width \* height.**

3.  Mode 3:\
    In this mode, you need to `scanf` **two double precision
    floating-points which sequentially(依序) represents the radius and
    height of cylinder(圓柱體)**.\
    **volume = 3.14 \* radius \* radius \* height.**

4.  Mode 4:\
    In this mode, you need to `scanf` **an double precision
    floating-point which represents the length of
    regular tetrahedron(正四面體).\
    volume = √2 / 12 \* length \* length \* length.**

Given 1 \<= `mode`\<= 4, each double precision floating-point is in
range 1 \~ 100

------------------------------------------------------------------------

**Hint**:

1.  You can use the **sqrt()** and **pow()** function by using the
    following preprocessor directive:\
    `#include <math.h>`

2.  All the values should be double precision floating-point, including
    **PI(3.14)**.

讀入一個整數
`mode`，你必須計算該模式下的體積。在不同模式中，你必須要能讀入不同個數的雙精度浮點數(double)並且印出體積(四捨五入至小數點後第2位)。以下為4種模式
:

1.  模式 1:\
    在模式 1 中，你必須 `scanf`
    **一個雙精度浮點數代表立方體的長度(length)**。\
    **立方體體積 = 長度 \* 長度 \* 長度。**

2.  模式 2:\
    在模式 2 中，你必須 `scanf`
    **三個雙精度浮點數依序代表長方體的長(length)、寬(width)、高(height)**。\
    **長方體體積 = 長 \* 寬 \* 高**。

3.  模式 3:\
    在模式 3 中，你必須 `scanf`
    **兩個雙精度浮點數依序代表圓柱體的半徑(radius)、高(height)**。\
    **圓柱體體積 = 3.14 \* 半徑 \* 半徑 \* 高**。

4.  模式 4:\
    在模式 4 中，你必須 `scanf`
    **一個雙精度浮點數代表四面體的長度(length)**。\
    **四面體體積 = √2 / 12 \* 長度 \* 長度 \* 長度**。

給定 1 \<= `mode` \<= 4 且每個雙精度浮點數的範圍會在 1 \~ 100。

------------------------------------------------------------------------

**提示:**

你可以藉由使用`#include<math.h>` 來呼叫函式 **sqrt()** 和 **pow()**。

所有的值都必須使用雙精度浮點數來計算，包含**PI(3.14)**。

</div>

### Input

Include 2 lines. First line represents the mode. Second line is the
information for the mode.

### Output

Double precision floating-point is rounded to 2 decimal places.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    1
    6

#### Output

    216.00

</div>

<div>

### Sample2

#### Input

    2
    6 8 10

#### Output

    480.00

</div>

Department Store Anniversary
----------------------------

### Description

<div>

The NCKU department store is having an anniversary sale. Customers can
get free gift if they spend more than \$100. On the 8th floor, people
line up in rows of two in front of the customer service counter to get
their gift. Suddenly, one of the desk goes out of service, so customers
in front of this desk must merge into the other line. For the sake of
fairness, staffs need to help people to line up in one line **in the
order of their arrival**. Luckily, you are the one who remember the
order of everyone\'s arrival. (what a reliable staff, huh?) Can you
decide the final order of the new line?

成大百貨公司正在舉辦周年慶，消費滿 100
元即可兌換滿額贈禮。顧客們紛紛擠上八樓，兩個服務台都排滿了長長的隊伍。突然間，其中一個服務台的機器故障了，前方的人龍通通得合併到正常運作的服務台前的隊伍。為了確保先到的人都能先領到禮品，合併後的隊伍順序必須要是**顧客抵達八樓的順序**才行。還好，你就是那個記得所有顧客的抵達順序的員工（真厲害）。你能協助其它員工一起安排隊伍嗎？

</div>

### Input

The input consists of 3 lines. The first line contains 2 integers m, n.
Each line indicates the number of people. And 10 \<= m, n \<= 1000. The
second line is an array of integers and its length is m. The third line
is an array of integers and its length is n. The numbers a\[ i \] in the
arrays indicate the order of arrival, and 1 \<= a\[ i \] \<= 10000.
Every number is unique, and may not be continuous.

### Output

An array of integer, indicates the order of people in the new line. Each
number must followed by a space. No need to print newline at the end of
the line.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    3 7
    1 8 9
    2 5 7 11 16 17 21

#### Output

    1 2 5 7 8 9 11 16 17 21 

</div>

Odd Magic Square
----------------

### Description

<div>

The **odd** magic square consists of consecutive integers (starting with
1 and ending with n²) placed into`n`rows by `n` columns.

The sum of each row, each column and each diagonal are the same.

**Hint:**

1.  Place number 1 in the middle of first row.

2.  Check if the **upper right** grid is empty:

-   if empty: fill the next number in this **upper right** grid

-   if not empty: fill the next number in the **bottom of current grid**

3.  Check if the last step **exceeds the boundary**, you need to return
    to the **other side**.

    You can see the following example to understand the process !

奇數魔方陣是指在`n`x`n`的方陣中，放入從1開始到n\^2的連續數字。

使每一行、每一列與每條對角線的和皆相同。

提示:

1.  首先在第一列的最中間那個方格填入1。

2.  接著檢查該方格的**右上方**是否為空的:

-   如果是空的: 將下個數字填入**右上方的方格**

-   如果不是空的: 將下個數字填入**當前方格的正下面那格**

3.  如果在上一步會**超出邊界**，則需要返回**另一邊**

    你可以看下方的範例來了解過程!

**For example:**`n` **= 3**

step1:

0 **1** 0

0 0 0

0 0 0

step2:

0 1 0

0 0 0

0 0 **2**

step3:

0 1 0

**3** 0 0

0 0 2

step4:

0 1 0

3 0 0

**4** 0 2

Finally, after 9 steps:

8 1 6

3 5 7

4 9 2

</div>

### Input

There is an odd integer between 1 and 50

### Output

Output the square. There is a space after each number.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5

#### Output

    17 24 1 8 15 
    23 5 7 14 16 
    4 6 13 20 22 
    10 12 19 21 3 
    11 18 25 2 9 

</div>

<div>

### Sample2

#### Input

    7

#### Output

    30 39 48 1 10 19 28 
    38 47 7 9 18 27 29 
    46 6 8 17 26 35 37 
    5 14 16 25 34 36 45 
    13 15 24 33 42 44 4 
    21 23 32 41 43 3 12 
    22 31 40 49 2 11 20 

</div>

Plague Inc
----------

### Description

<div>

\"Plague Inc.\" is a famous game, you can collect DNA points to evolve
your own virus in this game.

Now you made a new virus in laboratory, and want to know how many people
will be infected in a month after you \"accidentally\" leak this virus
into the world.

Given a double value `R` and an integer value `N`, `R` is `spread rate`,
means each day the number of infected people will multiplied by `R`

Please calculate the number of infected people after `N` days after you
let the first people infected by this virus.

\"瘟疫公司\"
是個非常有名的遊戲，在遊戲中你可以收集DNA點數並讓你的病毒進化

現在你在實驗室中製造了一種新型病毒，並且想知道在你 \"不小心\"
讓這種病毒洩漏出去後的一個月，會有多少人被感染

定義兩個數值：雙倍精度浮點數`R`和整數`N`，`R`為傳播率，每天被感染者人數會乘上`R`

請計算你用這種病毒感染第一人後`N`天被這種病毒感染的總人數

</div>

### Input

One line contains R and N, separated with a space, 1 \<= R \<= 2, 1 \<=
N \<= 30

### Output

An integer, representing the number of infected people (ignore digits
after decimal point)

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    1.53 29

#### Output

    227013

</div>

<div>

### Sample2

#### Input

    1.55 23

#### Output

    23857

</div>

Rotate Image
------------

### Description

<div>

In computer, everything is represented by numbers --- so does image.
Computer stores image as a matrix. A cell in the matrix is a pixel in
the image, and number in the cell represents the color of that pixel.

If we want to rotate an image, it means that we want to rotate the
matrix itself. For example, consider an image as follows:

`| 1 2 3 |`\
`| 4 5 6 |`\
`| 7 8 9 |`

If we want to **rotate this image 90 degrees to the right**, we can
rotate the matrix like this:

`| 7 4 1 |`\
`| 8 5 2 |`\
`| 9 6 3 |`

Now given the degree of **right rotation**, can you help me rotate my
images?

在電腦裡，所有東西都是用數字來表達的------就連圖片也不例外。電腦以矩陣的形式來儲存每一張圖片，矩陣裡的格子代表著圖片的像素，而格子裡的數字就代表了該像素的顏色。

當我們要對圖片做旋轉時，我們實際上就是在旋轉這個矩陣本身。舉例來說，如果有一張圖片長這樣：

`| 1 2 3 |`\
`| 4 5 6 |`\
`| 7 8 9 |`

如果我們想將這張圖片**向右旋轉 90 度**，那麼就等於是把矩陣旋轉成這樣：

`| 7 4 1 |`\
`| 8 5 2 |`\
`| 9 6 3 |`

給定**向右旋轉的角度**，你能將圖片做正確的旋轉嗎？

</div>

### Input

The input consists of 3 part. The first line is an integer, indicates
the degree of right rotation. It will be one of the following numbers:
90, 180 or 270. The second line contains 2 integers m & n, indicates the
dimension of the image. And 3 \<= m, n \<= 100. The following m lines
contain n integers, representing the image itself. Each integer in the
image is in the range of \[0, 100\].

### Output

The rotated image. Each number must follow by a space. You need to print
newline at the end of last line.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    90
    3 4
    1 5 6 7
    5 8 9 2
    3 0 4 7

#### Output

    3 5 1 
    0 8 5 
    4 9 6 
    7 2 7 

</div>

Vigenère Cipher Encoder
-----------------------

### Description

<div>

The Vigenère cipher is a method of encrypting alphabetic text by using a
series of interwoven Caesar ciphers, based on the letters of a keyword.
In a Caesar cipher, each letter of the alphabet is shifted along some
number of places. For example, in a Caesar cipher of shift 3, `A` would
become `D`, `b` would become `e`, `y` would become `b` and so on. The
Vigenère cipher has several Caesar ciphers in sequence with different
shift values, which are determined by a text string called \"key\". The
\"key\" only contains lowercase letters.

For example, let\'s assume the \"key\" is `abcde`. Each alphabet of the
\"key\" is converted to its corresponding numeric value (e.g.`a` = `0`,
`b` = `1`, \... `z` = `25`):

-   alphabet: `a b c d e`

```{=html}
<!-- -->
```
-   numeric value: `0 1 2 3 4`

To encrypt the message, say \"**TAs are so H4ND5OME.**\", we should
arrange the \"key\" as follows:

`a b c d e a b c d e a b c d`

`0 1 2 3 4 0 1 2 3 4 0 1 2 3`

We now shift each **alphabet** of the message (1.) by the numeric
\"key\" we arranged in the previous step (2.) to create ciphertext (3.)
as shown below:

1.  `T A s a r e s o H N D O M E`

2.  `0 1 2 3 4 0 1 2 3 4 0 1 2 3`

3.  `T B u d v e t q K R D P O H`

And the plaintext message \"**TAs are so H4ND5OME.**\" becomes \"**TBu
dve tq K4RD5POH.**\" in ciphertext.

Write a program that prints out the Vigenère cipher for the given input
(described in Input Format).

Note: Transform only English alphabet (case-preserving) and preserve
other characters such as Arabic numerals or punctuation.

------------------------------------------------------------------------

維吉尼亞密碼是使用一系列凱薩密碼來加密文字的算法，透過一組密鑰來進行加密。在凱薩密碼中，每個英文字母都會偏移一個固定的數字。例如，在偏移量為3的凱薩密碼中，`A`
會變成 `D`，`b` 會變成 `e`，`y` 會變成
`b`，以此類推。維吉尼亞密碼則是由好幾組不同偏移量的凱薩密碼編排而成，透過一個稱為「密鑰」的字串來決定其偏移值。而這個密鑰僅包含小寫英文字母。

舉例來說，假設密鑰是 `abcde`。密鑰中的每個字母會轉為其對應的數字(例如
`a` = `0`, `b` = `1`, \... `z` = `25`)：

-   英文字母: `a b c d e`

```{=html}
<!-- -->
```
-   數字: `0 1 2 3 4`

要加密 \"**TAs are so H4ND5OME.**\" 這段訊息，我們要將密鑰如下排列：

`a b c d e a b c d e a b c d`

`0 1 2 3 4 0 1 2 3 4 0 1 2 3`

接著根據前一步驟排列的密鑰(2.)，對訊息中的每個**英文字母**(1.)做位移來產生加密的文字(3.)，如下：

1.  `T A s a r e s o H N D O M E`

2.  `0 1 2 3 4 0 1 2 3 4 0 1 2 3`

3.  `T B u d v e t q K R D P O H`

而這段純文字訊息 \"**TAs are so H4ND5OME.**\" 會變成 \"**TBu dve tq
K4RD5POH.**\"，即為加密後的訊息，意思是助教好帥 ;-)。

寫一個程式，根據給定的輸入來輸出對應的維吉尼亞加密。

註：只需轉換英文字母(保留大小寫)且保留其他字元例如阿拉伯數字或標點符號。

</div>

### Input

The input contains three lines. All of these lines are followed by a
newline character. The first line contains the length of the \"key\",
and 1 \<= length(key) \<= 100. The second line is the \"key\", which
contains only lowercase letters. Finally, the third line is the
plaintext message.

### Output

Output the ciphertext of the given input. There is no newline character
at the end of the output.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5
    abcde
    TAs are so H4ND5OME.

#### Output

    TBu dve tq K4RD5POH.

</div>

<div>

### Sample2

#### Input

    4
    duck
    PD1 is sooooo awesome!!

#### Output

    SX1 kc viqyri cghmqwh!!

</div>

