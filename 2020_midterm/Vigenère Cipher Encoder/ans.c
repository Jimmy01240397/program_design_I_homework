#include <stdio.h>
#include <string.h>
int main(void){
    int n;
    scanf("%d",&n);
    char key[n + 1],data[1000000];
    scanf("%s",key);
    fgets(data, 999998, stdin);
    fgets(data, 999998, stdin);
    int len = strlen(data);
    for(int i = 0,de = 0; i < len; i++)
    {
        if(data[i] >= 'A' && data[i] <= 'Z')
        {
            data[i] = ((data[i] - 'A' + (key[(i-de) % n] - 'a')) % 26) + 'A';
        }
        else if(data[i] >= 'a' && data[i] <= 'z')
        {
            data[i] = ((data[i] - 'a' + (key[(i-de) % n] - 'a')) % 26) + 'a';
        }
        else
        {
            de++;
        }
    }
    printf("%s", data);
    return 0;
}

