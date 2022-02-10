Score Calculation
-----------------

### Description

<div>

小宇是位聰明絕頂的國中生，某日在自學指標後，他決定來炫技算一下自己期中考的成績。

給予國文、英文、數學、自然、社會五科的分數。

計算這五科的總分以及平均。

值得注意的是，小宇為了炫技，因此有時使用指標有時不用，因此請仔細看看
main 函式內的內容為何。

------------------------------------------------------------------------

Yu, a smart student, learned pointer on his own.

He decided to use pointer to calculate his midterm\'s scores.

Given five subjects\' scores (Chinese, English, Math, Science, and
Social Studies), please calculate the total score and the average score.

Notice that he may or may not use pointer in the code, please see the
main function carefully.

</div>

### Input

給予五科（國英數自社）的分數。 Given five subjects\' scores (Chinese,
English, Math, Science, and Social Studies).

### Output

五科的總分以及平均。 The total score and the average score.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>

    double calculate_score(int, int, int *, int, int, int *);

    int main(void) {
        int chinese, english, math, science, social_studies;
        scanf("%d %d %d %d %d", &chinese, &english, &math, &science, &social_studies);
        int total = 0;
        double average = calculate_score(chinese, english, &math, science, social_studies, &total);
        printf("%d %.1lf", total, average);
        return 0;
    }

<div>

### Sample1

#### Input

    87 78 22 66 69

#### Output

    322 64.4

</div>

<div>

### Sample2

#### Input

    99 99 99 99 99

#### Output

    495 99.0

</div>
