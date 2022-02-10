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
