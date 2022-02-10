Number Sum Calculator
---------------------

### Description

<div>

Please calculate the sum of the numbers.

**Hint: Use** `strtok()` **and** `atoi()`

</div>

### Input

A string whose length isn\'t greater than 100. Every number is separated
by \'+\'.

### Output

The sum of the numbers.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍string.h>
    #include<‍stdlib.h>

    #define N 100

    int addition(char str[]);

    int main() {
        char str[N];
        scanf("%s", str);
        int sum = addition(str);
        printf("%d", sum);
        return 0;
    }

<div>

### Sample1

#### Input

    1+2+3+4+5

#### Output

    15

</div>

<div>

### Sample2

#### Input

    1+22+333

#### Output

    356

</div>
