#include <math.h>
int* Returns(int n) {
	int * ans = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        ans[i] = pow(i, 2);
    }
    return ans;
}
