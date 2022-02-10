#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define f(i, s, c) for(int i = s; i < c; i++)
int main () {
    char str[1030] = {0};
    fgets(str, 1029, stdin);
    int len = strlen(str);
    if(str[len-1] == '\n') str[len-1] = '\0';
    len--;
    int cont;
    scanf("%d", &cont);
    getchar();
    while(cont--)
    {
        char command[50] = {0};
        fgets(command, 49, stdin);
        if(strstr(command, "PRINT"))
        {
            printf("%s\n", str);
        }
        else if(strstr(command, "REVERSE"))
        {
            char tmp[len];
            f(i, 0, len)
            {
                tmp[len - i - 1] = str[i];
            }
            strncpy(str, tmp, len);
            printf("%s\n", str);
        }
        else if(strstr(command, "TO_LOWER"))
        {
            f(i, 0, len)
            {
                str[i] = tolower(str[i]);
            }
            printf("%s\n", str);
        }
        else if(strstr(command, "TO_UPPER"))
        {
            f(i, 0, len)
            {
                str[i] = toupper(str[i]);
            }
            printf("%s\n", str);
        }
        else if(strstr(command, "REMOVE"))
        {
            int comlen = strlen(command);
            char rmchar = command[comlen - 2];
            int now = 0;
            f(i, 0, len)
            {
                if(str[i] != rmchar)
                {
                    str[now] = str[i];
                    now++;
                }
            }
            str[now] = '\0';
            printf("%s\n", str);
        }
        else if(strstr(command, "COMPRESS"))
        {
            char tmp[100000] = {0};
            char now = str[0];
            int n = 0;
            int tmplen = strlen(tmp);
            f(i, 0, len + 1)
            {
                if(i != 0 && str[i] != now)
                {
                    char nowtmp[30] = {0};
                    sprintf(nowtmp, "-%c%d", now, n);
                    strcpy(&tmp[tmplen], nowtmp);
                    tmplen = strlen(tmp);
                    now = str[i];
                    n = 0;
                }
                n++;
            }
            strncpy(str, tmp, tmplen);
            str[tmplen] = '\0';
            printf("%s\n", str);
        }
        len = strlen(str);
    }
    return 0;
}
