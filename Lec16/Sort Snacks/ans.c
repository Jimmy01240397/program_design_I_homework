void sort_snacks(struct snack snacks[], int n) {
	qsort(snacks, n, sizeof(struct snack), cmp);
}

int cmp(const void *a, const void *b) {
    (*(struct snack*)a).value = (double)(*(struct snack*)a).weight / (double)(*(struct snack*)a).price;
    (*(struct snack*)b).value = (double)(*(struct snack*)b).weight / (double)(*(struct snack*)b).price;
	if((*(struct snack*)a).value == (*(struct snack*)b).value)
    {
        int now = (*(struct snack*)a).price - (*(struct snack*)b).price;
        if(!now) return (*(struct snack*)a).id - (*(struct snack*)b).id;
        return now;
    }
    return (*(struct snack*)a).value < (*(struct snack*)b).value ? 1 : -1;
}
