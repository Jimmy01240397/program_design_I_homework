#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void move(char* data, int index, char lors, long long moveindex)
{
    long long now = 0;
    now = (long long)data[index];
    if(moveindex < 0) moveindex = (long long)abs(moveindex / 26 - 1) * 26 + moveindex;
    moveindex = moveindex % 26;
    if(lors != '\0') data[index] = (char)(now - lors + moveindex) % 26 + lors;
}

int main () {

        long long n;
        char upordown, data[999999];
        scanf("%lld\n%c", &n, &upordown);
        getchar();
        fgets(data, 999990, stdin);
        int datalen = strlen(data);
        long long delindex = 0;
        for(int i = 0; i < datalen; i++)
        {
                if(!((data[i] >= 'A' && data[i] <= 'Z') || (data[i] >= 'a' && data[i] <= 'z'))) delindex++;
                move(data, i, data[i] >= 'A' && data[i] <= 'Z' ? 'A' : (data[i] >= 'a' && data[i] <= 'z' ? 'a' : '\0'), n + (upordown == 'a' ? 1 : -1) * (i - delindex));
        }
        printf("%s", data);
        return 0;
}