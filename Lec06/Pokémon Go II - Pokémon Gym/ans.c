#include<stdio.h>

int main () {

    int a,win=0,x=0;
    for(scanf("%d", &a); x < a; x++)
    {
        int nowwin = 0, nowa,nowb;
        for(int i = 3; i--;)
        {
            scanf("%d%d", &nowa,&nowb);
            nowwin += nowa > nowb ? 1 : (nowa < nowb ? -1 : 0);
        }
        win += nowwin > 0 ? 1 : 0;
        printf("%s\n", nowwin > 0 ? "Win" : (nowwin < 0 ? "Lose" : "Tie"));
    }
    printf("%.2f%%", (float)win / (float)a * (float)100);
    return 0;
}
