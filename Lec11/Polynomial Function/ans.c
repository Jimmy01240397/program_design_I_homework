#include <math.h>
int* poly(int* A, int* B, int* C) {
    static int ans = 0;
	if(A != NULL) ans += pow(*A, 3);
    if(B != NULL) ans += pow(*B, 2);
    if(C != NULL) ans += *C;
    return &ans;
}