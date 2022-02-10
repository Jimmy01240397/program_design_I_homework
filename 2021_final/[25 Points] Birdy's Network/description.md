\[25 Points\] Birdy\'s Network
------------------------------

### Description

<div>

Birdy 是一個網路管理員，他想要使用一個 **鄰接表** (adjacency list)
來紀錄他負責管理的網路。\
我們可以使用一條 list 紀錄當前節點的所有相鄰節點(neighbor
node)，並將所有的節點資訊儲存於一條陣列中，\
以下是本鄰接表的示意圖：

![](/2021_final/%5B25%20Points%5D%20Birdy's%20Network/images/9b93c2bb45ee6823fe06d6554e9cfcd4679c94bd.png)

同時，他也希望鄰接表上的節點按照 id 由小到大的排序。\
請你幫助他建立並排序這張鄰接表。

------------------------------------------------------------------------

Birdy is a network administrator. He wants to use an **adjacency list**
to represent his network. One representation of adjacency list is an
array of linked lists which records the neighbors for each node. The
structure of the adjacency list is shown as following:

![](/2021_final/%5B25%20Points%5D%20Birdy's%20Network/images/9b93c2bb45ee6823fe06d6554e9cfcd4679c94bd.png)He
also wants to make the order of the adjacency list ascending. Please
help him load the data to an adjacency list and reorganize its order.

Note that the connection is directed.

</div>

### Input

Input contains multiple lines (\<= 1000 lines). The first number in each
line is node id. The numbers after \"-\>\" are the neighbor ids of
current node (in ascending order). The last number in each line is
always 0, which indicates the end of the line. All ids are positive
integers (1 \<= id \<= 2147483647).

### Output

Output contains the neighbor ids of each node (list in ascending order).

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>

    struct node {
        int id;
        struct node *next;
    };

    struct node *read_data(int *size); // TODO: implement this function

    void print_data(struct node *adj, int size) {
        if (!adj) {
            return;
        }
        for (int i = 0; i <‍ size; ++i) {
            printf("%d -> ", adj[i].id);
            for (struct node *ptr = adj[i].next; ptr != NULL; ptr = ptr->next) {
                printf("%d ", ptr->id);
            }
            putchar('\n');
        }
        return;
    }

    void free_data(struct node *adj, int size) {
        if (!adj) {
            return;
        }
        for (int i = 0; i <‍ size; ++i) {
            struct node *ptr = adj[i].next;
            while (ptr) {
                adj[i].next = ptr->next;
                free(ptr);
                ptr = adj[i].next;
            }
        }
        free(adj);
        return;
    }

    int main() {
        int size;
        struct node *adj = read_data(&size);
        if (!adj) {
            fprintf(stderr, "Error allocating memory.");
            exit(1);
        }
        print_data(adj, size);
        free_data(adj, size);
        return 0;
    }

<div>

### Sample1

#### Input

    100356 -> 4 458 0
    4 -> 458 0
    458 -> 0

#### Output

    4 -> 458
    458 -> 
    100356 -> 4 458

</div>

<div>

### Sample2

#### Input

    32 -> 14 22 0
    37 -> 14 32 0
    8 -> 22 37 0
    14 -> 8 22 32 37 0
    22 -> 8 14 32 37 0

#### Output

    8 -> 22 37
    14 -> 8 22 32 37
    22 -> 8 14 32 37
    32 -> 14 22
    37 -> 14 32

</div>
