#include<stdio.h>
#include<string.h>
int main () {
    int life, de, len, goodcmd, allcmd = 0;
    char data[1000010] = {0};
    scanf("%d%d", &de, &life);
    getchar();
    fgets(data, 1000000, stdin);
    len = strlen(data);
    for(int i = 0; i < len; i++)
    {
     	if(data[i] == ',') data[i] = '.';
        else if(data[i] == '\n') data[i] = '\0';
    }
    len = strlen(data);
    for(char *now = strtok(data, "."); now != NULL; now = strtok(NULL, "."))
    {
        int isdef = 0;
        if(strstr(now, "PATA PATA PATA PON"))
        {
            de--;
            goodcmd++;
        }
        else if(strstr(now, "PON PON PATA PON"))
        {
            if(de <= 3)
            	life--;
            goodcmd++;
        }
        else if(strstr(now, "CHAKA CHAKA PATA PON"))
        {
            isdef = 1;
            de++;
            goodcmd++;
        }

        allcmd = (allcmd + 1) % 10;

        //printf("life: %d, de: %d, isdef: %d, allcmd: %d, goodcmd: %d\n", life, de, isdef, allcmd, goodcmd);

        if(life <= 0)
        {
            printf("YES %d", goodcmd);
            return 0;
        }
        else if(de <= 0)
        {
         	printf("NO %d", life);
            return 0;
        }
        else if(allcmd == 0 && !isdef)
        {
            printf("NO %d", life);
            return 0;
        }
    }
    printf("NO %d", life);
    return 0;
}
