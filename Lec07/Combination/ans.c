#include <stdio.h>

long long int N(int x, int y)
{
    long long int now = 1;
    for(int i = y; i <= x; i++)
    {
        now *= i == 0 ? 1 : i;
    }
    return now;
}

int main(void){
    int m,n;
    scanf("%d%d", &m,&n);
    int delit = n > m-n ? n : m-n;
    int useit = n < m-n ? n : m-n;
    printf("%lld", N(m, delit + 1) / N(useit, 0));
    return 0;
}
