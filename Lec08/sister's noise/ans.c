#include <stdio.h>
#include <stdlib.h>
#define ff(a, c) for(int a = 0; a < c; a++)
#define max(a, b) a > b ? a : b
int main(void){
    int data[10];
    ff(i, 10)
    {
    	scanf("%d", ((int*)data) + i);
    }
    
    int ans = 0;
    
    ff(i, 10)
    {
        ff(j, i)
        {
    		ans = max(ans, (data[j] + data[i])*abs(j - i));
        }
    }
    printf("%d", ans);
}
