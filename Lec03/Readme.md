Lec03
=====
Addition in Column Form
-----------------------

### Description

<div>

Your cousin is a second grade elementary school student. He learned the
addition that written in column form in his today\'s class. However, he
still has lots of questions about it. Your task is to write a small
program to demonstrate the answer to the addition of `x`and `y`written
in column form.

</div>

### Input

Given 2 integers split by a space. 0 \<= x, y \<= 9999

### Output

The column form will be performed in 4 lines. First line will start in 2
space and augend(被加數) padding with zeros until 4 digits. Second line
will start in \"+)\" and addend (加數) padding with zeros until 4
digits. Third line is \"\-\-\-\-\--\". Last line is the result padding
with zeros until 6 digits.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    0 0

#### Output

      0000
    +)0000
    ------
    000000

</div>

<div>

### Sample2

#### Input

    9999 9999

#### Output

      9999
    +)9999
    ------
    019998

</div>

<div>

### Sample3

#### Input

    105 9651

#### Output

      0105
    +)9651
    ------
    009756

</div>

<div>

### Sample4

#### Input

    50 985

#### Output

      0050
    +)0985
    ------
    001035

</div>
Cirno\'s Perfect Math Class 琪露諾的完美算術教室
------------------------------------------------

### Description

<div>

琪露諾的算術教室要開始了～以天才為目標努力吧！

琪露諾除了算術教室以外也經營幻想鄉客運（車上附冷氣）

某天她想計算經過每站後車上分別會有幾位乘客

但眾所皆知，琪露諾是個『⑨. 笨蛋』

所以請各位幫忙計算人數

問題：

巴士從紅魔館 (`X`站) 出發　一開始有 `A` 人上車

在白玉樓 (`Y` 站) 有 `B` 人下車　另外有 `C` 個人上車了

在八雲家 (`Z` 站) 有 `D` 人下車　請問每次過站後車上分別有幾位乘客?

為了讓琪露諾看得懂，請在每個人數前用`0`補滿四位數

Everybody! Cirno\'s math class is about to begin! Do your best to become
a genius!

Not only the math class, Cirno also operates a bus company \"Gensokyo
Bus\",

One day she wants to know how many passengers is onboard when the bus
passes each station,

but everybody knows cirno is a \"⑨. Baka\" (a.k.a. an idiot),

so please help her to calculate this.

Problem:

A bus left the Scarlet Devil Mansion (say, `X` station); `A` people
boarded at the start

At Hakugyokurou (say, `Y` station), `B` left and `C` people boarded

At Yakumo-san\'s house (say, `Z` station), `D` people left; so how many
passengers is on board after each station?

To help cirno understand the number, please left-padding each number to
4 digits with `0`

<https://www.youtube.com/watch?v=xFdDNrd6W9s>

</div>

### Input

One line contain 4 integers A B C D separated by space (0 \<= A, B, C, D
\<= 9999)

### Output

One line contains 3 integers x, y, z padding with zeros until 4 digits
separated by space (0 \<= x, y, z \<= 9999)

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    6381 5852 3862 4329

#### Output

    6381 4391 0062

</div>

<div>

### Sample2

#### Input

    8982 8444 1532 571

#### Output

    8982 2070 1499

</div>

<div>

### Sample3

#### Input

    3791 2054 6299 7230

#### Output

    3791 8036 0806

</div>

<div>

### Sample4

#### Input

    6641 787 1731 5883

#### Output

    6641 7585 1702

</div>
Scanf Format Problem
--------------------

### Description

<div>

There is a sequence A/B\*\*C/)D , where A,B,C,D are integer.

Please output the *A*+*B+C+D.*

</div>

### Input

There is one line sequence A/B\*\*C/)D. ( 1 \< A,B,C,D \< 1000000 and
A,B,C,D are integers )

### Output

Please output the A+B+C+D. No need to print the newline.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    123/456**789/)222

#### Output

    1590

</div>

<div>

### Sample2

#### Input

    234322/45226**723489/)22222

#### Output

    1025259

</div>

<div>

### Sample3

#### Input

    2/43226**712119/)522

#### Output

    755869

</div>

<div>

### Sample4

#### Input

    684643/930498**150845/)464300

#### Output

    2230286

</div>
俗俗的賣大拍賣 Discount Price Tag Printing
------------------------------------------

### Description

<div>

2021/10/21 21:50 更新 / Update:

新增提示，請至下方 Hint 查看

Added hint below

------------------------------------------------------------------------

資訊系阿超正在協助可憐的銷售員設計即將到來的周年慶看板。

但是因為人工處理起來真的太費時了，

請幫她設計一個程式可以自動化的處理完這件任務吧!

別擔心，阿超知道要如何將輸出結果從螢幕終端顯示器中帶到現實的!

A-chao, from CSIE, is helping a poor supermarket salesperson designing
the price tag for the upcoming anniversary event. However, there is way
too much to do it by hand. Please help him design a program to print out
the price tag format. Don\'t worry, he knows how to make things in the
terminal become physical.

The following are the rules for each output lines:

-   Line \#0 / \#4: Filly Packed with the character `"`

-   Line \#1: Start with a backslash `\`, four spaces, **the discount
    percentage which takes 3 character lengths**, the string `%off!`,
    four more spaces, then ends with another backslash.

-   Line \#2: Start with a backslash `\`, one space, the string `Before`
    , two more spaces, a dollar sign `$`, **the original cost without a
    decimal point** using a **field width of five characters (justified
    to the right)**, and ends with another space and a backslash.

-   Line \#3: Start with a backslash `\`, one space, the string `After`,
    three more spaces, a dollar sign `$`, **the discounted cost till the
    second decimal place** using a **field width of five characters
    (justified to the right)**, and ends with another space and a
    backslash.

-   **No leading zero** should be added to any of the printed numbers.

-   You can checkout the testing cases for full examples.

</div>

### Input

Two integers a, b separated by a space. a represents \"discount
percentage\". b represents \"original cost\". 0 \<= a \<= 100 1 \<= b
\<= 99

### Output

Consists of 5 lines, forming a 18\*5 rectangle. Please refer to the
description section for details of each line.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    50 8

#### Output

    """"""""""""""""""
    \     50%off!    \
    \ Before  $    8 \
    \ After   $ 4.00 \
    """"""""""""""""""

</div>

<div>

### Sample2

#### Input

    25 16

#### Output

    """"""""""""""""""
    \     25%off!    \
    \ Before  $   16 \
    \ After   $12.00 \
    """"""""""""""""""

</div>

<div>

### Sample3

#### Input

    15 80

#### Output

    """"""""""""""""""
    \     15%off!    \
    \ Before  $   80 \
    \ After   $68.00 \
    """"""""""""""""""

</div>

<div>

### Sample4

#### Input

    100 1

#### Output

    """"""""""""""""""
    \    100%off!    \
    \ Before  $    1 \
    \ After   $ 0.00 \
    """"""""""""""""""

</div>
