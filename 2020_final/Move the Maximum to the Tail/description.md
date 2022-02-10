Move the Maximum to the Tail
----------------------------

### Description

<div>

Given `n` **different positive** integers, please move the maximum value
to the tail of the linked list.

給定`n`個**相異的正整數**，請你將當中最大的那個數字移到該Linked-List的最後面。

</div>

### Input

5 \<= n \<= 1000, each value will be less 100000.

### Output

The content of the linked list.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>

    struct node {
        int val;
        struct node *next;
    };
    struct node *head = NULL;
    struct node *tail = NULL;
    void MoveToTail();

    int main(void) { 
        int n;
        scanf("%d", &n);
        for(int i = 1; i <‍= n; ++i) {
            struct node *tmp = malloc(sizeof(struct node));
            scanf("%d", &tmp->val);
            tmp->next = NULL;
            if(i == 1)
                head = tmp;
            else
                tail->next = tmp;
            tail = tmp;
        }
        MoveToTail();
        for(struct node *cur = head; cur != NULL; cur = cur->next) {
            printf("%d ", cur->val);
        }
        return 0;
    }

<div>

### Sample1

#### Input

    5
    1 2 5 4 3

#### Output

    1 2 4 3 5 

</div>
