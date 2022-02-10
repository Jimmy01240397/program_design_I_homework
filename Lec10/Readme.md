Lec10
=====

Beverage Shop
-------------

### Description

<div>

Cody has a beverage shop. The following drinks are what he offered:

-   Green tea **G** (500mL): 20 NTD

-   Black tea **B** (500mL): 20 NTD

-   Tieguanyin tea **T** (500mL): 30 NTD

-   White gourd tea **W** (500mL): 15 NTD

-   Tieguanyin green tea **GT** (Tieguanyin tea 250mL + green tea
    250mL): 45 NTD

-   White gourd Tieguanyin tea **WT** (Tieguanyin tea 350mL + white
    gourd tea 150mL): 40 NTD

-   Black tea Latte **BM** (black tea 200mL + milk 300mL): 35 NTD

-   Tieguanyin Latte **TM** (Tieguanyin tea 200mL + milk 300mL): 45 NTD

-   White gourd Latte **WM** (White gourd tea 200mL + milk 300mL): 30
    NTD

The sugar and ice level of each drink are adjustable. Assume that there
are 5 levels for both sugar and ice:

-   Sugar:

    1.  No sugar: 0g

    2.  Low sugar: 3g

    3.  Half sugar: 5g

    4.  Less sugar: 7g

    5.  Standard: 10g

-   Ice:

    1.  No ice: 0g

    2.  Low ice: 30g

    3.  Less ice: 50g

    4.  Normal: 70g

    5.  Extra ice: 100g

Given the ingredient of each drink and list of sales, please help Cody
calculate how much ingredient remained and how much he earned.

</div>

### Input

The input consists of several lines. The first 7 numbers are the amount
of each ingredient. The orders are black tea (L)/ White gourd
(L)/Tieguanyin tea (L)/green tea (L)/milk (L)/sugar (kg)/ice (kg). The
2nd line is the number of sales n. The last n lines are the content of
each sale, which consists of the type of the beverage, sugar level and
ice level.

### Output

The first line contains the remained amount of each ingredient. The
second line is how much Cody earned.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    2 3 3 1 2 2 2 
    8
    B 5/3
    T 3/3
    G 2/5
    TM 2/4
    W 1/3
    WT 3/4
    WT 3/4
    WT 3/5

#### Output

    1500 2050 1250 500 1700 1964 1440 
    250

</div>

<div>

### Sample2

#### Input

    2 1 2 1 3 1 1 
    4
    TM 2/5
    WM 4/4
    TM 1/3
    TM 5/4

#### Output

    2000 800 1400 1000 1800 980 710 
    165

</div>

<div>

### Sample3

#### Input

    2 2 2 1 2 1 2 
    7
    WM 2/4
    B 2/1
    TM 1/3
    WT 1/2
    B 4/1
    W 1/2
    T 4/5

#### Output

    1000 1150 950 1000 1400 980 1720 
    200

</div>

Encryption
----------

### Description

<div>

加密演算法通常都是不同替換 (substitution) 與重排 (transposition)
的排列組合。\
替換與重排的定義分別為：

-   **替換 (substitution)**\
    以取代的方式將文字作位移，當文字變成另一個文字時就保護了真正的明文意義。像是
    [Caesar Cipher](https://ckj.imslab.org/#/problems/L6vddcFTIix4)
    與期中考題的 [Trithemius
    Cipher](https://ckj.csie.ncku.edu.tw/#/exam/2021_midterm)
    就是經典的替換加密的範例。

-   **重排 (transposition)**\
    將原本的字串重新排列順序，舉例來說將字串的順序完全顛倒：`PD1 is good`
    變成 `doog si 1DP` 就算是其中一種重排。

在這次的作業裡面，我們要利用下面這幾種方法的排列組合來進行加密：

1.  **交換 (swap)**\
    將整個文字拆成兩份，前後交換，現在以 `1 2 3 4 5 6 `來舉例：

    改動前：`1 2 3`\|`4 5 6`

    改動後：`4 5 6`\|`1 2 3`

2.  **位移 (rotate)**\
    根據指定的左/右及總位移格數移動文字，現在以向 **左** 位移 **2**
    位舉例

    改動前 : `1 2 3 4 5 6`

    改動後：`3 4 5 6 1 2`

3.  **rail fence cipher**\
    給定 key 依照要求挪動文字位置。\
    依照下方範例為例，明文 `P` 對應到的 key 為
    `5`，表示它需要被挪動到第五個位置；明文 `D` 對應到的 key 為 `1`
    ，表示它需要被挪動到第一個位置，依此類推。

    key : `5 1 2 6 9 8 4 3 7`

    明文 : `P D 1 I S G O O D`

    密文 : `D 1 O O P I D G S`

    同樣依照下圖為範例，在這裡的 key 長度為 4 ，明文的長度為 11。\
    在前面八個數字，每四個依照給定的 key
    挪動文字位置，最後三個由於缺一個數字，就依照文字原排序不改動順序。

    key ：`4 1 3 2`

    明文：`P D 1 I`

    `S S O G`

    `O O D`

    密文：`D I 1 P`

    `S G O S`

    `O O D`

4.  [**凱薩加密 (Caesar
    Cipher)**](https://ckj.imslab.org/#/problems/L6vddcFTIix4)\
    給定一個密鑰 `k` ，將文字平移 `k`。\
    舉例來說 `k = 3` ，明文為 `bob, i love you. Alice` 會變成
    `ere, l oryh brx. Dolfh`

5.  [**特里特米烏斯加密 (Trithemius
    Cipher)**](https://ckj.csie.ncku.edu.tw/#/exam/2021_midterm)

    在凱薩密碼中，每個字元都會被平移一個固定的密鑰
    `k`，而特里特米烏斯密碼密碼則會額外多加一個連續的偏移值(會是遞增或遞減，每次移動1)。

    舉例來說， k=1、遞增的狀況下，我們想加密TAs are so
    H4ND5OME，而每個字元的偏移量為：

    `T A s a r e s o H N D O M E`

    `1 2 3 4 5 6 7 8 9 10 11 12 13 14`

    加密文字會是`UCv ewk zw Q4XO5AZS`.

6.  [**維吉尼亞加密 (Vigenère
    Cipher)**](https://ckj.csie.ncku.edu.tw/#/exam/2020_midterm)

    維吉尼亞密碼是使用一系列凱薩密碼來加密文字的算法，透過一組密鑰來進行加密。在凱薩密碼中，每個英文字母都會偏移一個固定的數字。例如，在偏移量為3的凱薩密碼中，`A`
    會變成 `D`，`b` 會變成 `e`，`y` 會變成
    `b`，以此類推。維吉尼亞密碼則是由好幾組不同偏移量的凱薩密碼編排而成，透過一個稱為「密鑰」的字串來決定其偏移值。而這個密鑰僅包含小寫英文字母。

    舉例來說，假設密鑰是
    `abcde`。密鑰中的每個字母會轉為其對應的數字(例如 `a` = `0`, `b` =
    `1`, ... `z` = `25`)：

    英文字母: `a b c d e`

    數字: `0 1 2 3 4`

    要加密 **TAs are so H4ND5OME.** 這段訊息，我們要將密鑰如下排列：

    `a b c d e a b c d e a b c d`

    `0 1 2 3 4 0 1 2 3 4 0 1 2 3`

    接著根據前一步驟排列的密鑰(2.)，對訊息中的每個**英文字母**(1.)做位移來產生加密的文字(3.)，如下：

    `T A s a r e s o H N D O M E`

    `0 1 2 3 4 0 1 2 3 4 0 1 2 3`

    `T B u d v e t q K R D P O H`

    而這段純文字訊息 **TAs are so H4ND5OME.** 會變成 **TBu dve tq
    K4RD5POH.**，即為加密後的訊息，意思是助教好帥 ;-)。

註：**凱薩加密**、**特里特米烏斯密碼密碼**、**維吉尼亞密碼**
只需轉換英文字母(保留大小寫)且保留其他字元例如阿拉伯數字或標點符號。

現在我們要將上面的六種加密方法模組化，總共有 5 種模組加密方案：

**第一種**

1.  將明文 `SWAP`

2.  把剛剛處理過的結果拆做前後兩半

    -   前半部: `凱薩加密`，密鑰為 `13`

    -   後半部: `維吉尼亞加密`，密鑰為 `meow`

3.  將上一個步驟的結果結合起，向 `左` 位移 `3` 位

    ![260186472\_2169229643227428\_6551414521883300713\_n
    (1).png](/Lec10/Encryption/images/47a55354f18b3cbd3f8e1eedb96b8b91dea91ebb.png)

**第二種**

1.  將明文向 `右` 位移 `11` 位

2.  把剛剛處理過的結果做 `特里特米烏斯加密` ，遞增，密鑰為 `74`

3.  將上一步驟結果拆做前後兩半

    -   前半部： 向 `右` 位移 `1` 位

    -   後半部： 向 `右` 位移 `3` 位

4.  做 `rail fence cipher` ，密鑰為 `4 3 1 2 7 6 5 8`

    ![259265233\_929385841340030\_6830882527135050330\_n
    (1).png](/Lec10/Encryption/images/800ff5367511a1bd3e5983a94595657157e2948c.png)

**第三種**

1.  將明文做 `rail fence cipher` 加密，密鑰為 `3 2 4 1`

2.  把剛剛處理過的結果拆做前後兩半

    -   前半部: `凱薩加密`， 密鑰為 `8`

    -   後半部： `rail fence cipher` 加密，密鑰為 `1 8 4 3 6 5 7 2`

3.  將上一個步驟的結果結合起，做 `SWAP`

4.  做 `特里特米烏斯加密`，遞減，密鑰為 `602`

5.  將文字向 `右` 位移 `7`

    ![260880597\_938029580253010\_2934717344494894181\_n (1)
    (1).png](/Lec10/Encryption/images/30a168e545b691e5786d11fadb0aeb5446c145ba.png)

**第四種**

1.  將明文拆做前後兩半

    -   前半部依序做

        -   `維吉尼亞加密`，密鑰為 `vigenere`

        -   `SWAP`

        -   `特里特米烏斯加密`，遞增，密鑰為 `3`

    -   後半部做向 `左` 位移 `24`

2.  將上一步驟的結果結合起來，向 `右` 位移 `19`

    ![262512164\_262988375891888\_7337438211513276358\_n
    (1).png](/Lec10/Encryption/images/835baa3c0291eaadb346d92bce8df1ee21ed5acb.png)\

**第五種**

1.  將明文做 `rail fence cipher` 加密，密鑰為 `3 1 7 6 4 5 2 8`

2.  將剛剛處理過的結果拆做前後兩半

    -   前半部： `凱薩加密`，密鑰為 `10`

    -   後半部： `rail fence cipher` ，密鑰為 `2 4 1 3`

3.  `SWAP`

4.  做 `特里特米烏斯加密`，遞增，密鑰為 `52`

5.  將文字向 `右` 位移 `7`

    ![260880597\_938029580253010\_2934717344494894181\_n (1)
    (1).png](/Lec10/Encryption/images/30a168e545b691e5786d11fadb0aeb5446c145ba.png)\

請依照上述的加密演算法，印出加密過後的文字

</div>

### Input

第一行為選擇的加密方案 第二行為明文，皆為 64 個字元

### Output

加密後的結果

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    3
    Welcome to PD1! Welcome to PD1!! Welcome to PD1! Welcome to PD1!

#### Output

    lp !1Y!ppg pebU 1l Z!Kneev etqJ 1a O!ZcstKy yzoYwa  1J!hiZn nodN

</div>

<div>

### Sample2

#### Input

    2
    abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijkl

#### Output

    zbxvhfdjprnlljhntvrpbzxdjlhfrpnthxfddbzflnjhtrpvbdzxjhflrtpnzxvb

</div>

Image Editor
------------

### Description

<div>

In computer, everything is represented by numbers --- so does image.
Computer stores image as a matrix. A cell in the matrix is a pixel in
the image, and number in the cell represents the color of that pixel.

Today, Ariel wants to do a image editor which can rotate, flip
vertically, flip horizontally and crop images.

There are five operations, rotate(**r**), vertical flip(**v**),
horizontal flip(**h**), crop(**c**), output(**p**) images.

For example, consider an image as follows:

`| 1 2 3 |`\
`| 4 5 6 |`\
`| 7 8 9 |`

1.  Rotate(**r**)

    Two parameters are rotating the image 90 degrees to right or
    left(**l**/**r**) and the number of rotations, respectively. For
    example:

    `r r 10` rotate the image 90 degrees to right 10 times.

    `r l 1` rotate the image 90 degrees to left once.

    If we want to **rotate this image 90 degrees to the right**, we can
    rotate the matrix like this:

    `| 7 4 1 |`\
    `| 8 5 2 |`\
    `| 9 6 3 |`

2.  vertical flip(**v**)

    \"flip\" or \"mirror\" an image in the vertical direction (up-down).

    `| 7 8 9 |`\
    `| 4 5 6 |`\
    `| 1 2 3 |`

3.  horizontal flip(**h**)

    \"flip\" or \"mirror\" an image in the horizontal direction
    (left-right).

4.  crop(**c**)

    Four parameters are left, right, upper, lower boundary. For example:

    `c 1 1 1 3`

    Then the new image is:

    `| 1 |`\
    `| 4 |`\
    `| 7 |`

5.  output(**p**)

    Output the current image!

------------------------------------------------------------------------

在電腦裡，所有東西都是用數字來表達的------就連圖片也不例外。電腦以矩陣的形式來儲存每一張圖片，矩陣裡的格子代表著圖片的像素，而格子裡的數字就代表了該像素的顏色。

今天 Ariel 想要做個圖片編輯器，可以旋轉、垂直/水平翻轉以及裁切圖片。

共有五種操作，分別為旋轉(**r**)、垂直翻轉(**v**)、水平翻轉(**h**)、裁切圖片(**c**)、輸出圖片(**p**)

如果有一張圖片長這樣：

`| 1 2 3 |`\
`| 4 5 6 |`\
`| 7 8 9 |`

經過不同操作，會得到不同的結果。

一、 旋轉(**r**)

後面會有兩個參數，分別為向左/向右旋轉 90
度(**l**/**r**)以及會旋轉幾次，ex:

`r r 10` 向右旋轉 10 次

`r l 1` 向左旋轉 1 次

當我們要對圖片做旋轉時，我們實際上就是在旋轉這個矩陣本身。

如果我們想將這張圖片**向右旋轉 90 度**，那麼就等於是把矩陣旋轉成這樣：

`| 7 4 1 |`\
`| 8 5 2 |`\
`| 9 6 3 |`

二、垂直翻轉(**v**)

從上向下 180 度翻轉。

`| 7 8 9 |`\
`| 4 5 6 |`\
`| 1 2 3 |`

三、水平翻轉(**h**)

從左向右 180 度翻轉。

`| 3 2 1 |`\
`| 6 5 4 |`\
`| 9 8 7 |`

四、裁切圖片(**c**)

後面會有四個參數，分別為左邊界、右邊界、上邊界、下邊界，ex:

`c 1 1 1 3`

經過裁切後

`| 1 |`\
`| 4 |`\
`| 7 |`

五、輸出圖片(**p**)

將目前的圖片輸出!

</div>

### Input

The second line contains 2 integers m & n, indicates the dimension of
the image. And 1\<= m, n \<= 100. The following m lines contain n
integers, representing the image itself. Each integer in the image is in
the range of \[0, 1000\]. Then, an integer x represents the number of
operations. The following x lines are operations, execute operations
according to the operation\'s format.

### Output

Output the current image while executing \'p\' operation. Each number
must follow by a space. You need to print newline at the end of last
line.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    2 4
    1 2 3 4
    5 6 7 8
    6
    r r 1
    p
    h
    p
    c 1 2 3 4
    p

#### Output

    5 1 
    6 2 
    7 3 
    8 4 

    1 5 
    2 6 
    3 7 
    4 8 

    3 7 
    4 8 

</div>

<div>

### Sample2

#### Input

    3 4
    274 2 100 5
    222 1 50 70
    10 44 34 79
    8
    v
    p
    c 2 4 1 3
    p
    r l 11
    p
    r r 22
    p

#### Output

    10 44 34 79 
    222 1 50 70 
    274 2 100 5 

    44 34 79 
    1 50 70 
    2 100 5 

    2 1 44 
    100 50 34 
    5 70 79 

    79 70 5 
    34 50 100 
    44 1 2 

</div>

Poker Hand
----------

### Description

<div>

There are four people `A` ,`B` ,`C` ,`D` . Each of them has one poker
hand which consists of five cards. Each card in the hand will have both
a suit (`clubs`, `diamonds`, `hearts`, or `spades`) and a rank (`2`,
`3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `jack`, `queen`, `king`, or
`ace`). Write a program that prints out their order **from highest to
lowest**.

The categories of hand, from highest to lowest, are listed below:

1.  straight flush (both a straight and a flush)

2.  four-of-a-kind (four cards of the same rank)

3.  full house (a three-of-a-kind and a pair)

4.  flush (five cards of the same suit)

5.  straight (five cards with consecutive ranks)

6.  three-of-a-kind (three cards of the same rank)

7.  two pairs

8.  pair (two cards of the same rank)

9.  high card (any other hand)

We abbreviate ranks and suits as follows (letters may only be
lower-case):

Ranks: `2 3 4 5 6 7 8 9 t j q k a`

Suits: `c d h s`

Cards are always **compared by rank first**, and only then by suit. We
compare suits using the **\'reverse alphabetical order\'** ranking:
spades (highest), hearts, diamonds, clubs (lowest).

If any number of poker hands are **in the same category**, follow the
rules below (simplified, not the standard way):

1.  straight flush: The one with the higher ranking top card is better.
    If they are the same, compare the suit of the top cards. (for
    straight: `2 3 4 5 6` \~ `t j q k a`)

2.  four-of-a-kind: The one with the higher ranking set of four cards is
    better.

3.  full house: The one with the higher ranking set of three cards is
    better.

4.  flush: Same as 1.

5.  straight: Same as 1.

6.  three-of-a-kind: Same as 3.

7.  two pairs: The hand with the highest ranking pair wins. If they have
    the same rank, compare the highest suit of the highest ranking pair.

8.  pair: Same as 7.

9.  high card: Same as 1.

Note: not allow the use of jokers, and assume that aces are high.

</div>

### Input

The input contains four lines. Each line is followed by a newline
character. These four lines also represent four hands of five cards for
A, B, C, D respectively.

### Output

List A, B, C, D in the order from best to worst according to their poker
hands. Each letter is followed by a space.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    ts js qs ks as
    9s 9h 9d 9c 8s
    8h 8d 8c 7s 7h
    6s 6h 6d 5s 4s

#### Output

    A B C D 

</div>

<div>

### Sample2

#### Input

    ts js qh as kh
    3d 3s 3h 2h 2s
    jc qc kc 7c 8c
    2c 3c 4c 5c 6c

#### Output

    D B C A 

</div>

<div>

### Sample3

#### Input

    ah 3h 4h 9h th
    8h 8s jh jd 4c
    2s 2d 2c 2h 3s
    jc js 5h 5c 3d

#### Output

    C A D B 

</div>

基礎字串處理 - Basic String Operation
-------------------------------------

### Description

<div>

給定一個字串 `str1` 以及數個指令，請根據指令對字串進行處理並執行動作。\
可能會出現的指令如下：`PRINT` `REVERSE` `TO_LOWER` `TO_UPPER` `REMOVE`
`COMPRESS`。\
下方是各個指令的詳細解釋；建議各位使用 function 來執行各個指令。\
**每個指令的 output 後必須分行！**

\
Given a string of characters`str1`and a list of commands, perform
operations according to the commands.\
The possible commands are: `PRINT` `REVERSE` `TO_LOWER` `TO_UPPER`
`REMOVE` `COMPRESS`.\
Command descriptions are in the following section. Using functions to
treat each commands is recommended, though not required.\
Remember to break the line after each command\'s output!

### 指令說明 / Command Description

------------------------------------------------------------------------

**PRINT**

-   印出 `str1`當下的狀態。\
    Print the current state of the string

-   這個指令不應該對`str1`做出任何改動。\
    No modification should occur on `str1`

**\
\
REVERSE**

-   將`str1`頭尾顛倒。\
    Reverse`str1`.

-   假設`str1 = "Mine 123! @@"`執行結果應為`str1 = "@@ !321 eniM"`。\
    E.g.`str1 = "Mine 123! @@"`Becomes`str1 = "@@ !321 eniM"`.

-   你應該改變 `str1`的內容並**印出來**。\
    You should modify the data in`str1`and **print the modified
    string**.

**\
\
TO\_UPPER**

-   將字串內**所有小寫字母**轉成對應的大寫字母。\
    Transform **all lower-case alphabets** in the string to upper-case.

-   不需要對非字母的字元做出任何改動。\
    Non-alphabet character remains the same.

-   你應該改變 `str1`的內容並**印出來**。\
    You should modify the data in `str1`and **print the modified
    string**.

**\
\
TO\_LOWER**

-   將字串內**所有大寫字母**轉成對應的小寫字母。\
    Transform **all upper-case alphabets** in the string to lower-case.

-   不需要對非字母的字元做出任何改動。\
    Non-alphabet character remains the same.

-   你應該改變 `str1` 的內容並**印出來**。\
    You should modify the data in `str1` and **print the modified
    string**.

**\
\
REMOVE \<target\>**

-   自`str1`移除所有字元
    \<target\>。所有剩下來的字元必須**向前推移填滿所有空位**。\
    From `str1`, **remove** **all occurrence** of the character
    \<target\>. The remaining characters must be **shifted to the front
    to fill up the blanks**.

-   假設`str1 = ['a', 'p', 'p', 'l', 'e', '\0'], target = 'p'`,
    執行結果應為`str1 = ['a', 'l', 'e', '\0']`。有注意到長度變短了嗎？\
    e.g., `str1 = ['a', 'p', 'p', 'l', 'e', '\0'], target = 'p'`, the
    result should be `str1 = ['a', 'l', 'e', '\0']`. Notice the length
    of the string is shortened.

-   **執行完成後至少會留下 1 個字元。**\
    **There will be at least 1 character left in the string after
    removal.**

-   空白`' '`也可能是被移除的目標。\
    Spaces`' '`might also be the target to remove.

-   你應該改變 `str1` 的內容並**印出來**。\
    You should modify the data in `str1` and **print the modified
    string**.

**\
\
COMPRESS**

-   使用 **Run-Length Encoding** 來對`str1`進行壓縮。以下為 Run-Length
    Encoding 的執行步驟：\
    Use **Run-Length Encoding** to compress`str1`. The following is how
    to Run-Length Encoding:

    -   從`str1[0]`開始。\
        Start from `str1[0]`.

    -   計算選到的字元連續出現了幾次。\
        Count the number of **contiguous subsequent occurrences** of the
        picked character.

    -   將其改成`-<字元><出現次數>`的形式。**注意前面有個減號**，用來標示被壓縮的字元。\
        Transform into the form as `-<char><occurrence>` . **Note that
        there is a minus sign in front of the pair**, used to mark which
        character is getting encoded**.**

    -   假設`str1 = "aaaabbbcccikK"`執行結果應為`str1 = "-a4-b3-c3-i1-k1-K1"`。請注意，**大小寫英文字母被視為不同的字元**。\
        e.g., `str1 = "aaaabbbcccikK"` becomes
        `str1 = "-a4-b3-c3-i1-k1-K1"`. Notice that **lower and upper
        case alphabets are considered different characters**.

    -   假設`str1 = "AaaaC@@---  """"`執行結果應為`str1 = "-A1-a3-C1-@2--3- 2-"3"`。請注意，**空白和減號也會被處理**。\
        e.g.,`str1 = "AaaaC@@---  """"` becomes
        `str1 = "-A1-a3-C1-@2--3- 2-"3"`. Notice that **spaces and minus
        signs are also being encoded.**

-   你應該改變 `str1` 的內容並**印出來**。\
    You should modify the data in `str1` and **print the modified
    string**.

### 提示與建議 / Tips and Suggestions

------------------------------------------------------------------------

1.  當在 `scanf()` 中使用 `%s` 時，**會取用直到下個 white space
    character**(例如空白`' '`, 換行`'\n'` , 水平 / 垂直 Tab`'\t'` /
    `'\v'`等等) **之前的所有字元**。**而這個字元則會留在 input
    中不被讀取**。\
    When using `%s` in `scanf()`, **all inputs until the next trailing
    whitespace character** (e.g., spaces`' '`, newline`'\n'`, horizontal
    / vertical tabs`'\t'` / `'\v'`) **will be consumed**, **but the
    whitespace character will remain untouched**.\
    \

2.  `getchar()` **可以從 input 中移除一個
    character**，可參考以下使用例：\
    `getchar()` **can be used to remove a character from input**. The
    following is a simple example:

```{=html}
<!-- -->
```
    /* 自 input 中移除一個字元並將該字元賦值給 a。 與 scanf("%c", &a) 相同效果。
       Remove 1 character from input and assign the character to a. Has same effect as scanf("%c", &a). */
    char a = getchar(); 

    /* 僅自 input 中移除一個字元。
       Remove 1 character from input. No assignment happens here. */
    getchar();

3.  `==`**無法用來比較字串** 。\
    `==`**cannot be used to compare strings.\
    \
    **

4.  **你必須在字串結束處加上** `'\0'` **來標示字串終結。\
    **`'\0'`**is required and used to mark the end of character array
    strings.\
    \
    **

5.  每個可以成功執行的指令都會讓你拿到一些分數。\
    Every correctly implemented commands will grant you some points.

</div>

### Input

First line is the original string \`str1\`. ∘ Might contain all
Printable ASCII Code Characters, expect DEL. (a.k.a, ACSII Code 32\~126)
∘ Through the whole program (including this input), the string will not
be longer than 1024 characters. (1025 if terminating \'\\0\' included)
The second line contains a integer \`N\`, denotes how many commands
would be executed. ∘ 1 ≤ \`N\` ≤ 100 The following \`N\` Lines are the
commands.

### Output

Print everything the commands requires you to.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    ABC   %%%
    10
    REVERSE
    COMPRESS
    REMOVE -
    REMOVE  
    REMOVE 1
    REMOVE B
    REMOVE C
    TO_LOWER
    COMPRESS
    TO_UPPER

#### Output

    %%%   CBA
    -%3- 3-C1-B1-A1
    %3 3C1B1A1
    %33C1B1A1
    %33CBA
    %33CA
    %33A
    %33a
    -%1-32-a1
    -%1-32-A1

</div>

<div>

### Sample2

#### Input

    AAAAA - -  BBCC
    1
    PRINT

#### Output

    AAAAA - -  BBCC

</div>

<div>

### Sample3

#### Input

    AAAAA - -  BBCC
    1
    REVERSE

#### Output

    CCBB  - - AAAAA

</div>

<div>

### Sample4

#### Input

    AAAAA - -  BBCC
    1
    COMPRESS

#### Output

    -A5- 1--1- 1--1- 2-B2-C2

</div>

<div>

### Sample5

#### Input

    aaaaa - -  bbCC
    1
    TO_UPPER

#### Output

    AAAAA - -  BBCC

</div>

<div>

### Sample6

#### Input

    AAAAA - -  BBCC
    1
    REMOVE B

#### Output

    AAAAA - -  CC

</div>

