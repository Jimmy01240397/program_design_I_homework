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
