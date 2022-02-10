Notice Struct Pointer
---------------------

### Description

<div>

Given two struct Nodes, please multiply their `num`.

Be careful these two Node\'s type, one is a struct variable and another
is a struct pointer.

</div>

### Input

Two struct Nodes, long long int ans and every variable num \< 10000

### Output

Multiply these two node\'s num

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>

    struct Node {
        int num;
    };
    void mul(struct Node *, struct Node, long long int *);

    int main(void) {
        struct Node node_a, node_b;
        long long int ans = 1;
        scanf("%d", &node_a.num);
        scanf("%d", &node_b.num);
        mul(&node_a, node_b, &ans);
        printf("%lld", ans);
        return 0;
    }

<div>

### Sample1

#### Input

    8687 363 

#### Output

    3153381

</div>

<div>

### Sample2

#### Input

    3741 3313 

#### Output

    12393933

</div>
