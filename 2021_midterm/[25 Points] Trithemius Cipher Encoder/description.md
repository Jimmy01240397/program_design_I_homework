\[25 Points\] Trithemius Cipher Encoder
---------------------------------------

### Description

<div>

Do you remember [Caesar
cipher](https://ckj.imslab.org/#/problems/L6vddcFTIix4)? One similar
technique is **Trithemius cipher**, it is a successive shift cipher. In
the case of Caesar cipher, each character in the plaintext message is
shifted with a fixed offset `k`. As for **Trithemius cipher**, a
successive shift (it could be ascending or descending, each time it
shift 1) and the offset `k` is added to each character.

For example: `k=1` , ascending, and the message we want to encode is
`TAs are so H4ND5OME`. The offset of each character is:

1.  `T A s a r e s o H N D O M E`

2.  `1 2 3 4 5 6 7 8 9 10 11 12 13 14`

The cipher text becomes `UCv ewk zw Q4XO5AZS`.

Write a program that prints out the result of Trithemius cipher for the
given input (described in Input Format).

Note: Transform only **english alphabet (case-preserving)** and preserve
other characters such as Arabic numerals or punctuation. The successive
shift only occurs on english alphabet.

------------------------------------------------------------------------

還記得[凱薩密碼](https://ckj.imslab.org/#/problems/L6vddcFTIix4)嗎？有個類似的加密方式是**特里特米烏斯密碼**。在凱薩密碼中，每個字元都會被平移一個固定的值`k`，而**特里特米烏斯密碼密碼**則會額外多加一個連續的偏移值(會是遞增或遞減，每次移動1)。

舉例來說，
`k=1`、遞增的狀況下，我們想加密`TAs are so H4ND5OME`，而每個字元的偏移量為：

1.  `T A s a r e s o H N D O M E`

2.  `1 2 3 4 5 6 7 8 9 10 11 12 13 14`

加密文字會是`UCv ewk zw Q4XO5AZS`.

請撰寫一支程式來加密給定的訊息。

註：只需轉換英文字母(需保留大小寫)並保留其他字元例如阿拉伯數字、標點符號等等。連續偏移量只會在遇到英文字母時增減。

</div>

### Input

The first line is an integer k, where -2147483648 \<= k \<= 2147483647.
The second line contains a character \'a\' or \'d\' which indicates that
it is ascending or descending. The third line is the message that you
need to encode. Each line is ended with a newline character.

### Output

The cipher text.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    1
    a
    TAs are so H4ND5OME

#### Output

    UCv ewk zw Q4XO5AZS

</div>

<div>

### Sample2

#### Input

    4
    d
    PD1 is sooooo awesome!!

#### Output

    TG1 kt snmlkj upwjebs!!

</div>
