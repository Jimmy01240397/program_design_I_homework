Complete Binary Tree Traversal
------------------------------

### Description

<div>

Tree is a widely used data structure.

A **tree** looks like:

    Tree:
             1
           /   \
         2       3
       /   \   /   \
      4     5 6     7

can be stored in an 8 elements integer array

     [no_use, 1, 2, 3, 4, 5, 6, 7]

**Child node**:

    The lower nodes 2、3 linked to 1 are called "the node 1's children".

**Binary tree** is define as :

    For each node, it has at most two children.

**Complete binary tree** can be seen as :

    The tree node is "from top to down, left to right" full.

    Is a complete binary tree:
             1
           /   \
         2       3
       /   \   /   
      4     5 6   
      
    Not a complete binary tree:
             1
           /   \
         2       3
           \      
            5      

------------------------------------------------------------------------

There are 3 kind of simple traversal can be implemented on tree :

**Pre-order traversal** :

visit current node -\> visit left child -\> visit right child

**In-order** **traversal** :

visit left child -\> visit current node -\> visit right child

**Post-order** **traversal** :

visit left child -\> visit right child -\> visit current node

Please implement the Complete Binary Tree Traversal.

------------------------------------------------------------------------

</div>

### Input

The first line is what kind traversal should be implemented. \'0\' for
pre-order traversal \'1\' for in-order traversal \'2\' for post-order
traversal The second line is the number of nodes in this tree. The third
line is a integer list represent the tree.Each integer seperated by a
space. the number of tree node n is ranged in: 0 \<= n \<= 5000

### Output

A sequential integer list show the traversal result. Each visited node
is seperated by a space.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    0
    10
    1 2 3 4 5 6 7 8 9 10 

#### Output

    1 2 4 8 9 5 10 3 6 7 

</div>

<div>

### Sample2

#### Input

    1
    10
    1 2 3 4 5 6 7 8 9 10 

#### Output

    8 4 9 2 10 5 1 6 3 7 

</div>

<div>

### Sample3

#### Input

    2
    10
    1 2 3 4 5 6 7 8 9 10 

#### Output

    8 9 4 10 5 2 6 7 3 1 

</div>
