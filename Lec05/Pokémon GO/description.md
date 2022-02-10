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
