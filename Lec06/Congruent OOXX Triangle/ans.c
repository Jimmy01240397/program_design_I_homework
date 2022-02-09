#include <stdio.h>
#include <string.h>
int main () {
    int a;
    scanf("%d",&a);
    char data[a],data2[a * 2],data3[8 * (((a - 1) * 2 - 1) / 8 + 1)];
    memset(data, 32, a);
    memset(data2, 79, a * 2);
    data2[a * 2 - 1] = 0;
    for(int i = ((a - 1) * 2 - 1) / 8 + 1; i--; ((long long int*)data3)[i] = 6363401896305055823){}
    for(int i = 0; i < a - 1; data[a - (i + 1)] = data3[(i + 1) * 2 - 1] = 0,printf("%s%s\n", data,data3),data3[(i + 1) * 2 - 1] = 88,i++){}
    printf("%s\n", data2);
    return 0;
}
