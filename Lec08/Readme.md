Lec08
=====

Beer Can Wall
-------------

### Description

<div>

Aqua loves beer. She wants to stack a wall using beer cans. The wall
will be only 20cm tall. Assume that the size of each beer can is 20cm by
10cm, and she can put it horizontally or vertically. Given the width of
the wall `W`(always multiples of 10cm), please help her calculate the
combinations of the placement.

For example:

1.  There is 1 combination for 10cm width wall.

    ![](https://i.imgur.com/pWtvZC0.png)

2.  There are 2 combinations for 20cm width wall.

    ![](https://i.imgur.com/o3IlXbh.png)

3.  There are 3 combinations for 30cm width wall.

    ![](https://i.imgur.com/nAiKsBZ.png)

</div>

### Input

An integer W, where 0 \<= W \<= 500 and w % 10 == 0.

### Output

The number of combinations.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    20

#### Output

    2

</div>

<div>

### Sample2

#### Input

    30

#### Output

    3

</div>

<div>

### Sample3

#### Input

    40

#### Output

    5

</div>

Pokémon Go III - Team Rocket
----------------------------

### Description

<div>

火箭隊想要搶走小智的皮卡丘! 他們總共有 26 種搶走皮卡丘的計畫，為 A \~ Z
計畫，他們把計畫放進不同編號的箱子中，但卻忘了做紀錄，現在火箭隊完全不知道計畫被放進那些箱子中，只好翻箱到櫃，他們總共找了
`n` 個箱子，每個箱子都擁有一個編號 `x`, 箱子內會有一個計畫 `y`,
請列出火箭隊找到的計畫被放進哪些箱子中，以及沒有找到的計畫有哪些。\
\
ps. 計畫編號有可能不是 A \~ Z

</div>

### Input

Integer n represents the number of boxes. Then, there are n lines. In
each line, an integer x(1\<=x\<=10\^9) and a character y(could be any
ASCII character) represent the box\'s number and the plan\'s name
respectively.

### Output

From plan A to Z, output the plan is found or not. For example, output
\"Plan A is in box 12.\" if the plan A is found in box 12. Otherwise,
output \"Not found plan B.\" if the plan B is not found.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5
    12 B
    20 D
    50 C
    9 G
    1000 E

#### Output

    Not found plan A.
    Plan B is in box 12.
    Plan C is in box 50.
    Plan D is in box 20.
    Plan E is in box 1000.
    Not found plan F.
    Plan G is in box 9.
    Not found plan H.
    Not found plan I.
    Not found plan J.
    Not found plan K.
    Not found plan L.
    Not found plan M.
    Not found plan N.
    Not found plan O.
    Not found plan P.
    Not found plan Q.
    Not found plan R.
    Not found plan S.
    Not found plan T.
    Not found plan U.
    Not found plan V.
    Not found plan W.
    Not found plan X.
    Not found plan Y.
    Not found plan Z.

</div>

<div>

### Sample2

#### Input

    8
    99 A
    12344 W
    221 p
    5434 q
    8888 ?
    9898 $
    12233 Y
    933 0

#### Output

    Plan A is in box 99.
    Not found plan B.
    Not found plan C.
    Not found plan D.
    Not found plan E.
    Not found plan F.
    Not found plan G.
    Not found plan H.
    Not found plan I.
    Not found plan J.
    Not found plan K.
    Not found plan L.
    Not found plan M.
    Not found plan N.
    Not found plan O.
    Not found plan P.
    Not found plan Q.
    Not found plan R.
    Not found plan S.
    Not found plan T.
    Not found plan U.
    Not found plan V.
    Plan W is in box 12344.
    Not found plan X.
    Plan Y is in box 12233.
    Not found plan Z.

</div>

sister\'s noise
---------------

### Description

<div>

***\"sister\`s noise　捜し続ける\"***

Misaka has many sisters (totally 20000 of them), they take turns going
abroad, others who stay live in 10 houses on the same street.

They always chat with each other, but neighbors often complain about
their noise

You can calculate the noise level made by `M` sisters in house `A` and
`N` sisters in house `B` with this formula:

`Noise(A, B) = (M + N) x |A - B|`

Now you know how many of them in each house, please calculate max noise
level they can made.

御坂有很多妹妹們（總共有2萬個），她們常輪流出國，剩下的則住在同一條街上相鄰的10戶

她們很喜歡互相聊天交換情報，但人多嘴雜常常被鄰居抱怨太吵

住在第`A`戶的`M`個妹妹與第`B`戶的`N`個妹妹們互相聊天製造的噪音音量計算方式如下：

`Noise(A, B) = (M + N) x |A - B|`

現在你知道這10戶分別住了多少人

請你找出這些妹妹們會製造出的最大噪音音量

<https://youtu.be/1Nv-vPBA0fI>

P.S. 鄰居最後使用向量反射裝置反射音波，解決了噪音問題

</div>

### Input

One line contains 10 integers (S1 - S10), separated by spaces 1 \<= S1,
S2, \... , S10 \<= 20000

### Output

One integer (the maximum noise)

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    2035 1092 15 325 2305 2098 54 1593 1827 813

#### Output

    30896

</div>

<div>

### Sample2

#### Input

    1465 546 349 1804 2467 602 1296 1615 2040 1157

#### Output

    28040

</div>

循環房間 - Looping Rooms
------------------------

### Description

<div>

背景／Story
-----------

阿超做了一個夢。在夢裡，有個熟悉的聲音引導它到了許多間房子，每間裡面都有一間大廳和許多房間。\
**每間房間都恰有兩扇門，一扇只能進，一扇只能出，並連接到其他房間**；\
阿超走進其中一間房間之後持續往前，發現只要它走過了數間房間一定會回到最一開始進去的地方，如此形成一個循環後，他便會被傳送回到大廳，可以選擇一間新的房間進去。

起床之後，阿超覺的這個夢很有趣，便憑借他過人的記憶力紀錄下了每間房間的編號以及他們通往的房間。\
請幫它幫阿超撰寫一個程式，找出每棟房子的房間循環架構。

David dreamed a dream. (Yes, his name is David from now on. \"Chao\" is
just waaaay too weird.)\
In the dream, a familiar voice guided him to a series of houses. Every
of them have a main hall and numerous rooms.\
**Every single room has exactly two doors - one can only be used to
enter the room, and one can only be used to leave, leading to another
room.\
**David found that after he entered a room from the hall, once he
continue traveling into the next room, he will definitely go back the
the first entered room, then he\'ll be allowed to go back to the main
hall, available to choose a new room to enter.

After David woke up, he thought that the dream was interesting, so he
exerted his memorizing gift and recorded the rooms and which room they
leads to, for all the houses.\

------------------------------------------------------------------------

輸入輸出說明／Input-Output Description
--------------------------------------

Input 會描述房間的連接狀況。**第一行代表房間數量（ 編號 0 \~ N-1
）**，**接下來 N 行依序代表第 i
個房間的出口連接到哪個房間**。請參考右方的 Sample
1，第一行表示有6個房間，接下來描述 6 個房間的出口：第 0 個房間的出口是第
0 個房間，第 1 個房間的出口是第 3
個房間\...以此類推。本範例中房間的連接情況如下圖所示：\

![input01\_graph.png](/Lec08/%E5%BE%AA%E7%92%B0%E6%88%BF%E9%96%93%20-%20Looping%20Rooms/images/550619018b7d9d4fb669ed8c1a0c3edf0c3b4b10.png)

其中**圓圈代表房間編號**，**箭頭代表出口⟶入口的連接**。\
各個顏色標出了房間形成環的組合，共三個，因此輸出第一行為 \"3 rings\"。

接著根據以下規則印出各個循環：

-   各個循環**之中**以**最小的房間編號為起點**，以`A -> B`的方式連接，直到回到該房間。

    -   也就是說，橘色循環須印出 `2 -> 4 -> 5 -> 2`。

```{=html}
<!-- -->
```
-   各個循環**之間**相比，由**比較小的起始房間編號的優先**印出。

    -   也就是說，本題順序為藍色(0)、綠色(1)、橘色(2)

因此，正確輸出為：

    3 rings
    0 -> 0
    1 -> 3 -> 1
    2 -> 4 -> 5 -> 2

The input describes the room connections. **The first line tells how
many rooms are there (indexed 0 \~ N-1)**, then **the following N lines
tells which room the exiting door leads to for room i**. Take Sample 1
as example, first line states that there are 6 rooms, and following N
lines state the next room for each room, e.g. 0th room leads to 0th
room, 1st room leads to 3rd room. The topology of the rooms in Sample 1
is illustrated as below:

![input01\_graph.png](/Lec08/%E5%BE%AA%E7%92%B0%E6%88%BF%E9%96%93%20-%20Looping%20Rooms/images/550619018b7d9d4fb669ed8c1a0c3edf0c3b4b10.png)\
**The vertices(circles) represents the room and the index, and the
edges(arrows) represents the exit⟶enter connections.**\
As you can see, each color denotes each \"rings\" that were formed, 3 in
total, so the first line of the output should be \"3 ring(s)\".

Then, follow these rules to print out the rings:

-   When printing **each rings**, **Start from the room with the
    smallest index.** The connections should be formatted as\
    `A -> B`and ends at where you started.

    -   That is, the orange ring should be printed as
        `2 -> 4 -> 5 -> 2`.

-   **Among the rings**, those having the **smaller starting-room index
    should be printed first**.

    -   That is, the order of sample 1 should be blue(0), then green(1),
        then orange(2).

Hence, the correct output is:

    3 rings
    0 -> 0
    1 -> 3 -> 1
    2 -> 4 -> 5 -> 2

</div>

### Input

The first line contains a integer N, 1 ≤ N ≤ 500 Following N lines, each
consists an integer K₀ \~ Kₙ₋₁, 0 ≤ K ≤ N-1 s ≠ t ⇒ Kₛ ≠ Kₜ

### Output

The first line should print out how many loops are there, as \"N rings\"
then, print the loops, one in each line, as \"K₀-\> K₁ -\> \... -\> Kₙ
-\> K₀\"

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    6
    0
    3
    4
    1
    5
    2

#### Output

    3 rings
    0 -> 0
    1 -> 3 -> 1
    2 -> 4 -> 5 -> 2

</div>

<div>

### Sample2

#### Input

    15
    13
    3
    4
    14
    5
    10
    8
    6
    1
    7
    2
    11
    9
    0
    12

#### Output

    4 rings
    0 -> 13 -> 0
    1 -> 3 -> 14 -> 12 -> 9 -> 7 -> 6 -> 8 -> 1
    2 -> 4 -> 5 -> 10 -> 2
    11 -> 11

</div>

