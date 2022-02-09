#include <stdio.h>
#define f(i,s,c) for(int i = s; i < c; i++)
#define BN 0
#define WN 1
#define TN 2
#define GN 3
#define MN 4
#define SN 5
#define IN 6

int main () {
    int thing[7], SL[6] = {0,0,3,5,7,10}, IL[6] = {0,0,30,50,70,100}, cont, mny = 0;
    f(i, 0, 7)
    {
        scanf("%d", &thing[i]);
        thing[i] *= 1000;
    }
    scanf("%d", &cont);
    f(i, 0, cont)
    {
        char now[4];
        int s, i;
        scanf("%s %d/%d\n", now, &s, &i);
        switch(now[0])
        {
            	case 'G':
                {
                    if(now[1] == 'T')
                    {
                        mny += 45;
                        thing[TN] -= 250;
                        thing[GN] -= 250;
                    }
                    else
                    {
                        mny += 20;
                        thing[GN] -= 500;
                    }
                    break;
                }
                case 'B':
                {
                    if(now[1] == 'M')
                    {
                        mny += 35;
                        thing[BN] -= 200;
                        thing[MN] -= 300;
                    }
                    else
                    {
                        mny += 20;
                        thing[BN] -= 500;
                    }
                    break;
                }
                case 'T':
                {
                    if(now[1] == 'M')
                    {
                        mny += 45;
                        thing[TN] -= 200;
                        thing[MN] -= 300;
                    }
                    else
                    {
                        mny += 30;
                        thing[TN] -= 500;
                    }
                    break;
                }
                case 'W':
                {
                    if(now[1] == 'T')
                    {
                        mny += 40;
                        thing[WN] -= 150;
                        thing[TN] -= 350;
                    }
                    else if(now[1] == 'M')
                    {
                        mny += 30;
                        thing[WN] -= 200;
                        thing[MN] -= 300;
                    }
                    else
                    {
                        mny += 15;
                        thing[WN] -= 500;
                    }
                    break;
                }
        }
        thing[SN] -= SL[s];
        thing[IN] -= IL[i];
    }
    f(i, 0, 7)
    {
        printf("%d ", thing[i]);
    }
    printf("\n%d", mny);
    return 0;
}
