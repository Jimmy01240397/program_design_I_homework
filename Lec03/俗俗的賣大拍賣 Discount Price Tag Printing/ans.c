#include<stdio.h>

int main () {
	int a,b;
    scanf("%d%d",&a,&b);
    float ans = (float)b * (1 - (float)a / (float)100);
    printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n\\%7d%%off!    \\\n\\ Before  $%5d \\\n\\ After   $%5.2f \\\n\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n", a,b,ans);
    return 0;
}
