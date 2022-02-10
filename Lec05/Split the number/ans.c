#include <stdio.h>

int main(void){
    int a;
    char data[4];
    scanf("%d", &a);
    sprintf(data, "%03d", a);
    printf("%d %d %d", ((int)data[0]) - 48,((int)data[1]) - 48,((int)data[2]) - 48);
}
