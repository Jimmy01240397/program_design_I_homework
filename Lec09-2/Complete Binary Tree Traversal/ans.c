#include<stdio.h>
#include<math.h>
#include<string.h>
int main () {
    int command, cont;
    scanf("%d%d", &command, &cont);
    int data[cont + 1], maxlayer = (int)(log((double)cont) / log((double)2));
    data[0] = 0;
    for(int i = 1; i <= cont; i++)
    {
        scanf("%d", &data[i]);
    }
    
    int dodata[cont + 1];
    memset(dodata, 0, sizeof(int) * (cont + 1));
    for(int runcont = 0, nowcont = 1; runcont < cont;)
    {
        int check[] = { !dodata[nowcont], (nowcont * 2 > cont || dodata[nowcont * 2]), (nowcont * 2 + 1 > cont || dodata[nowcont * 2 + 1])};
        int nowcheck = 1;
        for(int i = 0; i <= command; i++)
        {
            if(!check[i])
            {
                nowcheck = 0;
                break;
            }
        }
        if(nowcheck)
        {
            printf("%d ", data[nowcont]);
            dodata[nowcont] = 1;
            runcont++;
        }
        if(nowcont * 2 <= cont && !dodata[nowcont * 2])
        {
            nowcont *= 2;
        }
        else if(nowcont * 2 + 1 <= cont && !dodata[nowcont * 2 + 1])
        {
            nowcont = nowcont * 2 + 1;
        }
        else if(nowcont != 1)
        {
            nowcont /= 2;
        }
    }
    return 0;
}