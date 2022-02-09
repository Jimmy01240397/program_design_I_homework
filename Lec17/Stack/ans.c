void push(struct element **top_p, int data) {
    struct element * now = malloc(sizeof(struct element));
    now->data = data;
    now->next = *top_p;
    *top_p = now;
}

struct element *pop(struct element **top_p) {
    struct element *ans = *top_p;
    *top_p = ans->next;
    return ans;
}