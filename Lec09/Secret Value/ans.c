#include <string.h>
#include <math.h>
int getSecret(int n)
{
    if(n < 10) return n;
    char data[15];
    sprintf(data, "%d", n);
	int len = strlen(data);
    int dd = pow(10, (len + 1) / 2);
    int gcddata = gcd(n / dd, n % dd);
    return (int)(((long long)n + (long long)getSecret(gcddata)) % 10007);
}

int gcd(int a, int b)
{
	if(b == 0) return a;
    return gcd(b, a % b);
}
