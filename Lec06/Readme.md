Lec06
=====
Collatz conjecture (3n + 1 Problem)
-----------------------------------

### Description

<div>

**Collatz conjecture**, also known as **3n+1 problem**, which is a
conjecture in mathematics that is about a sequence defined as follows:
Let `S1` be a positive integer which is the start of the sequence, and

-   if `Sn` is **even**, then `Sn+1 = Sn / 2`

-   if `Sn` is **odd**, then `Sn+1 = 3 * Sn + 1`

The conjecture is that for any given positive integer `S1` (\<= 10\^5),
the sequence will reach 1.

e.g. Given `S1 = 22`, the sequence will be:
`22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1`

As students of NCKU, we are interested in this conjecture, please write
a program to help us do some research in this conjecture.

</div>

### Input

A positive integer S1, (1 \<= S1 \<= 10\^5)

### Output

Two integer L, M within a line, where L represents the length of the
sequence and M is the maximum number of the sequence.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    22

#### Output

    16 52

</div>

<div>

### Sample2

#### Input

    999

#### Output

    50 11392

</div>
Congruent OOXX Triangle
-----------------------

### Description

<div>

Given a number `h`, print a **congruent triangle** with height `h` that
consists of OOXX (the last line must be only consist of O).

For example, `h=5`:

![](/Lec06/Congruent%20OOXX%20Triangle/images/cf12418fabac0fb5c39f245055bdd797807e4ef9.png)

</div>

### Input

An integer h. (1 \<= h \<= 150)

### Output

A congruent triangle consisted of OX, and the bottom of the triangle
must only contains O.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    1

#### Output

    O

</div>

<div>

### Sample2

#### Input

    5

#### Output

        O
       OXO
      OXOXO
     OXOXOXO
    OOOOOOOOO

</div>
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
The happiest girl in the world
------------------------------

### Description

<div>

On the way back to the Skyland in an airship, crews face a huge attack
from monsters. Willem falls out of the airship after several waves of
attack, Chtholly notices that and wants to save him, please help her
calculate how many meters remained before Willem reaches the ground. You
may use the following equation to calculate the distance Willem has
traveled through: ![Screenshot from 2021-10-13
13-54-46.png](/Lec06/The%20happiest%20girl%20in%20the%20world/images/9ced94541a2271c27c5770ab93f4145b180105e5.png)

![](https://i.imgur.com/203N6L5.gif)

</div>

### Input

An integer h that indicates the height of the airship, 1000 \<= h \<=
10000

### Output

The remained distance, in floating-point number, for each second until
Willem reaches the ground, each occupies a line and is rounded to the
first digit after the decimal point.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    1000

#### Output

    1000.0
    995.1
    980.4
    955.9
    921.6
    877.5
    823.6
    759.9
    686.4
    603.1
    510.0
    407.1
    294.4
    171.9
    39.6

</div>
