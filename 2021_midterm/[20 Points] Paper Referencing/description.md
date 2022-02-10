\[20 Points\] Paper Referencing
-------------------------------

### Description

<div>

It is usual that a paper may have many references. Probably a website, a
book, or other papers.

Assume that if we want to understand a specific paper, we need to read
the paper and its all references.

(If the referenced paper has other references, all of them should be
read.)

In this problem, given some reference numbers,

write a program that lists all papers that should be read for the
specific paper.

For the first sample testcase, given a number `5`, which means there are
five papers (number 1 \~ 5),

then, follow the format 「referencingPaper referencedPaper1
referencedPaper2 \...」 to input.

We can know that,

the 5th paper references the 1st 2nd 3rd papers

the 2nd paper references the 4th paper

the 1st paper references the 2nd paper

the 3rd paper references the 4th paper

until we encounter 0, stop inputting.

Now, if we want to fully understand all these five papers, then

for the 1st paper, we should read the 1st, 2nd, 4th papers (since the
1st paper references the 2nd paper, and the 2nd paper references the 4th
paper)

for the 2nd paper, we should read the 2nd, 4th papers

for the 3rd paper, we should read the 3rd, 4th papers

for the 4th paper, we should read the 4th paper

for the 5th paper, we should read the 1st, 2nd, 3rd, 4th, 5th papers

------------------------------------------------------------------------

在一篇論文中，通常會有許多參考文獻，可能是某個網站、某本書、或是其他相關論文。

假設要完整個理解某篇論文，需要完整看完自身內容，以及其參考文獻（若類推下去仍有參考文獻，亦須將其完整看完）。

本題以此概念為出發，給予許多篇的論文編號，

請寫出一個程式，條列出透徹每篇論文所須看的所有論文編號。

以第一筆範例測資來說，給予一數字 `5`，代表有著五篇論文（編號 1 \~ 5），

接下來以「參考論文 被參考論文1 被參考論文2 \...」的格式進行輸入。

因此可以解讀出以下訊息：

第 5 篇論文參考了第 1、2、3 篇論文

第 2 篇論文參考了第 4 篇論文

第 1 篇論文參考了第 2 篇論文

第 3 篇論文參考了第 4 篇論文

直到遇到 0，代表輸入結束。

那麼若要透徹這五篇論文，則

第 1 篇論文應閱讀完第 1、2、4 篇論文（因為第 1 篇論文參考了第 2
篇論文，而第 2 篇論文又參考了第 4 篇論文）

第 2 篇論文應閱讀完第 2、4 篇論文

第 3 篇論文應閱讀完第 3、4 篇論文

第 4 篇論文應閱讀完第 4 篇論文

第 5 篇論文應閱讀完第 1、2、3、4、5 篇論文。

</div>

### Input

The first line is an integer N, and it means there are N papers (number
1 \~ N). And 1 \<= N \<= 100. Then follow the format 「referencingPaper
referencedPaper1 referencedPaper2 \...」 to input until encounter 0.
Notice that the referencing paper number on each row won\'t be ordered.
You don\'t need to consider the cycle. (If the 1st paper references the
3rd paper, and the 3rd paper references the 1st paper, well, it sounds
weird!) 一開始輸入一數字 N，代表有 N 篇論文，編號為 1 \~ N，且 1 \<= N
\<= 100。 接者以「參考論文 被參考論文1 被參考論文2
\...」的格式進行輸入， 直到讀到 0 代表輸入結束。
注意，每列的參考論文編號並不會按照順序， 且不必考慮 cycle
的狀況（如果說第 1 篇論文參考第 3 篇論文，而第 3 篇論文卻又參考了第 1
篇論文，聽起來超怪的對吧！）。

### Output

Print each paper number in ascending order on each row. Then follow the
format 「referencingPaper -\> readPaper1 readPaper2 \...」. Notice that
the readPaperN should be printed in ascending order.
依照每個論文號碼順序輸出， 並以「參考論文 -\> 需閱讀的論文1
需閱讀的論文2 \...」的格式回答。 注意，須閱讀的論文N 必須由小到大排序。

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5
    5 1 2 3
    2 4
    1 2
    3 4
    0

#### Output

    1 -> 1 2 4
    2 -> 2 4
    3 -> 3 4
    4 -> 4
    5 -> 1 2 3 4 5

</div>

<div>

### Sample2

#### Input

    8
    6 2 4 5
    4 1 7
    3 1 5 8
    0

#### Output

    1 -> 1
    2 -> 2
    3 -> 1 3 5 8
    4 -> 1 4 7
    5 -> 5
    6 -> 1 2 4 5 6 7
    7 -> 7
    8 -> 8

</div>
