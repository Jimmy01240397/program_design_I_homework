Weighted Score
--------------

### Description

<div>

期末快到了，該到結算成績的時候，請你幫助教算出所有學生們的期末成績以及最高分章節成績與最低分章節。\
在這裡有三個 struct:

-   `weight` : 每個章節會有不同的比重，**全部的比重加起來為 100**

-   `score` : 每個章節加權前的分數

-   `report_card` :

    -   `final` : 加權後的分數 (無條件捨去到整數位)

    -   `max_score` : 最高分章節成績

    -   `min_score` : 最低分章節成績

------------------------------------------------------------------------

Please help TAs to calculate student's final score, maximum score and
minimum score.

There are three structs:

-   `weight` : Each chapter contain different weight, **sum of them is
    100**.

-   `score` : The score of each chapter

-   `report_card` :

    -   `final` : Score after weighting

    -   `max_score` : Maximum score

    -   `min_score` : Minimum score

</div>

### Input

First line contain two numbers: chapter\_num (n), student\_num (m) 1 \<=
chapter\_num (n) \<= 10 1 \<= student\_num (m) \<= 100 Each of following
n lines contain one number and a string. The number means the weight of
chapter. The string means the name of chapter. Followings are the
student information. First line is student name. Next n lines are
student score and chapter. 0 \<= student score \<= 100

### Output

Student name, final score, maximum score and minimum score

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>

    struct weight {
        char chapter[10];
        int percent;
    };

    struct score {
        char chapter[10];
        int score;
    };

    struct report_card {
        char name[32];
        struct score record[10];
        int final;
        int max_score;
        int min_score;
    };

    void calculate (struct report_card[], struct weight[], int student_num, int chapter_num);

    int main () {
        int student_num, chapter_num;
        struct weight chapter[10];
        struct report_card card[100];

        scanf("%d %d\n", &chapter_num, &student_num);
        for (int i = 0; i <‍ chapter_num; ++i) {
            scanf("%d %s", &chapter[i].percent, chapter[i].chapter);
        }

        for (int i = 0; i <‍ student_num; ++i) {
            scanf("%s", card[i].name);
            for (int j = 0; j <‍ chapter_num; ++j) {
                scanf("%d %s", &card[i].record[j].score, card[i].record[j].chapter);
            }
        }

        calculate(card, chapter, student_num, chapter_num);

        for (int i = 0; i <‍ student_num; ++i) {
            printf("%s %d %d %d\n", card[i].name, card[i].final, card[i].max_score, card[i].min_score);
        }
    }

<div>

### Sample1

#### Input

    3 3
    30 array
    30 loop
    40 pointer
    amy
    80 array
    70 loop
    100 pointer
    sam
    80 pointer
    80 array
    80 loop
    alice
    60 loop
    50 pointer
    60 array

#### Output

    amy 85 100 70
    sam 80 80 80
    alice 56 60 50

</div>

<div>

### Sample2

#### Input

    2 4
    10 union
    90 struct
    lili
    80 union
    80 struct
    christopher
    80 union
    80 struct
    pata
    0 struct
    100 union
    pon
    100 struct
    0 union

#### Output

    lili 80 80 80
    christopher 80 80 80
    pata 10 100 0
    pon 90 100 0

</div>
