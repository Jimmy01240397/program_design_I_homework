Kira Kira Random Star
---------------------

### Description

<div>

Here comes the POINTER, some stars start to appear in your program.

Let\'s start from the easiest one !

Please implement this function:

`void star(int* a, int b, int* sum)`

一閃一閃亮晶晶 滿天都是小星星

教到指標後大家的程式編輯器裡也開始充滿了星星~~（相信某些人的頭上也開始冒出星星了）~~

就讓我們從最簡單的部份開始認識這令人心跳不已的功能吧！

請實作以下函式：

`void star(int* a, int b, int* sum)`

<https://youtu.be/Y7JoFiRQ0RA>

</div>

### Input

Input a is a pointer to an int, b is an int

### Output

Sum of the value a points to and b, stored in the memory space sum
points to

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>

    void star(int*, int, int*);

    int main()
    {
        int kirakira, dokidoki, kasumi;
        scanf("%d%d", &kirakira, &dokidoki);

        // kasumi = kirakira + dokidoki
        star(&kirakira, dokidoki, &kasumi);

        printf("%d", kasumi);

        return 0;
    }

<div>

### Sample1

#### Input

    242 104

#### Output

    346

</div>

<div>

### Sample2

#### Input

    693 488

#### Output

    1181

</div>
