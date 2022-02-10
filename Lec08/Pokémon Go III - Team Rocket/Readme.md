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
