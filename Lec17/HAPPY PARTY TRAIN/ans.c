int fire(struct Car *head) {
    int len, people;
    head = head->next;
	for(len = 0, people = 0; head && head->passenger + people < head->flammable; people += head->passenger, head = head->next, len++){}
	return len;
}
