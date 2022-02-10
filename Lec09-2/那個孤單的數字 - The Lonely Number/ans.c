#include<stdio.h>
#include<string.h>
#define f(i, s, c) for(int i = s; i < c; i++)

int F(int* list, int cont)
{
    if(cont == 1) return list[0];
    f(i, 0, cont)
    {
        f(k, i + 1, cont)
        {
            f(j, k + 1, cont)
            {
                int a,b,c;
                if(list[i] < list[k] && list[i] < list[j])
                {
                    a = list[i];
                    b = list[k] < list[j] ? list[k] : list[j];
                    c = list[k] > list[j] ? list[k] : list[j];
                }
                else if(list[k] < list[j])
                {
                    a = list[k];
                    b = list[i] < list[j] ? list[i] : list[j];
                    c = list[i] > list[j] ? list[i] : list[j];
                }
                else
                {
                    a = list[j];
                    b = list[i] < list[k] ? list[i] : list[k];
                    c = list[i] > list[k] ? list[i] : list[k];
                }
                if(a + b == c)
                {
                        //printf("[%d,%d,%d]\n", a,b,c);
                        //printf("[");
                    int nowlist[cont - 3];
                    for(int x = 0, nowcont = 0; x < cont; x++)
                    {
                        if(x != i && x != j && x != k)
                        {
                            nowlist[nowcont] = list[x];
                            //printf("%d,", nowlist[nowcont]);
                            nowcont++;
                        }
                    }
                    //printf("]\n");
                    int ans = F(nowlist, cont - 3);
                    if(ans)
                    {
                        return ans;
                    }
                }
            }
        }
    }
    return 0;
}

int main () {
    int cont;
    scanf("%d", &cont);
    int data[cont];
    f(i, 0, cont)
    {
        scanf("%d", &data[i]);
    }
    printf("%d", F(data, cont));
    return 0;
}