#include<stdio.h>

int main () {
    int nowh, nowm, n;
    scanf("%d:%d%d", &nowh,&nowm,&n);
    nowm += nowh * 60;
    int gettime = 1000000000;
    int getindex = 0;
    while(n--)
    {
        int index, h , m ,time;
        scanf("%d%d:%d%d", &index,&h,&m,&time);
        m += h * 60;
        if(nowm <= m && gettime > m + time)
        {
            gettime = m + time;
            getindex = index;
        }
    }
    printf("%d", getindex);
}
