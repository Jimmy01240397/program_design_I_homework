Pokémon Go II - Pokémon Gym
---------------------------

### Description

<div>

Ariel likes to play Pokémon Go! She had many battles in pokémon gym. She
needs a tool to record the battle\'s result.\
She had `n` battles. Each battle is three-on-three and each pokémon has
**combat power(CP)**. If the combat power of Ariel\'s pokémon is more
than competitor\'s, then Ariel\'s pokémon wins. If Ariel has more wins
than competitor, she wins the battle. Please record each battle is
\"**Win**\", \"**Tie**\", or \"**Lose**\" and calculate the **win
rates**.\
\
For example,

Ariel had a battle. Her three pokémons\' combat power are 200, 300 and
400, and the competitor\'s three pokémons\' combat power are 100,350 and
400. Then,

**200\>100** Win

**300\<350** Lose

**400=400** Tie

Because Ariel and competitor had the same number of wins, this battle is
\"**Tie**\". Ariel had one battle and the number of wins is 0, then the
win rates is **0/1 = 0.00%**

------------------------------------------------------------------------

Ariel 最喜歡玩 Pokémon Go!
她參加了很多場道館賽，所以她需要有個小幫手幫忙記錄!\
她參加了 `n` 場道館對戰，每一場中，對方派出 3 隻寶可夢，Ariel 也同樣派出
3 隻寶可夢應戰，每隻寶可夢都有 **CP 值**，CP 值較高的寶可夢獲勝，CP
值相同的寶可夢對戰則為平手，獲勝的寶可夢數量最多的那一方獲勝，若雙方獲勝的寶可夢數量相同時，則這一場為平手，請幫忙紀錄每一場比賽
Ariel 是 **獲勝**、**平手**或是**輸**，並算出**勝場率**。

舉例:

Ariel 參加了一場道館賽，派出了三隻寶可夢，其CP值分別為
200、300、400，而對方派出的寶可夢其 CP 值為 100、350、400\
所以\
\
**200\>100** Win

**300\<350** Lose

**400=400** Tie\
\
雙方各有一隻寶可夢獲勝，所以這場比賽比賽為平手(**Tie**)，而Ariel總共參加了一場比賽，勝場數為
0 ，所以**勝場率**為 **0/1 = 0.00%**

</div>

### Input

First line, an integer n represents the number of battles. Then, there
are 3\*n lines after the first line. (1\<=n\<=50) Each line has two
integer a, b represent combat power(CP) of Ariel\'s and competitor\'s
pokémon, respectively.(0\<=a,b\<=1000)

### Output

You have output n battle\'s results and the win rates. If Ariel wins the
battle, output \"Win\". If Ariel loses the battle, output \"Lose\". if
the battle is tie, output \"Tie\". The win rates is a floating-point
number with two digits after the decimal point.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    3
    1000 200
    500 100
    400 399
    100 200
    222 122
    200 200
    133 500
    122 444
    700 900

#### Output

    Win
    Tie
    Lose
    33.33%

</div>

<div>

### Sample2

#### Input

    1
    200 500
    100 222
    500 900

#### Output

    Lose
    0.00%

</div>
