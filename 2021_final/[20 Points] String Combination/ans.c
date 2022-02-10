#include<stdio.h>
#include <string.h>

void doing(char (*data)[50], char *allans, char *nowans, int size, int cont)
{
    if(!cont)
    {
        printf("%s\n", allans);
        return;
    }
    for(int i = 0; i < size - (cont - 1); i++)
    {
        strcpy(nowans, data[i]);
        strcat(nowans, " ");
        doing(data[i + 1], allans, &nowans[strlen(data[i]) + 1], size - i - 1, cont - 1);
        //printf("aaa\n");
        memset(nowans, 0, strlen(data[i]) + 1);
    }
}

int main () {
    int n, k;
    scanf("%d%d", &n, &k);
    char data[50][50] = {0};
    char ans[1000000] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%s", data[i]);
    }
    doing(data, ans, ans, n, k);
    return 0;
}
