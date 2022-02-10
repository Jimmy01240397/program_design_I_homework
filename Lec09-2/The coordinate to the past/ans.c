#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char data[50][30000];
int cont = 0;
char* F(char* nowdata)
{
    int len = strlen(nowdata);
    if(len <= 1) return nowdata;
    unsigned long long odd = 0, even = 0;
    for(int i = 0; i < len; i++)
    {
        if(nowdata[i] != '\n')
        {
            char usedata[2] = {nowdata[i], 0};
            if(i % 2 == 1)
            {
                odd += strtol(usedata, NULL, 16);
            }
            else
            {
				even += strtol(usedata, NULL, 16);
            }
        }
    }
    sprintf(data[cont], "%llx", odd);
    char* oddans = F(data[cont]);
    cont++;
    sprintf(data[cont], "%llx", even);
    char* evenans = F(data[cont]);
    cont++;
	strcpy(data[cont], oddans);
    strcpy(data[cont] + strlen(oddans), evenans);
    cont++;
    return(data[cont - 1]);
}
int main () {
    fgets(data[cont], 25000, stdin);
    cont++;
    printf("%s", F(data[cont - 1]));
}
