void quicksort(int a[], int low, int high) {
	if(low >= high) return;
    int s = low;
	for(int i = low; i < high; i++)
    {
        if(a[i] <= a[high])
        {
        	swap(a[i], a[s]);
            s++;
        }
    }
    swap(a[high], a[s]);
    for(int i = 0; i < size; i++)
    {
        if (i == low) printf("[ ");
        if (i == s) printf("*");
        printf("%d ", a[i]);
        if(i == high) printf("] ");
    }
    printf("\n");
    quicksort(a, low, s - 1);
    quicksort(a, s+1, high);
}

int partition(int a[], int low, int high)
{
    return 0;
}