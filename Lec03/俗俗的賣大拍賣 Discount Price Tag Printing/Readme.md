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
