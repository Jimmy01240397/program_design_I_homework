#include<stdio.h>
#include<string.h>
int main () {
    int plan[26];
    int cont;
    memset(plan, 0, sizeof(int)*26);
    for(scanf("%d", &cont); cont--; )
    {
        int box;
        char in;
        scanf("%d %c", &box, &in);
        if(in - 65 < 26)
        {
        	plan[in - 65] = box;
        }
    }
    for(int i = 0; i < 26; i++)   
    {
        if(plan[i])
        {
            printf("Plan %c is in box %d.\n", (char)i+65, plan[i]);
        }
        else
        {
            printf("Not found plan %c.\n",(char)i+65);
        }
    }
    return 0;
}
