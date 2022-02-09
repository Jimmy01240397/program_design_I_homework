#include<stdio.h>
#include<math.h>
#include <string.h>
unsigned int fromSEN(char* data)
{
    unsigned int ans = 0;
    int len = strlen(data) - 1;
    for(int i = 0; data[i] != '\0'; i++)
    {
        ans += (data[i] - 48) * pow(6, len - i);
    }
    return ans;
}

int main () {
    int n;
    unsigned long long int ans = 0;
    scanf("%d", &n);
    while(n--)
    {
        int base;
        scanf("%d", &base);
        switch(base)
        {
            case 6:
                {
                    char K[15];
                    scanf("%s", K);
                    ans += fromSEN(K);
                }
                break;
           case 8:
                {
                    unsigned int K;
                    scanf("%o", &K);
                    ans += K;
                }
                break;
           case 10:
                {
                    unsigned int K;
                    scanf("%u", &K);
                    ans += K;
                }
                break;
           case 16:
                {
                    unsigned int K;
                    scanf("%x", &K);
                    ans += K;
                }
                break;
        }
        ans = ans % 1000000007;
    }
    printf("%llu", ans);
    return 0;
}
