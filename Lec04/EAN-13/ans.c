#include <stdio.h>

int main(void){
    char data[13];
    scanf("%s %s %s", data, (char*)data + 1, (char*)data + 7);
    int a = 0, b;
    for(int i = 0; i < 12; i++)
    {
        a += (((int)data[i]) - 48) * (i % 2 == 0 ? 1 : 3);
    }
    b = ((a / 10) + (a % 10 == 0 ? 0 : 1)) * 10;
    printf("%d", b - a);
}
