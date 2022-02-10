Polynomial Function
-------------------

### Description

<div>

Ariel learns pointer today. She wants to implement a polynomial function
named \'poly\'.

The polynomial function is\

> *𝐱³ + y² + z*

\
The \'poly\' function has three parameters `A`, `B`, `C` and all of them
are pointer to integer. `x`, `y`, `z` are integer variables which
pointed by `A`,`B`,`C`. **Notice** that they\'re maybe `NULL`. If the
pointer is `NULL`, then set integer variable zero.**(referring to Sample
2)**

Finally, return a pointer from \'poly\' function.\
Please implement \'poly\' function!

</div>

### Input

The \'poly\' function has three parameters A, B, C. All of them are
pointer to integer.(They\'re maybe NULL.)

### Output

Return a pointer from \'poly\' function.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>

    int *poly(int*, int*, int*);

    int main() {
        int a, b, c;
        int *A, *B, *C;
        scanf("%d %d %d", &a, &b, &c);
        A = &a;
        B = &b;
        C = &c;
        if (a <‍ 0) A = NULL;
        if (b <‍ 0) B = NULL;
        if (c <‍ 0) C = NULL;

        int *result = poly(A, B, C);
        printf("%d", *result);
        return 0;
    }

<div>

### Sample1

#### Input

    1 2 3

#### Output

    8

</div>

<div>

### Sample2

#### Input

    -1 10 5

#### Output

    105

</div>
