Sort Snacks
-----------

### Description

<div>

In lab, students buy snacks once a month. They want to choose snacks
with good value for money. (物超所值)

The `value` means `weight/price`.

Please help them sort snacks in descending order based on snacks\'
`value`.\
If the `value` of snacks are equal, sort snacks in ascending order based
on snacks\' `price`.\
If the `price` of snacks are equal, sort snacks in ascending order based
on snacks\' `id`.

You can use C standard library\'s `qsort` function to sort snacks:

`void qsort (void* base, size_t num, size_t size, int (*compar)(const void*,const void*));`

The reference link:
<https://www.cplusplus.com/reference/cstdlib/qsort/?kw=qsort>

</div>

### Input

n kinds of snacks.

### Output

Output the id and value of n sorted snacks.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍stdlib.h>

    struct snack
    {
        int id;
        int price;
        int weight;
        double value;
    };

    int cmp(const void *a, const void *b);
    void sort_snacks(struct snack snacks[], int n);

    int main() {
        int n;
        struct snack snacks[100];
        scanf("%d", &n);
        for(int i=0; i<‍n; i++) {
            snacks[i].id = i+1;
            scanf("%d %d", &snacks[i].price, &snacks[i].weight);
        }
        sort_snacks(snacks, n);
        for(int i=0; i<‍n; i++) {
            printf("%d %.2f\n", snacks[i].id, snacks[i].value);
        }
        return 0;
    }

<div>

### Sample1

#### Input

    5
    1 2
    4 6
    4 10
    2 3
    12 18

#### Output

    3 2.50
    1 2.00
    4 1.50
    2 1.50
    5 1.50

</div>

<div>

### Sample2

#### Input

    7
    8 2
    44 10
    7 2
    22 5
    6 9
    10 4
    4 1

#### Output

    5 1.50
    6 0.40
    3 0.29
    7 0.25
    1 0.25
    4 0.23
    2 0.23

</div>
