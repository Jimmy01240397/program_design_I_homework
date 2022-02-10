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
