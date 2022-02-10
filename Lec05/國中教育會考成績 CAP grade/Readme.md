國中教育會考成績 CAP grade
--------------------------

### Description

<div>

The **Comprehensive Assessment Program for Junior High School
Students(CAP)**, is one of the current Senior high-school entrance
program in Taiwan. The exam regulations and grading rules are as
following:

-   The CAP consists of 5 subjects: **Chinese, English, Mathematics,
    Social Studies, and Science**.

-   Base on the result of each subject, each are divided into
    **\"Excellent\" (Grade A), \"Fair\" (Grade B), and \"Improvement
    Needed\" (Grade C)** three ranks. Within grade A and B, each will be
    further divided into three smaller levels **\"A++/B++\", \"A+/B+\",
    and \"A/B\"**.

-   Each rank corresponds to different amount of **score**, and each
    level corresponds to a different amount of **point**. Both are
    summed up to get the total score / total points. The score / point
    translation table is as following:

    ![](/Lec05/%E5%9C%8B%E4%B8%AD%E6%95%99%E8%82%B2%E6%9C%83%E8%80%83%E6%88%90%E7%B8%BE%20CAP%20grade/images/b108e1d8afa0b47514e61aebe0a502e44d24e00a.png)

-   The subjects Chinese, Social Study and Science are graded by the
    number of correct answers. The subjects Mathematics and English, are
    graded by the weighting system. The translation table is as
    following:

    ![](/Lec05/%E5%9C%8B%E4%B8%AD%E6%95%99%E8%82%B2%E6%9C%83%E8%80%83%E6%88%90%E7%B8%BE%20CAP%20grade/images/594132e0d016faba82b2f6264c18461f75bcb122.png)

-   The final result can be represented as \"**score/points(ranks)**\".

Example: Steven\'s grade of each subject is: **CH=43, EN=92.5, MA=79.8,
SO=61, SC=41**. We can know the rank of each subjects is: **CH=A+, EN=A,
MA=B++, SO=A++, SC=B++**. So the total score is 6 + 6 + 4 + 6 + 4 = 26,
and the total points 6 + 5 + 4 + 7 + 4 = 26. The final CAP grading
result is `26/26(3A2B)`.

Given a student\'s grade of each subject, please calculate the final CAP
grading result.

------------------------------------------------------------------------

**國中教育會考**，是台灣現行的高中入學管道之一。會考的考試規則與成績計算方式如下：

-   考科總共有**國文、英文、數學、自然、社會**五科。

-   每一考科的成績依高低被區分為**精熟 (A)、基礎 (B)、待加強 (C)**
    三個等級，而其中精熟與基礎又可再分別細分為**「A++ / B++」、「A+ /
    B+」、「A / B」**三個分級。

-   不同的等級會對應到不同**積分**，不同分級對應到不同**積點**。將各科等級加總會得到總積分，各科分級加總得到總積點。其換算表如下表所示：

    ![](/Lec05/%E5%9C%8B%E4%B8%AD%E6%95%99%E8%82%B2%E6%9C%83%E8%80%83%E6%88%90%E7%B8%BE%20CAP%20grade/images/b108e1d8afa0b47514e61aebe0a502e44d24e00a.png)

-   國文、社會、自然三科以答對題數進行評分；數學、英文因為分別有手寫、聽力部份，另以加權分數進行評分。108
    學年度的各科量尺分數換算表如下表所示：

    ![](/Lec05/%E5%9C%8B%E4%B8%AD%E6%95%99%E8%82%B2%E6%9C%83%E8%80%83%E6%88%90%E7%B8%BE%20CAP%20grade/images/594132e0d016faba82b2f6264c18461f75bcb122.png)

-   學生成績可以被表示為「**積分/積點（等級）**」。

例：小明的五科分數分別為：**國 43、英 92.5、數 79.8、社 61、自
41**，則可以得知其各科分級為：**國 A+、英 A、數 B++、社 A++、自
B++**，總積分為 6 + 6 + 4 + 6 + 4 = 26，總積點為 6 + 5 + 4 + 7 + 4 =
26，其會考成績可表示為`26/26(3A2B)`。

給定某生的各科分數，請你幫忙計算該生的會考成績。

</div>

### Input

Five number CH, EN, MA, SO, SC, which represent the original grade of
Chinese, English, Mathematics, Social studies and Science, respectively.
The data type of CH, SO, SC is integer. The data type of EN, MA is
float.

### Output

The final grade of this student, in the format \`score/points(ranks)\`.
Please refer to description above.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    43 92.5 79.8 61 41

#### Output

    26/26(3A2B)

</div>

<div>

### Sample2

#### Input

    47 98.5 98.2 63 54

#### Output

    30/35(5A)

</div>

<div>

### Sample3

#### Input

    38 35.2 28.1 45 48

#### Output

    18/14(1A2B2C)

</div>
