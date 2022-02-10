#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define f(i, s, c) for(int i = s; i < c; i++)

int getindex(char t, char* lv, int cont);
int cardtolevel(char* data);
int cmp(const void* a, const void* b);
int straightflush(char (*nowcheck)[3], int* level);
int flush(char (*nowcheck)[3]);
int straight(char (*nowcheck)[3]);
int checkpair(char (*nowcheck)[3], int* level);
int check(char (*nowcheck)[3], int* level);
int peoplecmp(const void* a, const void* b);


char numlv[20] = "23456789tjqka",suitlv[10] = "cdhs";
char data[4][5][3] = {0};

int getindex(char t, char* lv, int cont)
{
    f(i, 0, cont)
    {
        if(lv[i] == t) return i;
    }
    return -1;
}

int cardtolevel(char* data)
{
    return getindex(data[0], numlv, 13) * 4 + getindex(data[1], suitlv, 4);
}

int straightflush(char (*nowcheck)[3], int* level)
{
    int fl = flush(nowcheck), st = straight(nowcheck);
    *level = cardtolevel(nowcheck[0]);
    return fl && st ? 8 : (fl ? fl : (st ? st : 0));
}

int flush(char (*nowcheck)[3])
{
    char now = nowcheck[0][1];
    f(i, 1, 5)
    {
        if(now != nowcheck[i][1]) return 0;
    }
    return 5;
}

int straight(char (*nowcheck)[3])
{
    int now = getindex(nowcheck[0][0], numlv, 13);
    f(i, 1, 5)
    {
        if(now - getindex(nowcheck[i][0], numlv, 13) != 1) return 0;
        now = getindex(nowcheck[i][0], numlv, 13);
    }
    return 4;
}

int checkpair(char (*nowcheck)[3], int* level)
{
    int alllist[13] = {0};
    *level = 0;
    f(i, 0, 5)
    {
        alllist[getindex(nowcheck[i][0], numlv, 13)]++;
    }
    int checking[3] = {0}, checknum[3] = {0};
    f(i, 0, 13)
    {
        if(alllist[i] == 4)
        {
            checking[2]++;
            checknum[2] = i;
        }
        else if(alllist[i] == 3)
        {
            checking[1]++;
            checknum[1] = i;
        }
        else if(alllist[i] == 2)
        {
            checking[0]++;
            checknum[0] = checknum[0] > i ? checknum[0] : i;
        }
    }
    int nownum = -1;
    int anslv = 0;
    if(checking[2])
    {
        anslv = 7;
        nownum = checknum[2];
    }
    else if(checking[1])
    {
        nownum = checknum[1];
        if(checking[0]) anslv = 6;
        else anslv = 3;
    }
    else if(checking[0])
    {
        nownum = checknum[0];
        if(checking[0] == 2) anslv = 2;
        else anslv = 1;
    }
    f(i, 0, 5)
    {
        if(nowcheck[i][0] == numlv[nownum])
        {
            int nowlv = cardtolevel(nowcheck[i]);
            *level = nowlv > *level ? nowlv : *level;
        }
    }
    if(!anslv) *level = cardtolevel(nowcheck[0]);
    return anslv;
}

int check(char (*nowcheck)[3], int* level)
{
    int nowlevel1 = 0, nowlevel2 = 0, st = straightflush(nowcheck, &nowlevel1), pa = checkpair(nowcheck, &nowlevel2);
    *level = st > pa ? nowlevel1 : nowlevel2;
    return st > pa ? st : pa;
}

int peoplecmp(const void* a, const void* b)
{
    int levela = 0,levelb = 0, ac = check(data[*(char*)a - 'A'], &levela), bc = check(data[*(char*)b - 'A'], &levelb);
    if(ac == bc) return levela > levelb ? -1 : 1;
    return ac > bc ? -1 : 1;
}

int cmp(const void* a, const void* b)
{
    if(((char*)a)[0] == ((char*)b)[0]) return getindex(((char*)a)[1], suitlv, 4) > getindex(((char*)b)[1], suitlv, 4) ? -1 : 1;
    return getindex(((char*)a)[0], numlv, 13) > getindex(((char*)b)[0], numlv, 13) ? -1 : 1;
}

int main () {
    char peoples[5] = "ABCD";
    f(i, 0, 4)
    {
        f(k, 0, 5)
        {
            scanf("%s", data[i][k]);
        }
        qsort(data[i], 5, 3, cmp);
    }
    qsort(peoples, 4, sizeof(char), peoplecmp);
    f(i, 0, 4)
    {
        printf("%c ", peoples[i]);
    }
    return 0;
}
