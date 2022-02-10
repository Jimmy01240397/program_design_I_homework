Returns
-------

### Description

<div>

Sometimes you want to return more than 1 values, you can use pointers to
do this.

Please allocate an array of int with length `n` using `malloc`, and fill
it with `index^2`

使用指標可以傳遞多個數值到 function
外，請使用`malloc`分配長度為`n`的整數陣列，並在其中每一格填入`index^2`

[https://youtu.be/KGR5WZV8gT](https://youtu.be/KGR5WZV8gT4)

</div>

### Input

int n

### Output

A pointer to an array of int

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>

    int *Returns(int n); 

    int main(int argc, char *argv[])
    {
        int in, *out;
        scanf("%d", &in);
        out = Returns(in);
        for(int i = 0; i <‍ in; ++i) {
            printf("out[%d] = %d\n", i, out[i]);
        }   
        free(out);
        return 0;
    }

<div>

### Sample1

#### Input

    4

#### Output

    out[0] = 0
    out[1] = 1
    out[2] = 4
    out[3] = 9

</div>
