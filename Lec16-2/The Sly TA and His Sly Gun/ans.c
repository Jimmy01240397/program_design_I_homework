#include<stdio.h>

int main () {
    int cont;
    scanf("%d", &cont);
    for(int i = 0; i < cont; i++)
    {
        unsigned char data[4];
        scanf("%f", (float*)data);
        int now = 0;
        for(int i = 0; i < 4; i++)
        {
            now += data[i];
        }
        puts(now % 2 == 0 ? "Front" : "Back");
    }
    return 0;
}
