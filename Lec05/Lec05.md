Lec05
=====

Arabic to Roman
---------------

### Description

<div>

Roman numerals are a numeral system that originated in ancient Rome and
are represented by seven different symbols:

> Symbol: I, V, X, L, C, D, M
>
> Value; 1, 5, 10, 50, 100, 500, 1000

For example, 6 is written as VI in Roman numerals, just 5 and 1 added
together.

However, the numerals for 4 (IV) and 9 (IX) are written using
\"*subtractive notation*\", where the first symbol (I) is subtracted
from the larger one (V, or X), thus avoiding the clumsier (IIII, and
VIIII). Subtractive notation is also used for 40 (XL) and 90 (XC), as
well as 400 (CD) and 900 (CM). These are the only subtractive forms in
standard use.

Given an integer, convert it to a Roman numeral.

</div>

### Input

An integer which is guaranteed to be within the range from 1 to 3999.

### Output

A Roman numeral representing the input integer.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    1764

#### Output

    MDCCLXIV

</div>

<div>

### Sample2

#### Input

    2439

#### Output

    MMCDXXXIX

</div>

Pokémon GO
----------

### Description

<div>

Ariel likes to play Pokémon GO! Everyday, she will earn `n` poké balls
and want to catch one pokémon. According to the Pokémon's combat ability
`cp`, health points `hp`, and speed `s` when the pokémon runs away,
Ariel needs to use some poké balls to catch the pokémon. Please tell her
whether she can catch the pokémon successfully. If yes, how many poké
balls will remain?

1.  If the pokémon\'s combat ability is less than 100, Ariel only needs
    to use one poké ball.

2.  If the pokémon\'s combat ability is between 100 and 600 (including
    100 and 600), she needs to use 5 poké balls. Furthermore, she has to
    use another 3 poké balls if the pokémon\'s health points are more
    than 100.

3.  If the pokémon\'s combat ability is more than 600, she needs to use
    15 poké balls. Furthermore, she has to use another 10 poké balls if
    the pokémon\'s health points are more than 200.

4.  If the pokémon\'s speed is more than 4, the pokémon runs away after
    Ariel has used 6 poké balls. It means that she can\'t catch the
    pokémon anymore!

------------------------------------------------------------------------

\
Ariel 喜歡上玩 Pokémon GO ! 每天都會得到 `n`
個寶貝球，也都會捕捉一隻寶可夢，捕捉寶可夢所需要的寶貝球數目會根據寶可夢的戰鬥能力
`cp`、血量 `hp` 以及逃跑速度 `s` 而有所不同。

1.  如果戰鬥能力小於 100，Ariel 只需要使用一個寶貝球就可以抓到寶可夢

2.  如果戰鬥能力介於 100 到 600 之間 (包括 100 與 600)，則需消耗 5
    個寶貝球，而且若血量超過 100 ，要額外使用 3 個寶貝球

3.  如果戰鬥能力超過 600，則需要消耗 15 個寶貝球，而且若血量超過
    200，要額外使用 10 個寶貝球

4.  如果逃跑速度大於 4，寶可夢會在 Ariel 使用了 6
    個寶貝球之後逃跑(即第六個寶貝球還是沒有抓到寶可夢)，逃跑的寶可夢是想抓也抓不到了!\

請告訴 Ariel 這隻寶可夢能不能抓的到，如果可以抓的到，那 Ariel
會剩下幾個寶貝球?\

</div>

### Input

An integer n represents the number of Poké Balls.(1\<=n\<=50) Two
integer cp, hp represents the Pokémon\'s combat power and health points,
respectively.(1\<=cp\<=1000, 1\<=hp\<=1000) An integer s represents the
Pokémon\'s speed.(1\<=s\<=10)

### Output

Output \"NO\" if Ariel can\'t catch Pokémon. Otherwise, Output \"YES\"
and remaining Poké Balls.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    11
    344 101
    5

#### Output

    NO

</div>

<div>

### Sample2

#### Input

    40
    600 100
    2

#### Output

    YES
    35

</div>

Split the number
----------------

### Description

<div>

Read an integer `x`, and output its digits split by space.

### Note: 0 \<= `x` \<= 999

</div>

### Input

Single integer

### Output

Three digits split by spaces. If the number of digits is less than
three, pad the output with zeros to make it three digits.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    100

#### Output

    1 0 0

</div>

<div>

### Sample2

#### Input

    5

#### Output

    0 0 5

</div>

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

    ![](/Lec05/國中教育會考成績%20CAP%20grade/images/b108e1d8afa0b47514e61aebe0a502e44d24e00a.png)

-   The subjects Chinese, Social Study and Science are graded by the
    number of correct answers. The subjects Mathematics and English, are
    graded by the weighting system. The translation table is as
    following:

    ![](/Lec05/國中教育會考成績%20CAP%20grade/images/594132e0d016faba82b2f6264c18461f75bcb122.png)

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

    ![](/Lec05/國中教育會考成績%20CAP%20grade/images/b108e1d8afa0b47514e61aebe0a502e44d24e00a.png)

-   國文、社會、自然三科以答對題數進行評分；數學、英文因為分別有手寫、聽力部份，另以加權分數進行評分。108
    學年度的各科量尺分數換算表如下表所示：

    ![](/Lec05/國中教育會考成績%20CAP%20grade/images/594132e0d016faba82b2f6264c18461f75bcb122.png)

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
