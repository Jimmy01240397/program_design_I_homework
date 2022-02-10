#include <stdio.h>

int main(void){
    int a, max, cont = 1;
    for(scanf("%d", &a), max = a; a != 1; a = a % 2 == 0 ? a / 2 : 3 * a + 1, max = a > max ? a : max, cont++){ /* 好爽 */ }
    printf("%d %d", cont, max);
    return 0;
}
