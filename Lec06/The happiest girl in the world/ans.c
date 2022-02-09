#include<stdio.h>
#include<math.h>
int main () {
    float a,t = 0;
    for(scanf("%f",&a); a - (0.5 * 9.8 * pow(t,2)) > 0; t++)
    {
        printf("%.1f\n", a - (0.5 * 9.8 * pow(t,2)));
    }
    //可以不要消費柯朵莉ㄇ
    return 0;
}
