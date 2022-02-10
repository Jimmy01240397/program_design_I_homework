LEVEL5 -judgelight-
-------------------

### Description

<div>

Given an array of `struct ESPer` which contains `level` and `name`,

please sort this array in ascending order by level.

hint: You can use C standard library\'s `qsort` function:

學園都市是個進行超能力開發的機關，會定期對學生進行能力檢測

他們使用的資料結構包含兩個欄位：`level` 和 `name`

請你寫一個 function 來對包含這個 struct 的陣列做排序

hint: 你可以使用內建的 `qsort`

<https://youtu.be/EGmLt7mYSo4>

</div>

### Input

An array of \"struct ESPer\", array length

### Output

sort the array in ascending order by level.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>

    struct ESPer {
        char name[64];
        int level;
    };

    int cmp(const void *a, const void *b);
    void sort_level(struct ESPer *arr, int length);

    int main()
    {
        int n;
        struct ESPer tokiwadai[100];

        scanf("%d", &n);
        for(int i = 0; i <‍ n; ++i) {
            scanf("%d %s", &(tokiwadai[i].level), tokiwadai[i].name);
        }

        sort_level(tokiwadai, n);

        for(int i = 0;i <‍ n;++i) {
            printf("%d %s\n", tokiwadai[i].level, tokiwadai[i].name);
        }

        return 0;
    }

<div>

### Sample1

#### Input

    5
    6 NanjoYoshino
    5 MisakaMikoto
    0 SatenRuiko
    1 UiharuKazari
    4 ShiraiKuroko

#### Output

    0 SatenRuiko
    1 UiharuKazari
    4 ShiraiKuroko
    5 MisakaMikoto
    6 NanjoYoshino

</div>
