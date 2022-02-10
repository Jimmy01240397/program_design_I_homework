#include <stdio.h>
#include <math.h>
int main(void){
    float a,b;
    scanf("%f", &a);
    b = 7*pow(a, 4)-8*pow(a, 3)-pow(a, 2)+6*a-22;
    printf("%.1f", b);
    return 0;
}
