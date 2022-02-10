Caterpillars Line Up
--------------------

### Description

<div>

A caterpillar has a head \'A\', a tail \'Z\' and a body with `n` lower
case letters. (`n`\>=0)

Now several caterpillars stand in line but some caterpillars\' direction
isn\'t correct. Please help them to line up again!

</div>

### Input

A string.

### Output

A string.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍stdbool.h>

    void lineup_again(char line[]);
    void swap(char *a, char *b);
    void reverse_caterpillar(char *l, char *r);

    int main() {
        char line[1000000];
        scanf("%s", line);
        lineup_again(line);
        printf("%s", line);
    }

<div>

### Sample1

#### Input

    AhuZZrvlAArZ

#### Output

    AhuZAlvrZArZ

</div>

<div>

### Sample2

#### Input

    ZgogcngqrAZAZxuuAZigkxA

#### Output

    ArqgncgogZAZAuuxZAxkgiZ

</div>
