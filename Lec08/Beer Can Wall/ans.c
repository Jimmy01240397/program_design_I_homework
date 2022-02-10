#include<stdio.h>
#include<string.h>
int main () {
    int data;
    long long now[2] = {1,1};
    scanf("%d", &data);
    for(int i = 2; i <= data/10; i++)
    {
        long long geting = now[0] + now[1];
        now[0] = now[1];
        now[1] = geting;
    }
    printf("%lld", now[1]);
    return 0;
}
