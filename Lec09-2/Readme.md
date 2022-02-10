Lec09-2
=======

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

Quicksort
---------

### Description

<div>

**Updated at 11/28**: One more sample revealed. Please refer to sample
3.

------------------------------------------------------------------------

Quicksort is a divide-and-conquer sorting algorithm. You may have learnt
it in PD1 class, but if you want to understand it better, the best way
is to implement it yourself!

The algorithm of quicksort could be describe as following:

1\. You have an unsorted array, the index of first element is called
\"low\", and the index of the last one is called \"high\".

2\. Arbitrarily pick a number from the given array as \"pivot\". The
\"pivot\" is used to \"divide\" the array into two sub-arrays, according
to whether they are less than or greater than the pivot. In this
question, **we require you to always pick the last number in array as
\"pivot\"**.

3\. Iterate through the array (except the \"pivot\") to find the index
of \"pivot\". **In this iteration, we keep moving the numbers that are
smaller than \"pivot\" or equal to \"pivot\" to the front of the array,
and keep track of the index of the last number of them**. After we
finishing iterating, the index of \"pivot\" is next to the last number
that is smaller than it.

4\. **Move \"pivot\" to the position we found in step 2**. At this
point, you have \"divide\" the original array into two sub-arrays, but
they both are still unsorted.

5\. Repeat step 1 - 4 on two sub-arrays recursively, **until you find
the length of divided sub-array is 1 or 0**, which is trivially sorted.

We can illustrate this process with array `8 5 1 9 10 7 3 2 4 6`:

       l                  h
    1. 8 5 1 9 10 7 3 2 4 6 // you have an unsorted array, the first index is low, the last is high

       l                  h
    2. 8 5 1 9 10 7 3 2 4 6 // pick the last one as "pivot", in this case, it is 6
                          p

       l                  h
    3. 8 5 1 9 10 7 3 2 4 6 // move those numbers that are smaller than 6 to the front
       i                  p
       8 5 1 9 10 7 3 2 4 6 // 8 is bigger than 6, no action
     s i                  p
       5 8 1 9 10 7 3 2 4 6 // 5 is smaller than 6, move to the front
       s i                p
       5 1 8 9 10 7 3 2 4 6 // 1 is smaller than 6, move to the front
         s i              p
       5 1 8 9 10 7 3 2 4 6 // 9 is bigger than 6, no action
         s   i            p
       5 1 8 9 10 7 3 2 4 6 // 10 is bigger than 6, no action
         s      i         p
       5 1 8 9 10 7 3 2 4 6 // 7 is bigger than 6, no action
         s        i       p
       5 1 3 9 10 7 8 2 4 6 // 3 is smaller than 6, move to the front
           s        i     p
       5 1 3 2 10 7 8 9 4 6 // 2 is smaller than 6, move to the front
             s        i   p
       5 1 3 2 4 7 8 9 10 6 // 4 is smaller than 6, move to the front
               s        i p

       l                  h
    4. 5 1 3 2 4 6 8 9 10 7 // move "pivot" to the center of two sub-arrays
                 p

       l       h
    5. 5 1 3 2 4 6 8 9 10 7 // repeat it on sub-arrays recursively
               p
    -> 1 3 2 4 5 6 8 9 10 7
             p

    ...

    5. 1 2 3 4 5 6 7 8 9 10 // Sorted!

It is better that we can trace the sorting process with our eye than
with our mind. So besides implementing the sorting algorithm above, **we
need you to print out the result of step 4 everytime you \"conquer\" the
sub problem**. You need to use bracket `[ ]` to show the range of
sub-array, and put asterisk `*` in front of the pivot in that sub-array.
Please refer to the sample output.

Hope you can totally understand this cool algorithm after this exercise
:D

</div>

### Input

The first line is an integer n (1 \<= n \<= 500), indicating the number
of numbers in the given array. The following line is an unsorted array
with n integer numbers. Notice that there may be duplicated value in the
array.

### Output

The process of quick sort, line by line. And the final line is the
sorted array. Please refer to samples.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define N 500
    #define swap(x, y) {int tmp = x; x = y; y = tmp;}

    void quicksort(int a[], int low, int high);
    int partition(int a[], int low, int high);

    int size;

    int main(void)
    {
        int array[N];
        scanf("%d", &size);

        for (int i = 0; i <‍ size; i++)
        {
            scanf("%d", &array[i]);
        }

        quicksort(array, 0, size - 1);

        for (int i = 0; i <‍ size; i++)
        {
            printf("%d ", array[i]);
        }
        return 0;
    }

<div>

### Sample1

#### Input

    10
    8 5 1 9 10 7 3 2 4 6

#### Output

    [ 5 1 3 2 4 *6 8 9 10 7 ] 
    [ 1 3 2 *4 5 ] 6 8 9 10 7 
    [ 1 *2 3 ] 4 5 6 8 9 10 7 
    1 2 3 4 5 6 [ *7 9 10 8 ] 
    1 2 3 4 5 6 7 [ *8 10 9 ] 
    1 2 3 4 5 6 7 8 [ *9 10 ] 
    1 2 3 4 5 6 7 8 9 10 

</div>

<div>

### Sample2

#### Input

    1
    1

#### Output

    1 

</div>

<div>

### Sample3

#### Input

    10
    2 7 10 1 9 6 3 2 5 6 

#### Output

    [ 2 1 6 3 2 5 *6 9 10 7 ] 
    [ 2 1 3 2 *5 6 ] 6 9 10 7 
    [ 2 1 *2 3 ] 5 6 6 9 10 7 
    [ *1 2 ] 2 3 5 6 6 9 10 7 
    1 2 2 3 5 6 6 [ *7 10 9 ] 
    1 2 2 3 5 6 6 7 [ *9 10 ] 
    1 2 2 3 5 6 6 7 9 10 

</div>

<div>

### Sample4

#### Input

    10
    10 11 12 13 14 15 16 17 18 19 

#### Output

    [ 10 11 12 13 14 15 16 17 18 *19 ] 
    [ 10 11 12 13 14 15 16 17 *18 ] 19 
    [ 10 11 12 13 14 15 16 *17 ] 18 19 
    [ 10 11 12 13 14 15 *16 ] 17 18 19 
    [ 10 11 12 13 14 *15 ] 16 17 18 19 
    [ 10 11 12 13 *14 ] 15 16 17 18 19 
    [ 10 11 12 *13 ] 14 15 16 17 18 19 
    [ 10 11 *12 ] 13 14 15 16 17 18 19 
    [ 10 *11 ] 12 13 14 15 16 17 18 19 
    10 11 12 13 14 15 16 17 18 19 

</div>

<div>

### Sample5

#### Input

    10
    13 12 11 10 9 8 7 6 5 4 

#### Output

    [ *4 12 11 10 9 8 7 6 5 13 ] 
    4 [ 12 11 10 9 8 7 6 5 *13 ] 
    4 [ *5 11 10 9 8 7 6 12 ] 13 
    4 5 [ 11 10 9 8 7 6 *12 ] 13 
    4 5 [ *6 10 9 8 7 11 ] 12 13 
    4 5 6 [ 10 9 8 7 *11 ] 12 13 
    4 5 6 [ *7 9 8 10 ] 11 12 13 
    4 5 6 7 [ 9 8 *10 ] 11 12 13 
    4 5 6 7 [ *8 9 ] 10 11 12 13 
    4 5 6 7 8 9 10 11 12 13 

</div>

Rat in a Maze
-------------

### Description

<div>

There is a `5*5` maze. A rat wants to walk through the maze and it moves
in a vertical or a horizontal direction. Please help the rat find a
route from the upper-left block to the bottom-right block.

upper-left block: `(0,0)`

bottom-right block: `(4,4)`

**Note**: There is at most one route.

**Hint**: You can use recursion to solve this problem.

</div>

### Input

A maze is a 5\*5 matrix. \'w\' and \'r\' represent wall and road
respectively.

### Output

Print out a route in a 5\*5 matrix.(1: a route, 0: not a route) If there
isn\'t any route, print out \"Can\'t find the exit!\".

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdbool.h>
    #define n 5

    bool visit(char [][n], int [][n], int, int);
    int main(void) {
        char maze[n][n];
        int route[n][n];
        // initialize maze and route matrices
        for (int i=0; i<‍n; i++) {
            for (int j=0; j<‍n; j++) {
                route[i][j]=0;
                scanf("%c", &maze[i][j]);
                getchar();
            }
        }
        if (visit(maze, route, 0, 0)) { // (0,0) is a starting point
            for (int i=0; i<‍n; i++) {
                for (int j=0; j<‍n; j++)
                    printf("%d ", route[i][j]);
                printf("\n");
            }
        } else {
            printf("Can't find the exit!");
        }
        return 0;
    }

<div>

### Sample1

#### Input

    r w r r r
    r w r w w
    r r r r r
    r w r w w
    r w r r r

#### Output

    1 0 0 0 0 
    1 0 0 0 0 
    1 1 1 0 0 
    0 0 1 0 0 
    0 0 1 1 1 

</div>

<div>

### Sample2

#### Input

    r w r r r
    r w r w w
    r r r w r
    r w r w w
    r w r w r

#### Output

    Can't find the exit!

</div>

Sudoku Checker
--------------

### Description

<div>

Sudoku is a logical based, combinatorial number-placement puzzle. The
objective is to fill a **9×9** grid with digits so that **each column,
each row, and each of the nine 3×3 subgrids that compose the grid
contain all of the digits from 1 to 9**.

For example:

![Image](data:image/jpeg;base64,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)

Write a program which checks the input sudoku puzzle and prints out the
row number and column number of the points that do not satisfy sudoku\'s
requirements.

Note: You only need to implement `check_sudoku` function.

</div>

### Input

The parameter of the check\_sudoku function is a pointer that points to
a two-dimentional integer array, which represents the sudoku puzzle.

### Output

Print out the row number and column number of the points (from left to
right then top to bottom) that do not satisfy soduku\'s requirements.
Each point printed out is followed by a newline character, and is in the
format (row,column).

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define NUM 9

    void check_sudoku(int grid_p[][NUM]);

    int main(void){
        int grid[NUM][NUM]; // sudoku puzzle
        for(int i = 0; i <‍ NUM; ++i){
            for(int j = 0; j <‍ NUM; ++j){
                scanf("%d", &grid[i][j]);
            }
        }
        check_sudoku(grid);
        return 0;
    }

<div>

### Sample1

#### Input

    9 3 1 7 1 8 2 4 5
    7 5 2 9 4 1 8 3 6
    6 8 4 5 3 2 9 7 1
    8 2 9 3 5 4 6 1 7
    5 6 7 8 1 9 3 2 4
    1 4 3 2 7 6 5 8 9
    3 1 5 6 8 7 4 9 2
    4 9 8 1 2 5 7 6 3
    2 7 6 4 9 3 1 5 8

#### Output

    (0,2)
    (0,4)
    (1,5)
    (4,4)

</div>

<div>

### Sample2

#### Input

    9 3 1 7 6 8 2 4 5
    2 5 2 9 4 1 8 3 6
    6 8 4 5 3 2 9 7 1
    8 2 9 3 5 4 6 1 7
    5 6 7 8 1 9 3 2 4
    1 4 3 2 7 6 5 8 9
    3 1 5 6 8 7 4 9 2
    4 9 8 1 2 5 7 6 3
    2 7 6 4 9 3 1 5 8

#### Output

    (1,0)
    (1,2)
    (8,0)

</div>

The coordinate to the past
--------------------------

### Description

<div>

Matsumoto is a brilliant AI that is built and sent to the past to
prevent a war between humans and AI. When on his way back to the past,
he will receive a set of encoded coordinates indicating where to go.

To decode the coordinates, he has to follow the following steps:

1\. split the received line of characters into two groups: characters at
odd positions and characters at even positions (index starts by 0 and
from left)

2\. sum up the numbers in each group

3\. write these two numbers into hexadecimal

4\. process the two numbers from step 1 if the length of the number is
greater than 1

5\. the coordinate is the concatenate of the result of the two numbers
(the odd one on the left)

The following figure presents an example of the previously shown steps:

![Screenshot from 2021-11-24
17-05-20.png](/Lec09-2/The%20coordinate%20to%20the%20past/images/edfffd77eff297fa25b8ac6af556f793c332f59e.png)Please
help him to decode the coordinate.

![](https://c.tenor.com/3HSEeSLm-k8AAAAC/vivy-vivy-flourite-eyes-song.gif)

松本是個聰明的人工智慧，創造他的人想要將他送回過去阻止一場人類與人工智慧的戰爭。在他穿越的過程中，他會收到一份經過編碼的目的地座標，想要將座標解碼需要透過以下的步驟：

1.  將收到的所有字元分成奇數位與偶數位兩組（從最左邊的開始編號，並且從0開始）

2.  分別計算兩組數字的和

3.  將兩個相加的結果以16進位表示

4.  若有和的位數大於1的，則重複上述步驟

5.  將兩組數字計算的結果串接起來（奇數組的結果在左邊，偶數組的在右邊）

下面是範例二的示意圖：![Screenshot from 2021-11-24
17-05-20.png](/Lec09-2/The%20coordinate%20to%20the%20past/images/edfffd77eff297fa25b8ac6af556f793c332f59e.png)請幫助松本解碼他收到的座標。

</div>

### Input

A newline character terminated string indicates the encoded coordinate.
The length of the string will be greater than 1 and less than 10001.
Each character represents a hexadecimal, the upper case and the lower
case are both possible. 一行以換行字元結尾的字串，代表經過編碼的座標。
該字串的長度介於1到10001間（不包含10001）。
字串中每個字元代表一個16進位數字，且大小寫都有可能。

### Output

A single line that indicates the decoded coordinate, the letter of the
coordinate should be shown in lower case (if any).
解碼後的字串，若字串中有出現英文字母一律以小寫表示。

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    1111111111

#### Output

    55

</div>

<div>

### Sample2

#### Input

    ffffffffff

#### Output

    b4b4

</div>

那個孤單的數字 - The Lonely Number
----------------------------------

### Description

<div>

這個世界是上時時刻刻都在發生著排擠的狀況，就連數字的世界也是。真可憐。\
給定 `N`
個的數字，依據以下規則將其全部分成三個數字一組的小組，請你找到無法被分組的那個可憐蟲。\
Every second, someone is getting excluded from his group, and so does it
happens in the world of numbers.\
Given N numbers, group them into triads according to the following
rules. Please find the lonely pitiful number.

-   每個數組中的三個數字 a, b, c，必須可以滿足 a + b = c。\
    The 3 numbers a, b, c in each groups must satisfy the formula a + b
    = c.

-   **提供的數字可能重複，但各個成員只能被使用一次**。\
    **Each numbers might be given many times, but each occurrence can
    only be used once.**

    -   E.g.,
        `input = [1, 2, 3, 1, 2, 3, 8], group = [[1, 2, 3], [1, 2, 3]], output = [8]`

-   `N` = 3k + 1，`k` ∈ ℕ，必定可以組成 `k` 個數組。\
    `N` = 3k + 1, `k` ∈ ℕ. It is guaranteed that `k` different triads
    can be made.

-   每組輸入皆只有一個正確的孤單數字，但有**可能有不同的分組方法**。\
    Each set of inputs are guaranteed to have only 1 correct lonely
    number, but **might have multiple ways to group the numbers**.

### Sample Description

**nums = \[1, 2, 3, 3\]\
**可以組成`[[1, 2, 3]]`而多餘的 3 會被留下來，因此輸出為 3。\
Can be grouped into`[[1, 2, 3]]`, with the redundant 3 getting excluded,
so the output should be 3.

**nums = \[1, 3, 4, 2, 2, 4, 3, 5, 8, 3\]\
**可以被分成`[[1, 2, 3], [2, 3, 5], [4, 4, 8]]`，或`[[1, 3, 4], [2, 2, 4], [3, 5, 8]]`，皆會留下一個孤單的
3，因此輸出為 3。\
Can be grouped
into`[[1, 2, 3], [2, 3, 5], [4, 4, 8]]`or`[[1, 3, 4], [2, 2, 4], [3, 5, 8]]`,
both excluding the redundant 3, so the output is also 3.\

</div>

### Input

First line consists a integer, tells how many numbers will be given. 1 ≤
N ≤ 50，N = 3k + 1，k ∈ ℕ Following is N numbers each separated with a
space. 1 ≤ k ≤ 100

### Output

The single lonely number. You don\'t need to mind what are the groups.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    4
    1 2 3 3

#### Output

    3

</div>

<div>

### Sample2

#### Input

    10
    1 3 4 2 2 4 3 5 8 3

#### Output

    3

</div>

<div>

### Sample3

#### Input

    13
    2 8 4 2 2 5 8 3 5 8 3 4 2

#### Output

    8

</div>

