Swap Again
----------

### Description

<div>

There are two arrays `A` and `B`. Both of them have the same length `n`.
We want to make`A[i]` not less than that of `B[i]` (0 \<=`i`\<= `n`- 1)
by swapping them. Please implement the `swap` function.

</div>

### Input

The first line contains the length of the array. The second and third
lines are the elements of array A and B.

### Output

The swapped arrays separated by newline character.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define MAX_LEN 20000

    void swap(int *, int *);

    int main() {
      int n, A[MAX_LEN], B[MAX_LEN];

      // read input
      scanf("%d", &n);
      for (int i = 0; i <‍ n; ++i)
        scanf("%d", &A[i]);
      for (int i = 0; i <‍ n; ++i)
        scanf("%d", &B[i]);

      // swapping
      for (int i = 0; i <‍ n; ++i)
        swap(&A[i], &B[i]);

      // output
      for (int i = 0; i <‍ n; ++i)
        printf("%d ", A[i]);
      putchar('\n');
      for (int i = 0; i <‍ n; ++i)
        printf("%d ", B[i]);

      return 0;
    }

<div>

### Sample1

#### Input

    5
    1 8 7 8 5 
    5 2 5 8 10 

#### Output

    5 8 7 8 10 
    1 2 5 8 5 

</div>

<div>

### Sample2

#### Input

    10
    36 74 47 79 6 44 42 5 98 69 
    10 97 90 53 39 83 68 22 14 52 

#### Output

    36 97 90 79 39 83 68 22 98 69 
    10 74 47 53 6 44 42 5 14 52 

</div>
