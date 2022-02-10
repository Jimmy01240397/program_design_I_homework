#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef void** linkedlist;

linkedlist lnlistget(linkedlist alldata, int index)
{
    int check = index < 0;
    index = abs(index);
    for(int i = 0; i < index; i++)
    {
        if(!alldata) return NULL;
        alldata = ((linkedlist)alldata)[check ? 0 : 2];
    }
    return alldata;
}

linkedlist lnlisthead(linkedlist alldata)
{
    linkedlist head = alldata;
    for(; alldata[0] && head != alldata[0]; alldata = alldata[0]){}
    return alldata;
}

linkedlist lnlistend(linkedlist alldata)
{
    linkedlist head = alldata;
    for(; alldata[2] && head != alldata[2]; alldata = alldata[2]){}
    return alldata;
}

int lnlistlen(linkedlist alldata)
{
    int len;
    linkedlist head = alldata, checkhead = NULL;
    for(len = 0; alldata && alldata != checkhead; alldata = alldata[2], checkhead = head, len++){}
    return len;
}

linkedlist lnlistadd(linkedlist* alldata, void* data)
{
    void** nowdata = malloc(sizeof(void*) * 3);
    nowdata[0] = NULL;
    nowdata[1] = data;
    nowdata[2] = NULL;
    if(*alldata)
    {
        linkedlist now = *alldata;
        linkedlist head = now;
        for(; now[2] && head != now[2]; now = now[2]){}
        now[2] = nowdata;
        nowdata[0] = now;
    }
    else
    {
        *alldata = nowdata;
    }
    return nowdata;
}

linkedlist lnlistremove(linkedlist* alldata, int index)
{
    linkedlist now = *alldata;
    linkedlist a = lnlistget(now, index - 1), b = a ? a[2] : lnlistget(now, index), c = b ? b[2] : lnlistget(now, index + 1);
    if(a) a[2] = c;
    if(c) c[0] = a;
    if(now == b) *alldata = c;
    if(b) free(b);
    return c;
}

linkedlist lnlistinsert(linkedlist* alldata, void* data, int index)
{
    linkedlist a = lnlistget(*alldata, index - 1), b = a ? a[2] : lnlistget(*alldata, index);
    linkedlist nowdata = malloc(sizeof(void*) * 3);
    nowdata[0] = a;
    nowdata[1] = data;
    nowdata[2] = b;
    if(a) a[2] = nowdata;
    if(b) b[0] = nowdata;
    if(!index) *alldata = nowdata;
    return nowdata;
}

void lnlistloopup(linkedlist alldata)
{
    linkedlist head = lnlisthead(alldata), mend = lnlistend(alldata);
    if(head) head[0] = mend;
    if(mend) mend[2] = head;
}

void lnlistdisloopup(linkedlist alldata)
{
    linkedlist mend = lnlistend(alldata);
    if(alldata) alldata[0] = NULL;
    if(mend) mend[2] = NULL;
}

void lnlistswap(linkedlist a, linkedlist b)
{
    void* tmp = a[1];
    a[1] = b[1];
    b[1] = tmp;
}

void lnlistqsort(linkedlist alldata, int cont, int (*cmp)(const void*, const void*)) {
    if(cont <= 1) return;
    int s = 0;
    linkedlist nows = lnlistget(alldata, s), nowhigh = lnlistget(alldata, cont - 1);
    for(linkedlist a = nows; a; a = lnlistget(a, 1))
    {
        if(cmp(a[1], nowhigh[1]) < 0)
        {
            lnlistswap(a, nows);
            nows = lnlistget(nows, 1);
            s++;
        }
    }
    lnlistswap(nowhigh, nows);
    nows = lnlistget(nows, 1);
    lnlistqsort(alldata, s, cmp);
    lnlistqsort(nows, cont - (s + 1), cmp);
}

int cmp(char* a, char* b)
{
    char tmpa[200] = {0}, tmpb[200] = {0};
    strcpy(tmpa, a);
    strcpy(tmpb, b);
    for(int i = 0; i < strlen(tmpa); i++)
    {
        tmpa[i] = tolower(tmpa[i]);
    }
    for(int i = 0; i < strlen(tmpb); i++)
    {
        tmpb[i] = tolower(tmpb[i]);
    }
    return strcmp(tmpa, tmpb);
}
int main () {
    linkedlist alldata = NULL;
    int cont;
    scanf("%d", &cont);
    for(int i = 0; i < cont; i++)
    {
        char* nowdata = malloc(sizeof(char) * 200);
        scanf("%s", nowdata);
        alldata = lnlistadd(&alldata, nowdata);
    }
    alldata = lnlisthead(alldata);
    cont = lnlistlen(alldata);
    lnlistqsort(alldata, cont, cmp);
    for(int i = 0; i < cont; i++)
    {
        printf("%s\n", lnlistget(alldata, i)[1]);
    }
    return 0;
}
