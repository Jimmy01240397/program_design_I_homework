Lec07
=====

Add Up Two Hexadecimal
----------------------

### Description

<div>

There are two **unsigned 16 bits** hexadecimal integer `A` `B`,

Please add up those number and store the answer as an **unsigned 16 bits
decimal integer**.

If the answer is overflow, print `OVERFLOW!`, otherwise, print the the
result of `A + B`, the type of which is unsigned 16 bits decimal
integer.

</div>

### Input

Two unsigned 16 bits hexadecimal integer.

### Output

If the result of adding up two input is overflow, print \"OVERFLOW!\",
otherwise, print the result of A + B (unsigned 16 bits decimal integer).

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    0x0001 0x0001

#### Output

    2

</div>

<div>

### Sample2

#### Input

    0xFFFF 0x0001

#### Output

    OVERFLOW!

</div>

Caesar Cipher Encoder
---------------------

### Description

<div>

The Caesar cipher (a cipher is a method of encrypting data) is one of
the simplest and most widely known encryption techniques. For English
text, the Caesar cipher would work by taking each letter in the
plaintext message and substituting the letter that is `k` letters latter
(allowing wraparound; that is, having the letter **z** followed by the
letter **a**) in the alphabet.

For example, if `k = 3`, then the letter **a** in plaintext becomes
**d** in ciphertext, **B** in plaintext becomes **E** in ciphertext, and
the plaintext message **\"bob, i love you. Alice\"** becomes **\"ere, l
oryh brx. Dolfh\"** in ciphertext. Note that `k` may be negative. It
means that you should substitute the letter in the plaintext message
that is `|k|` letters earlier.

Write a program that prints out the Caesar cipher for the given input
(described in Input Format).

Note: Transform only English alphabet (case-preserving) and preserve
other characters such as Arabic numerals or punctuation.

</div>

### Input

The input contains two lines. Both lines are followed by a newline
character. The first line contains an integer for k (-10000 \<= k \<=
10000), and the second line is a plaintext message.

### Output

Output the ciphertext of the plaintext message in the input using the
Caesar cipher. There is no newline character at the end of the output.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    7
    TAs of the PD1 course are so handsome !!!

#### Output

    AHz vm aol WK1 jvbyzl hyl zv ohukzvtl !!!

</div>

<div>

### Sample2

#### Input

    -105
    a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z.

#### Output

    z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y.

</div>

Combination
-----------

### Description

<div>

The combination is defined as `C(m, n) = m! / (n! * (m - n)!)`, and `n!`
is n\'s factorial. Use the definition above to calculate the value of
`C(m, n)`.

</div>

### Input

Two integers m, n separated by a space. 1 \<= n \<= m \< 30.

### Output

An integer represents the value of C(m, n).

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5 2

#### Output

    10

</div>

<div>

### Sample2

#### Input

    10 7

#### Output

    120

</div>

進階版快閃心算 - Advanced Flashing Number Mental Arithmetic
-----------------------------------------------------------

### Description

<div>

**快閃心算（フラッシュ暗算）**是源自日本珠算界的一個數學競技活動。計算者會在螢幕上看到快速出現消失的數個數字，在顯示完成之後必須在約5秒內回答出所有出現數字的總和。覺得聽起來很簡單嗎？參考
<https://www.youtube.com/watch?v=Q7Jd3Mbzup0> 試試吧！

資訊系的阿超覺得『沒錯，就是太簡單了』。於是他設計了進階版的規則：

1.  螢幕上顯示的數字可能是 **6 進位(SEN)、8 進位(OCT)、10
    進位(DEC)，以及16 進位(HEX)**。

2.  每次**出現的數字 K 介於 0 和 999,999,999 之間**。

3.  由於最後的數字可能很大，**回答時必須用 1,000,000,007 取餘數**。

    -   舉例來說，假設總和是 1,000,000,010，由於 3 ≡ 1,000,000,010 mod
        1,000,000,007**，必須回答『3』。**

同時，阿超也出了一些題目，但是太簡單了他不屑自己算。請幫他設計一個程式，可以幫他計算這些題目的答案！

**※題目中沒有加註進位制的數字皆為十進制！※**

------------------------------------------------------------------------

**Flashing Number Mental Arithmetic（フラッシュ暗算）**is a competitive
game originated from Japanese zhusuan circle. The calculator (a human,
that is) will see several numbers rapidly appear and disappear on the
screen, after it, he/she have to answer the sum of all appeared numbers
in a few seconds. Sounds simple? Try it out at
<https://www.youtube.com/watch?v=Q7Jd3Mbzup0> !

Chao from CSIE thinks that, \"Yup, its way too easy\". So, he designed
the rules for a \"advanced\" version:

1.  The numbers appear on the monitor might be in **Base-6(SEN),
    Base-8(OCT), Base-10(DEC), or Base-16(HEX)**.

2.  Value of every number will be in **between 0 and 999,999,999**.

3.  Since the final number might be extremely large, **you have to
    answer in modular 1,000,000,007.**

    -   E.g., if the sum is 1,000,000,010, since that 3 ≡ 1,000,000,010
        mod 1,000,000,007, **you have to answer \"3\"**.

At the same time, Chao also created some problems, but they are waaaaay
too easy for him to solve. Help him design a program that calculates the
correct answer.

**※ All number in this problem description, unless specified, are in
Base-10(Decimal) ! ※**

</div>

### Input

First line consist of a integer N, represents how many number to sum. 1
\<= N \<= 1,000 Followed by N lines, each consists of 2 integers, S and
K. S denotes the base of K. S ∈ {6, 8, 10, 16} , 0 \<= K \<=
DEC999,999,999 If K is Base-6, or Base-10, its written normally. If K is
Base-8, it will have prefix \"0\". (e.g. 0123, 0777) If K is Base 16, it
will have prefix \"0x\". (e.g. 0x41414141, 0xDEADBEAF)

### Output

output a integer, that is the sum of all input K, mod 1,000,000,007.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    4
    6 20
    8 040
    10 100
    16 0xFF

#### Output

    399

</div>

<div>

### Sample2

#### Input

    8
    6 0
    8 00
    10 0
    16 0x0
    6 243121245343
    8 07346544777
    10 999999999
    16 0X3B9AC9FF

#### Output

    999999975

</div>

