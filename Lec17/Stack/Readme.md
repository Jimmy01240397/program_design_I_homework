Stack
-----

### Description

<div>

Stack is an abstract data type that serves as a collection of elements,
with two main principal operations:

1.  Push: which adds an element to the top of the stack

2.  Pop: which removes an element from the top of the stack if the stack
    is not empty

![Image](https://www.tutorialspoint.com/data_structures_algorithms/images/stack_representation.jpg)

Please implement push and pop operations of the stack using linked list.

Reference:
<https://www.tutorialspoint.com/data_structures_algorithms/stack_algorithm.htm>

</div>

### Input

The input contains two parts. The first part is the number of the
operations. The second part contains the content of the operations,
which is push or pop an integer to/from the stack.

### Output

The output contains two lines. The first line is the size of the stack,
and the second line consists of elements\' data and each data is
followed by a space. You should output them in reverse chronological
order.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍string.h>
    #include <‍stdlib.h>

    struct element {
        int data;
        struct element *next;
    };

    void print_stack(struct element *top);
    void push(struct element **top_p, int data);
    struct element *pop(struct element **top_p);

    int main(void) {
        struct element *top = NULL;
        int num, data;
        char command[5];
        scanf("%d", &num);
        while (num--) {
            scanf("%4s", command);
            if (strcmp(command, "push") == 0) {
                scanf("%d", &data);
                push(&top, data);
            }
            else if (strcmp(command, "pop") == 0) {
                struct element *e = pop(&top);
                free(e);
            }
        }
        print_stack(top);
        while (top) {
            struct element *ptr = top;
            top = top->next;
            free(ptr);
        }
        return 0;
    }

    void print_stack(struct element *top) {
        int size = 0;
        for (struct element *ptr = top; ptr != NULL; ptr = ptr->next) {
            size++;
        }
        printf("%d\n", size);
        for (struct element *ptr = top; ptr != NULL; ptr = ptr->next) {
            printf("%d ", ptr->data);
        }
    }

<div>

### Sample1

#### Input

    5
    push 1
    push 2
    push 3
    pop
    pop

#### Output

    1
    1 

</div>

<div>

### Sample2

#### Input

    5
    push 1
    pop
    push 2
    push 3
    pop

#### Output

    1
    2 

</div>
