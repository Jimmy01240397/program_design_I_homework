#include <stdio.h>

int main(void){
    char data[8] = "MDCLXVI", a[5], ans[100];
    int cont = 0,aa;
    scanf("%d", &aa);
    sprintf(a, "%04d", aa);
    for(int i = 0; i < ((int)a[0]) - 48; i++)
    {
        ans[cont] = data[0];
        cont++;
    }
    for(int i = 1; i < 4; i++)
    {
        if(((int)a[i]) - 48 < 4)
        {
            for(int ii = 0; ii < ((int)a[i]) - 48; ii++)
            {
                ans[cont] = data[1 + (i - 1) * 2 + 1];
                cont++;
            }
        }
        else if(((int)a[i]) - 48 == 4)
        {
            ans[cont] = data[1 + (i - 1) * 2 + 1];
            cont++;
            ans[cont] = data[1 + (i - 1) * 2];
            cont++;
        }
        else if(((int)a[i]) - 48 == 9)
        {
            ans[cont] = data[1 + (i - 1) * 2 + 1];
            cont++;
            ans[cont] = data[1 + (i - 1) * 2 - 1];
            cont++;
        }
        else
        {
            ans[cont] = data[1 + (i - 1) * 2];
            cont++;
            for(int ii = 0; ii < ((int)a[i]) - 48 - 5; ii++)
            {
                ans[cont] = data[1 + (i - 1) * 2 + 1];
                cont++;
            }
        }
    }
    ans[cont] = '\0';
    printf("%s", ans);
    return 0;
}
