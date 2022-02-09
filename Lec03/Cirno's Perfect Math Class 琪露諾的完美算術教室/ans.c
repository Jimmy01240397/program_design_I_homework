#include <stdio.h>

int main(void){
    int a,b,c,d,x,y,z;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    x = a;
    y = x - b + c;
    z = y - d;
    printf("%04d %04d %04d", x,y,z);
}
