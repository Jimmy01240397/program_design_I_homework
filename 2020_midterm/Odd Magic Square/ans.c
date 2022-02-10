#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
    int n;
    scanf("%d", &n);
    int data[n][n];
    for(int i = 0; i < n; i++)
    {
        memset(data[i], 0, sizeof(int)*n);
    }
    for(int i = 1,y=0,x=n/2; i <= pow(n,2); i++)
    {
        data[y][x] = i;
        y = (y + n - 1)%n;
        x = (x + n + 1)%n;
        if(data[y][x])
        {
            y = (y + n + 2) % n;
            x = (x + n - 1) % n;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            printf("%d ",data[i][k]);
        }
        printf("\n");
    }
    return 0;
}
