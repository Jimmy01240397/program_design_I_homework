#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d%d", &a,&b);
    float c = (float)a/b;
    printf("%.1f %.2f", c, c);
    return 0;
}
