Big Big Numbers Addition
------------------------

### Description

<div>

You might know that computer can only represent a limited range of
numbers. For a 32-bit machine, it can only deal with signed integers
within \[-2147483648, 2147483647\]. But is there no any other way for
computers to deal with a number out of this range, for real?

Recall your memory in elementary school, how do you perform an addition?
Everyone might know this way:

      1234
    +  456
    -------
      1690

You take digits at same position, add them together. If the result is
bigger than 9, carry 1 into next round. Repeat these step until last
digit is processed.

If we use string to represent an integer, and use the addition process
above to calculate, digits by digits, then there will be no range
problem.

Now, given two VERY LARGE positive integers, can you add them together?

大家應該都知道，電腦能夠表示的數值範圍是非常有限的。一台 32
位元的電腦，最多只能表達在 \[-2147483648 - 2147483647\]
這個範圍內的有號整數而已。但難道真的沒有任何辦法能讓電腦進行超過這個範圍的整數運算嗎？

回想看看你在小學學算術時，你是怎麼進行加法的？我猜大家都學過直式加法，像是：

      1234
    +  456
    -------
      1690

這樣，把在同一個位數的位元相加，如果結果大於 9，就進 1
到下一位數去。重複這個步驟直到最左邊的數字計算完畢。

如果我們能用字串的方式來表示整數，然後用這個方法將他們一位一位相加，那就不會有超出範圍無法計算的問題了。

現在，給定你兩個**超大**的正整數，你能把他們加起來嗎？

</div>

### Input

The arguments passed to your function will be two strings a and b,
representing the VERY LARGE integers. The maximum length of these
strings do not exceed 100.

### Output

You have to put the result of a + b into argument res. We guarantee that
there will be enough space to hold the result of addition.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍string.h>

    void add(char a[], char b[], char res[]);

    int main(){
        char a[100], b[100], res[105];
        scanf("%s %s", a, b);
        add(a, b, res);
        printf("%s", res);
        return 0;
    }

<div>

### Sample1

#### Input

    12345 6789

#### Output

    19134

</div>

<div>

### Sample2

#### Input

    12345678900000000 87654321

#### Output

    12345678987654321

</div>
