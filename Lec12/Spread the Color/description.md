Spread the Color
----------------

### Description

<div>

Read a graph with size `M(5) * N(8)`, for each pixel there are **3
colors(Red, Green, Blue)** that we respectively use `R`, `G`, `B` to
represent. If the pixel is **empty**, we use `X` to represent. After
reading the graph, read `row` and `col` to get the color of
`graph[row][col]`.Now, you need to spread the color starting from the
position `(row, col)` and finally print out the result. The spreading
rules are below:

**Spread color** `graph[row][col]` **starting from** `(row, col)`**in 4
directions(Up, Down, Left, Right).** You will encounter three
situations.\
1. Pixel\'s color is `X`: Fill the color with `graph[row][col]` and go
on.\
2. Pixel\'s color is the same as `graph[row][col]`: Go on.\
3. Pixel\'s color is different from `graph[row][col]`: Stop spreading.

### **Hint: See two-dimensional array as one-dimensional array.**

Given `char *p = &graph[0][0]`, you can use `*(p+row*N+col)` to visit
the element in `graph[row][col]`.

</div>

### Input

Input a is a pointer which indicates graph\[0\]\[0\], row and col are
int that indicate the starting position for spreading.

### Output

Your function needs to change the colors for each pixel in the graph
after spreading.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define M 5
    #define N 8
    char colors[4] = {'R', 'G', 'B', 'X'};   // Red, Green, Blue, Empty

    void spread(char*, int, int);

    int main(void) {
        char graph[M][N];
        int row, col;

        for(int i = 0; i <‍ M; i++) {
            for(int j = 0; j <‍ N; j++)
                scanf("%c", &graph[i][j]);
            getchar();      // Ignore '\n'
        }
        scanf("%d %d", &row, &col);    // Starting position
        
        spread(&graph[0][0], row, col);
        
        // Print out the spreading result
        for(int i = 0; i <‍ M; i++) {
            for(int j = 0; j <‍ N; j++)
                printf("%c", graph[i][j]);
            printf("\n");
        }
        return 0;
    }

<div>

### Sample1

#### Input

    XXXXXXXX
    XXGXXXXX
    XRRXRXBX
    XXXXXXXX
    XXBXXXXX
    2 2

#### Output

    XXXXXXXX
    XXGXXXXX
    RRRRRRBX
    XXRXXXXX
    XXBXXXXX

</div>

<div>

### Sample2

#### Input

    RXXXXXXX
    XXXXXXXX
    XXXXXXXX
    XXXXXXXX
    XXXXXXXX
    0 0

#### Output

    RRRRRRRR
    RXXXXXXX
    RXXXXXXX
    RXXXXXXX
    RXXXXXXX

</div>
