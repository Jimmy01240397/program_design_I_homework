Cropped Report Card
-------------------

### Description

<div>

考試考完，又到了面對現實的時刻。大雄很緊張，因為他知道肯定會有科目不及格，但是不能給媽媽看到不及格的成績，所以裁切成績單的時刻到了！

裁切成績單的規則是：

1.  裁切後的成績單內只有及格 (大於等於六十分) 的成績

2.  成績數量越多越好，這樣媽媽才不會懷疑成績單是不是被動了手腳

3.  如果數量相等，取成績合最大的區段

舉例來說，現在大雄的成績是 `40 50 60 70 80 50 90`，\
那我們想要找到的成績區段就是 `60 70 80`

請你幫助大雄度過難關！

------------------------------------------------------------------------

After the exam, it's time to face the reality.\
Nobita is nervious because he knows that he must have failed some
subjects. He will be in trouble if his mom knows that. It is time to
crop the report card!

The rules of croping reocrd card are listed below:

1.  The cropped report card should only contain the score higher or
    equal to 60 points.

2.  There should be as many score records as possibile.

3.  If the number of score records is the same, choose the section with
    the highest sum of scores.

For example, Nobita's scores are`40 50 60 70 80 50 90`,\
the result should be `60 70 80`.

Please help Nobita overcome this difficulty.

</div>

### Input

A line contain n integers. The 1st number to (n - 1)th number indicate
the score. The nth number is -1 0 \<= score \<= 100 1 \<= n \<= 1000

### Output

The scores on the report card. Each number must follow by a space.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    int *report_card (int *s) ;

    int main () {
        int score[1001];
        int *show;
        int count = 0;

        do {
            scanf("%d", &score[count++]);
        } while (score[count - 1] != -1);

        show = report_card(score);

        count = 0;
        while (*(show + count) != -1) {
            printf("%d ", *(show + count));
            count++;
        }
    }

<div>

### Sample1

#### Input

    50 60 70 80 90 40 80 -1

#### Output

    60 70 80 90 

</div>

<div>

### Sample2

#### Input

    40 60 70 50 80 90 -1

#### Output

    80 90 

</div>
