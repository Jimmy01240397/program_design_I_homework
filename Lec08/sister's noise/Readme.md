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
