#include<stdio.h>

int main () {
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    printf("%d %d", (a+b+c)/7, (a+b+c)%7);
}
