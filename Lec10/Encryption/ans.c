#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>
#define f(i,s,c) for(int i = s; i < c; i++)
void move(char* data, int index, char lors, int moveindex)
{
    if(moveindex < 0) moveindex = abs(moveindex / 26 - 1) * 26 + moveindex;
    moveindex = moveindex % 26;
    if(lors != '\0') data[index] = (char)(data[index] - lors + moveindex) % 26 + lors;
}

void swapbase(char* str, int n)
{
    int len = strlen(str);
    n = n % len;
    char tmp1[n];
    char tmp2[len - n];
    strncpy(tmp1, str, n);
    strncpy(tmp2, &str[n], len - n);
    strncpy(&str[len - n], tmp1, n);
    strncpy(str, tmp2, len - n);
}

void swap(char* str)
{
    int len = strlen(str);
    swapbase(str, len/2);
}

void rotate(char* str, int d)
{
    int len = strlen(str);
    d = d > 0 ? d : len + d;
    swapbase(str, len - d);
}

void railfence(char* str, char* key)
{
    int keylen = strlen(key);
    int len = strlen(str);
    f(i, 0, len / keylen)
    {
        char* now = &str[i * keylen];
        char tmp[keylen];
        f(k, 0, keylen)
        {
            tmp[key[k] - '1'] = now[k];
        }
        strncpy(now, tmp, keylen);
    }
}

void caesar(char* str, int k)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        move(str, i, str[i] >= 'A' && str[i] <= 'Z' ? 'A' : (str[i] >= 'a' && str[i] <= 'z' ? 'a' : '\0'), k);
    }
}

void trithemius(char* str, char upordown, int n)
{
    n = n % 26;
    int datalen = strlen(str);
    
    for(int i = 0,delindex = 0; i < datalen; i++)
    {
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) delindex++;
        move(str, i, str[i] >= 'A' && str[i] <= 'Z' ? 'A' : (str[i] >= 'a' && str[i] <= 'z' ? 'a' : '\0'), n + (upordown == 'a' ? 1 : -1) * (i - delindex));
    }
}

void vigenere(char* str, char* key)
{
    int len = strlen(str);
    int keylen = strlen(key);
    for(int i = 0,delindex = 0; i < len; i++)
    {
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) delindex++;
        move(str, i, str[i] >= 'A' && str[i] <= 'Z' ? 'A' : (str[i] >= 'a' && str[i] <= 'z' ? 'a' : '\0'), (key[(i-delindex) % keylen] - 'a'));
    }
}

int main () {
    int command;
    char data[70];
    scanf("%d", &command);
    getchar();
    fgets(data, 67, stdin);
    int len = strlen(data);
    if(data[len - 1] == '\n') data[len - 1] = '\0';
    switch(command)
    {
    case 1:
        {
            swap(data);
            char tmp = data[len/2];
            data[len/2] = '\0';
            caesar(data, 13);
            data[len/2] = tmp;
            vigenere(&data[len/2], "meow");
            rotate(data, -3);
            break;
        }
    case 2:
        {
            rotate(data, 11);
            trithemius(data, 'a', 74);
            char tmp = data[len/2];
            data[len/2] = '\0';
            rotate(data, 1);
            data[len/2] = tmp;
            rotate(&data[len/2], 3);
            railfence(data, "43127658");
            break;
        }
    case 3:
        {
            railfence(data, "3241");
            char tmp = data[len/2];
            data[len/2] = '\0';
            caesar(data, 8);
            data[len/2] = tmp;
            railfence(&data[len/2], "18436572");
            swap(data);
            trithemius(data, 'd', 602);
            rotate(data, 7);
            break;
        }
    case 4:
        {
            char tmp = data[len/2];
            data[len/2] = '\0';
            vigenere(data, "vigenere");
            swap(data);
            trithemius(data, 'a', 3);
            data[len/2] = tmp;
            rotate(&data[len/2], -24);
            rotate(data, 19);
            break;
        }
    case 5:
        {
            railfence(data, "31764528");
            char tmp = data[len/2];
            data[len/2] = '\0';
            caesar(data, 10);
            data[len/2] = tmp;
            railfence(&data[len/2], "2413");
            swap(data);
            trithemius(data, 'a', 52);
            rotate(data, 7);
            break;
        }
    }
    printf("%s", data);
    return 0;
}
