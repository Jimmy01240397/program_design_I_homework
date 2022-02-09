#include <stdio.h>
#define PI 3.14f

int main(void){
    int a;
    scanf("%d", &a);
    printf("%.2f %.2f", a * a * PI, a * 2 * PI);
    return 0;
}
