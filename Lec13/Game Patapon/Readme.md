Game Patapon
------------

### Description

<div>

Patapon 是一款音樂節奏遊戲，你必須跟著節奏輸入指定的動作，才能打倒怪物！

在本題中有三種合法節奏（也就是接下來所謂的「指令」）：

PATA PATA PATA PON：可以前進一步。

PON PON PATA PON：可以原地攻擊怪物，扣除怪獸一滴血。

CHAKA CHAKA PATA PON：可以後退一步並防禦怪物攻擊。

以下有幾個注意事項：

當距離怪物超過 3 時，無論如何攻擊都攻擊不到怪物；但若跟怪物距離為 0
時，會直接被怪物踩爛死掉。

遊戲時可能會打錯遊戲指令，在這題也是，當出現不合法動作（例如：CHAKA
CHAKA PON PON），會直接被忽略。

每當做十個動作「後」（無論是否為合法動作），怪物會進行一次攻擊，如果攻擊前的該動作並非防禦（也就是
CHAKA CHAKA PATA PON），會直接被怪物打敗然後死掉。

但若在怪物攻擊前將怪物血量打至零，算成功打敗怪物。

每次最多進行三十次動作，請將每次遊戲進行的結果印出！（參考下方 I/O
說明）

------------------------------------------------------------------------

Patapon is a music game, you have to follow the rhythm and enter the
commands to beat out the monster!

There are three kinds of valid rhythm (or we say 「command」 below):

PATA PATA PATA PON: move one step forward

PON PON PATA PON：no move and attack on the monster (one blood)

CHAKA CHAKA PATA PON：move one step backward and defend the monster\'s
attack

Notices:

When the distance between you and the monster is bigger than 3, you can
never attack on the monster.

But if the distance is 0, the monster will trample on you, and you will
die.

Sometimes there are some wrong commands, for example, CHAKA CHAKA PON
PON, those commands will be ignored with no effect.

After entering ten commands (no matter the command is valid or not), the
monster will attack on you.

If the command before the monster\'s attack is not the defence (i.e.
CHAKA CHAKA PATA PON), you will be attacked and die.

But, if the monster\'s blood is 0 before the monster attacks on you,
then it means you beat out the monster.

There are at most 30 commands in one round, please print out the result
of the game! (See I/O description)

![未命名.png](/Lec13/Game Patapon/images/39bb8c69a871341bdf5da3b52e19534040db90b4.png)

</div>

### Input

一開始給兩個數字，分別為「與怪獸的距離」和「怪獸的血量」。
接著給予一字串，分別是每個動作指令，並以 . 或 , 隔開，最後會有一換行。
There are two numbers, the first one is 「the distance to the monster」,
and the second one is 「the monster\'s bloods」 Then, given a string
that contains commands separated by \'.\' or \',\'. Followed by a
newline.

### Output

若成功打敗怪物，印出 \"YES\"
以及一空格，最後印出遊戲中打敗怪物前「合法指令」的數量。
反之，若失敗（包含玩家死掉或指令輸完但怪物沒死），印出 \"NO\"
以及一空格，最後印出遊戲中怪物剩餘的血量。 If you beat out the monster
successfully, print out \"YES\" and one space, then print out the count
of 「the valid commands」 before beating out the monster. On the
contrary, if failed (e.g. you died or the commands end before beating
out the monster), print out \"NO\" and one space, then print out the
remaining bloods of the monster.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5 4
    PATA PATA PATA PON,PON PON PATA PON.PON PON PATA PON,PATA PATA PATA PON.PATA PATA PATA PON,CHAKA CHAKA PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,CHAKA CHAKA PATA PON.PON PON PATA PON,PATA PATA PATA PON,CHAKA PATA PATA PON,PON PATA PATA PON,PON PON PATA PON

#### Output

    YES 13

</div>

<div>

### Sample2

#### Input

    5 4
    PATA PATA PATA PON.PON PON PATA PON.PON PON PATA PON.PATA PATA PATA PON.PATA PATA PATA PON.CHAKA CHAKA PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON.PATA PATA PATA PON.PON PON PATA PON

#### Output

    YES 10

</div>

<div>

### Sample3

#### Input

    5 4
    PATA PATA PATA PON,PON PON PATA PON,PON PON PATA PON,PATA PATA PATA PON,PATA PATA PATA PON,CHAKA CHAKA PATA PON,PATA PATA PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PATA PATA PATA PON,PON PON PATA PON

#### Output

    NO 1

</div>

<div>

### Sample4

#### Input

    5 4
    PATA PATA PATA PON,PATA PATA PATA PON,PATA PATA PATA PON.PATA PATA PATA PON,PATA PATA PATA PON.PATA PATA PATA PON,PATA PATA PATA PON.PATA PATA PATA PON

#### Output

    NO 4

</div>

<div>

### Sample5

#### Input

    5 4
    PATA PATA PATA PON.PATA PATA PATA PON.PON PON PATA PON.CHAKA CHAKA PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,CHAKA CHAKA PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,CHAKA CHAKA PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON.CHAKA CHAKA PATA PON

#### Output

    NO 3

</div>
