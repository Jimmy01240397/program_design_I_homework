#include <stdio.h>

int f(int n)
{
    if(n == 1) return 1;
    if(n %2 == 0) return f(n / 2);
    else return f(n + 1) + f(n - 1);

}

int main () {
	int get;
    scanf("%d", &get);
    printf("%d", f(get));
}