#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
    char key[1100], str[11000];
    fgets(key, 1050, stdin);
    fgets(str, 10050, stdin);
    int len = strlen(str);
    if(str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    int keylen = strlen(key);
    if(key[keylen - 1] == '\n')
    {
        key[keylen - 1] = '\0';
        keylen--;
    }
    for(int i = 0; i < len; i++)
    {
        printf("%c", (str[i] ^ key[i % keylen]));
    }
    return 0;
}
