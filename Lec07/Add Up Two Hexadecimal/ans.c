#include <stdio.h>

int main(void){
    unsigned int m,n, ans;
    scanf("%X%X", &m,&n);
    ans = m + n;
    unsigned short int check = ans;
    if(ans != (unsigned int)check)
        printf("OVERFLOW!");
    else
        printf("%d", ans);
    return 0;
}
