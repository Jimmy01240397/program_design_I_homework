#include<stdio.h>

int main () {
    int cont;
    scanf("%d", &cont);
    for(int i = 0; i < cont; i++)
    {
        int stb;
        unsigned long long num;
        char ans[100] = {0};
        scanf("%d-%llx", &stb, &num);
        for(int i = 0, mv = 0; i < 64; i++)
        {
            if(i >= stb && i < stb + 8)
            {
                ans[71 - (i + mv) - 1] = ((num & 1) + '0');
            }
            else
            {
                ans[71 - (i + mv) - 1] = '0';
            }
            if((i + 1) % 8 == 0)
            {
                mv++;
                ans[71 - (i + mv) - 1] = ' ';
            }
            num = num >> 1;
        }
        printf("%s\n", ans);
    }
    return 0;
}
