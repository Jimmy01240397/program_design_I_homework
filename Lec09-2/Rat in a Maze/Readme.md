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
