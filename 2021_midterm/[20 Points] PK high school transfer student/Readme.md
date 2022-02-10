\[20 Points\] PK high school transfer student
---------------------------------------------

### Description

<div>

In PK high school, there is a transfer student. **The student number is
sorted by their name.**

Following are the student number sorting rules:

\- Sorted by the letter of name, if the letter is closer to A, the
student number is smaller. (For instance, the student number of `Chloe`
is smaller than that of `Sam` because compare with `C` and `S`, `C` is
closer to `A`)

\- It is no different between lowercase and uppercase (ex. `AMY` and
`amy` are the same)

\- In this case, `Sam` and `Samuel`, the letters of `Sam` is the same as
the first three letters of `Samuel`, but the length of `Sam` is shorter
than that of `Samuel`, `Sam`\'s student number is smaller than `Samuel`.

Here is an example.

There are two students in class. The name of those students are `nendou`
and `saiki`.

The transfer student\'s name is `saiko`.

Let\'s compare `nendou` and `saiko` first. Because the order of `n` is
smaller than `s`, the student number of `nendou` is smaller than
`saiko`.

Next, compare `saiki` and `saiko`. Because the first four letter of
their name are the same, compare the 5th letter. Because the order of
`i` is smaller than `o`, the student number of `saiki` is smaller than
`saiko`.

In this case, transfer student `saiko` \'s student number is 3.

Please help transfer student to find his/her student number.

p.s The transfer student\'s name won\'t be the same as the student\'s
name.

------------------------------------------------------------------------

呀咧呀咧，新學期PK學園又來了個新轉學生，在這裡所有的學生
**座號都是使用名字拼音排序** 的。

排序的規則為

-   從名字拼音的開始排序，比較接近 `a` 的座號會比較前面

```{=html}
<!-- -->
```
-   大小寫字母沒有分別 (ex. `AMY` 與 `amy` 視作完全相同)

```{=html}
<!-- -->
```
-   如果剛好出現轉學生全名與班上學生某姓名的前面字母完全相等，或班上某學生全名與轉學生姓名前面字母完全相等，則名字較短的座號會比較前面。
    (ex. `Sam` 與 `Samuel`， `Sam` 的座號會比較小)

現在來舉個例子：

班上有兩個學生，分別是 `nendou` 與 `saiki`，

轉學生的名字叫 `saiko`。

先來比較 `nendou` 與 `saiko` ，按照英文 26 個字母的排序，`n` 比 `s`
來得更前面，所以 `nendou` 的座號在 `saiko` 之前。

再比較 `saiki` 與 `saiko` ，由於前四個字母皆為 `saik`
，比較第五個字母，由於 `i` 在 `o` 之前，所以 `saiki` 的座號也在 `saiko`
之前。

在這個範例裡，新轉學生 `saiko` 的座號就是 3。

每個學期都會出現新的轉學生，可以請你幫轉學生找到他的座號嗎？

p.s 不會出現班上同學與轉學生撞名的狀況

</div>

### Input

First line is a number (N ) represent for how many students are in the
class. Second line is transfer student\'s information. The first number
( n ) represents for the length of the student\'s name, following is the
student\'s name. Following N lines are the origin student\'s
information. The first number ( n ) represents for the length of the
student\'s name, following is the student\'s name. 1 \<= N \<= 30 1 \<=
n \<= 16 The students\' names are composed of a \~ z and A \~ Z
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-- 第 1 行的輸入 N
代表班上目前有幾名學生 第 2 行的輸入是轉學生資訊，有兩個欄位，第一個 n
表示轉學生名字的長度，後面接續著轉學生的名字 後面 N
行是班上學生的資訊，第一個 n
表示學生名字長度，後面接續著班上學生的名字（注意：這 N
行之間並不是已排序好的學生資訊） 1 \<= N \<= 30 1 \<= n \<= 16
學生名稱由小寫英文字母 a \~ z 及大寫英文字母 A \~ Z 組成

### Output

Transfer student\'s student number ( student number starts from 1 )
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-- 輸出為轉學生的座號 (座號從 1
開始)

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    2
    5 saiko
    6 nendou
    5 saiki

#### Output

    3

</div>

<div>

### Sample2

#### Input

    5
    3 pat
    5 patsy
    7 patrick
    5 percy
    8 philemen
    8 penelope

#### Output

    1

</div>
