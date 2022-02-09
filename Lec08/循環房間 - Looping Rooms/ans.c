#include<stdio.h>
#include<string.h>
int main () {
    int cont;
    scanf("%d", &cont);
    int get[cont], use[cont];
    char ans[50000];
    memset(use, 0, sizeof(int) * cont);
    memset(ans, 0, sizeof(char) * 50000);
    for(int i = 0; i < cont; i++)
    {
    	scanf("%d", &get[i]);
    }
    int usecont = 0;
    for(int i = 0; i < cont; i++)
    {
        int now;
        int isdo = 0;
        for(now = i; !use[now]; now = get[now])
        {
            int point = strlen(ans);
            sprintf(((char*)ans) + point, "%d -> ", now);
            use[now] = 1;
            isdo = 1;
        }
        if(isdo)
        {
            int point = strlen(ans);
        	sprintf(((char*)ans) + point, "%d\n", now);
            usecont++;
        }
    }
    printf("%d rings\n", usecont);
    printf("%s", ans);
}
