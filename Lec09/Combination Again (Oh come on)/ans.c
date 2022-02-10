#include <stdio.h>

unsigned long long C(int n, int m)
{
    if(m == 0 || m == n) return 1;
    return C(n - 1, m - 1) + C(n - 1, m);
}
int main(void){
    int n,m;
    scanf("%d%d", &n,&m);
    printf("%llu", C(n,m));
}
