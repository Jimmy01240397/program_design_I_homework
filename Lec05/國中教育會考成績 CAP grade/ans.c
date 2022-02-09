#include<stdio.h>
#include<string.h>
int main () {
    float s[5],data[][15] = {
      {45, 48, 43, 44, 41, 42, 36, 40, 31, 35, 19, 30, 0, 18},
      {98.05, 100.00, 95.15, 97.14, 90.24, 94.29, 81.58, 89.52, 69.83, 81.53, 38.75, 69.78, 0, 38.70},
      {94.23, 100.00, 90.19, 93.46, 81.73, 90.00, 72.12, 81.15, 63.08, 71.92, 40.96, 62.31, 0, 40.19},
      {61, 63, 59, 60, 56, 58, 48, 55, 39, 47, 23, 38, 0, 22},
      {52, 54, 50, 51, 46, 49, 38, 45, 31, 37, 20, 30, 0, 19}};
    int a[7],b[3],ansa=0,ansb=0;
    memset(a, 0, 7*sizeof(a[0]));
    memset(b, 0, 3*sizeof(b[0]));
    for(int i = 0; i < 5; i++)
    {
        scanf("%f", ((float*)s) + i);
    }
    for(int i = 0; i < 5; i++)
    {
		for(int k = 0; k < 7; k++)
        {
            if(data[i][k * 2] <= s[i] && data[i][k * 2 + 1] >= s[i])
            {
                a[k]++;
                b[k / 3]++;
                break;
            }
        }
    }
    
    for(int i = 0; i < 7; i++)
    {
        ansa += a[i] * (7 - i);
    }
    for(int i = 0; i < 3; i++)
    {
        ansb += b[i] * (6 - i * 2);
    }
    printf("%d/%d(",ansb,ansa);
    if(b[0] > 0) printf("%dA",b[0]);
    if(b[1] > 0) printf("%dB",b[1]);
    if(b[2] > 0) printf("%dC",b[2]);
    printf(")");
    return 0;
}
