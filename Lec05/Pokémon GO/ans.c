#include<stdio.h>

int main () {
    int n, n2, p, h, s, cont = 0;
    scanf("%d%d%d%d", &n, &p, &h, &s);
    n2 = s > 4 ? 5 : n;
    cont = (p < 100 ? 1 : (p >= 100 && p <= 600 ? 5 + (h > 100 ? 3 : 0) : 15 + (h > 200 ? 10 : 0)));
    printf("%s", cont > n2 ? "NO\n" : "YES\n");
    if(cont <= n2)
    {
        printf("%d", n - cont);
    }
    return 0;
}
