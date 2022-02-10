Rising Hope
-----------

### Description

<div>

Divination is a traditional way to predict future. Now given a string
`R` as the result of a magician doing some divination, please calculate
the \"Hope point\" from this string.

Hope points starts from `0`, you should scan result string from start to
end, if the character is `P`(Positive), means the hope is rising by 1

if the character is `N`(negative), means the hope point is decreased by
1.

0 \<= length of `R` \<= 1000

`R` may contain every upper case letters.

占卜是一種傳統的預測未來手段，
不論是把龜殼拿去火烤，觀察茶葉渣，請水晶球幫你看透真相（有時候是看透程式碼的bug）或是一群人聚在一起跳奇怪的舞蹈都是占卜手段。今天你得到一個字串
`R`， 代表占卜的結果，請你以這個字串計算『希望值』(Hope point)

希望值一開始為 0，若占卜結果中包含`P`(Positive)就會上升1,
包含`N`(negative)則會下降1

0 \<=`R` 的長度 \<= 1000

`R` 可能包含所有大寫字母

<https://youtu.be/IzhMzY5avLI>

</div>

### Input

A string as function input

### Output

An integer

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #include <‍string.h>

    int rising_hope(char *R);

    int main(int argc, char *argv[])
    {
        char in[1005];

        scanf("%s", in);
        int hope = rising_hope(in);
        printf("%d\n", hope);

        return 0;
    }

<div>

### Sample1

#### Input

    A

#### Output

    0

</div>

<div>

### Sample2

#### Input

    PPAP

#### Output

    3

</div>

<div>

### Sample3

#### Input

    PPNPPNP

#### Output

    3

</div>

<div>

### Sample4

#### Input

    LISA

#### Output

    0

</div>
