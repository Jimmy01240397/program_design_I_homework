#include<stdio.h>
#include<stdlib.h>
#define F(i,s,c) for(int i = s; i < c; i++)
#define intary(y) int (*)[y]
int main () {
    int x,y;
    scanf("%d%d", &x, &y);
    void* data = (void*)malloc(x*y*sizeof(int));
    F(i, 0, x)
    {
        F(k, 0, y)
        {
            scanf("%d", &((intary(y))data)[i][k]);
        }
    }
    int cont;
    scanf("%d", &cont);
    getchar();
    while(cont--)
    {
        char command;
        scanf("%c", &command);
        switch(command)
        {
                case 'r':
                {
                    char now[3];
                    scanf("%s", now);
                    int nowcont;
                    scanf("%d", &nowcont);
                    while(nowcont--)
                    {
                        int (*newdata)[x] = malloc(x*y*sizeof(int));
                        F(i, 0, y)
                        {
                            F(k, 0, x)
                            {
                                newdata[i][k] = ((intary(y))data)[now[0] == 'r' ? x - k - 1 : k][now[0] == 'r' ? i : y - i - 1];
                            }
                        }
                        int tmp = x;
                        x = y;
                        y = tmp;
                        free(data);
                        data = newdata;
                    }
                    break;
                }
                case 'v':
                {
                    int (*newdata)[y] = malloc(x*y*sizeof(int));
                    F(i, 0, x)
                    {
                        F(k, 0, y)
                        {
                            newdata[i][k] = ((intary(y))data)[x - i - 1][k];
                        }
                    }
                    free(data);
                    data = newdata;
                    break;
                }
                case 'h':
                {
                    int (*newdata)[y] = malloc(x*y*sizeof(int));
                    F(i, 0, x)
                    {
                        F(k, 0, y)
                        {
                            newdata[i][k] = ((intary(y))data)[i][y - k - 1];
                        }
                    }
                    free(data);
                    data = newdata;
                    break;
                }
                case 'c':
                {
                    int x1,x2,y1,y2;
                    scanf("%d%d%d%d", &y1,&y2,&x1,&x2);
                    int (*newdata)[y2 - y1 + 1] = malloc((x2 - x1 + 1)*(y2 - y1 + 1)*sizeof(int));
                    F(i, x1 - 1, x2)
                    {
                        F(k, y1 - 1, y2)
                        {
                            newdata[i - x1 + 1][k - y1 + 1] = ((intary(y))data)[i][k];
                        }
                    }
                    x = x2 - x1 + 1;
                    y = y2 - y1 + 1;
                    data = newdata;
                    break;
                }
                case 'p':
                {
                    F(i, 0, x)
                    {
                        F(k, 0, y)
                        {
                            printf("%d ", ((intary(y))data)[i][k]);
                        }
                        printf("\n");
                    }
                    printf("\n");
                    break;
                }
        }
        char other[100];
        fgets(other, 99, stdin);
    }
    return 0;
}
