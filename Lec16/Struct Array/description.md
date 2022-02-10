Struct Array
------------

### Description

<div>

Given a struct array (named Node) and every Node has variable `a` (int
type).

Node array has 5 Node elements, please multiply every Node\'s `a`
variable.

</div>

### Input

struct Node array (contain five nodes), long long int ans and each
variable a \< 30.

### Output

Multiply every Node\'s a variable

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define SIZE 5

    struct Node {
        int a;
    };

    void mul(struct Node *, long long int *);

    int main(void) {
        struct Node node_array[SIZE];
        for(int i=0; i<‍SIZE; i++){
            scanf("%d", &node_array[i].a);
        } 
        long long int ans = 1;
        mul(node_array, &ans);
        printf("%lld", ans);
        return 0;
    }

<div>

### Sample1

#### Input

    25 21 17 8 15 

#### Output

    1071000

</div>

<div>

### Sample2

#### Input

    11 2 28 24 3 

#### Output

    44352

</div>
