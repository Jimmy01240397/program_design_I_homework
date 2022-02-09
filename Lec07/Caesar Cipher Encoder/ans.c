#include <stdio.h>
#include <stdlib.h>
int main(void){
    int k;
    scanf("%d", &k);
    char data[10000];
    //gets(data);
    fgets(data,10000,stdin);
    fgets(data,10000,stdin);
    for(int i = 0; data[i] != '\0'; i++)
    {
        if((data[i] >= 65 && data[i] <= 90) || (data[i] >= 97 && data[i] <= 122))
        {
            int now = data[i] - (data[i] >= 97 ? 97 : 65);
            now += k;
            //printf("%d ", now);
            if(now < 0) now = now + abs(now-1) / 26 * 26 + 26;
            //printf("%d\n", now);
            data[i] = (data[i] >= 97 ? 97 : 65) + now % 26;
        }
    }
    printf("%s", data);
    return 0;
}
