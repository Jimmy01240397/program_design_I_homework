#include <stdlib.h>
int cmp(const void* a, const void* b)
{
    return **(int **)b - **(int **)a;
}
void sort_pointers(int **ptr_arr, int *arr, int size)
{
    for(int i = 0; i < size; i++) ptr_arr[i] = &arr[i];
    qsort(ptr_arr, size, sizeof(int*), cmp);
}