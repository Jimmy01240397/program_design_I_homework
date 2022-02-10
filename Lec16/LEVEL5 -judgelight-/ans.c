#include<string.h>
int cmp(const void *a, const void *b) {
    int n = (*(struct ESPer*)a).level - (*(struct ESPer*)b).level;
	if(n == 0) return strcmp((*(struct ESPer*)a).name, (*(struct ESPer*)b).name);
    return n;
}

void sort_level(struct ESPer *arr, int length) {
    qsort(arr, length, sizeof(struct ESPer), cmp);
}
