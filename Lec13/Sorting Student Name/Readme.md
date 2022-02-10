Sorting Student Name
--------------------

### Description

<div>

你還記得 [PK 學園轉學生](https://ckj.imslab.org/#/problems/QJd9kELj6SEL)
嗎？

來了一個轉學生，表示班上有很多同學的座號需要被改變，座號的排序規則為：

\- 從名字拼音的開始排序，比較接近 `a` 的座號會比較前面

\- 大小寫字母沒有分別 (ex. `AMY` 與 `amy` 視作完全相同)

\-
如果剛好出現兩個班上學生姓名的前面字母完全相等，則名字較短的座號會比較前面。
(ex. `Sam` 與 `Samuel`， `Sam` 的座號會比較小)

請你 **按照座號**，印出所有班上學生的名稱！

\-\-\--

Do you remember [PK high school transfer
student](https://ckj.imslab.org/#/problems/QJd9kELj6SEL)?

The sorting rules of student number are listed below:

\- Sorted by the letter of name, if the letter is closer to `A`, the
student number is smaller. (For instance, the student number of `Chloe`
is smaller than that of `Sam` because compare with `C` and `S`,`C` is
closer to `A`)

\- It is no different between lowercase and uppercase (ex. `AMY` and
`amy` are the same)

\- In this case, `Sam` and `Samuel`, the letters of `Sam` is the same as
the first three letters of `Samuel`, but the length of `Sam` is shorter
than that of `Samuel`, `Sam`\'s student number is smaller than Samuel.

Please base on the student number, print the name of all students in
this class!

</div>

### Input

First line is a number (N) represents for how many students are there in
the class. Following strings are the students\' names. 2 \<= N \<= 100 2
\<= length of students\' names \<= 100

### Output

Sorted students\' names.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    3
    Saiko
    Nendou
    saiki

#### Output

    Nendou
    saiki
    Saiko

</div>

<div>

### Sample2

#### Input

    6
    pat
    patsy
    patrick
    percy
    philemen
    penelope

#### Output

    pat
    patrick
    patsy
    penelope
    percy
    philemen

</div>
