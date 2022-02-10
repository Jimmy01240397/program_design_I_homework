Matrix Addition and Multiplication
----------------------------------

### Description

<div>

Write a program that implements matrix addition and multiplication of
two matrices.

</div>

### Input

The input contains three parts. The first and second part represent the
information of the first matrix and the second matrix respectively. The
first line of each part contains row and column number of the matrix,
and the following line is an array of integers which represent the
matrix itself. The second part is a character which represents the
operation of the matrix.

### Output

The content of the result matrix. Each element is followed by a space
character.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define SIZE 50

    struct mat {
        int row;
        int col;
        int value[SIZE][SIZE];
    };

    void scan_mat(struct mat *);
    void print_mat(const struct mat *);
    void add_mat(const struct mat *, const struct mat *, struct mat *);
    void mul_mat(const struct mat *, const struct mat *, struct mat *);

    int main(void) {
        struct mat m1, m2, result;
        char op;
        scan_mat(&m1);
        scanf(" %c", &op);
        scan_mat(&m2);
        switch (op) {
            case '+':
                add_mat(&m1, &m2, &result);
                break;
            case '*':
                mul_mat(&m1, &m2, &result);
                break;
        }
        print_mat(&result);
        return 0;
    }

    void scan_mat(struct mat *m_p) {
        scanf("%d %d", &m_p->row, &m_p->col);
        for (int i = 0; i <‍ m_p->row; ++i) {
            for (int j = 0; j <‍ m_p->col; ++j) {
                scanf("%d", &m_p->value[i][j]);
            }
        }
    }

    void print_mat(const struct mat *m_p){
        for (int i = 0; i <‍ m_p->row; ++i) {
            for (int j = 0; j <‍ m_p->col; ++j) {
                printf("%d ", m_p->value[i][j]);
                if (j == m_p->col - 1) {
                    printf("\n");
                }
            }
        }
    }

<div>

### Sample1

#### Input

    2 3
    3 2 6
    2 4 5
    +
    2 3
    4 5 6
    3 1 4

#### Output

    7 7 12 
    5 5 9 

</div>

<div>

### Sample2

#### Input

    2 2
    1 2
    3 4
    *
    2 2
    5 6
    7 8

#### Output

    19 22 
    43 50 

</div>
