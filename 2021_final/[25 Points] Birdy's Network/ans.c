int cmp(const struct node* a, const struct node* b)
{
    return a->id - b->id;
}

struct node *read_data(int *size) {
    *size = 0;
    struct node *data = malloc(sizeof(struct node) * 1010);
    char nowdata[1000000] = {0};
    for(*size = 0; gets(nowdata); (*size)++)
    {
        if(!nowdata[0]) break;
        char tmp[100000] = {0};
        sscanf(nowdata, "%s -> ", tmp);
        data[*size].id = atoi(tmp);

        int now, nowcont = strlen(tmp) + 4;
        struct node *nownode = &data[*size];
        for(sscanf(&nowdata[nowcont], "%s", tmp), now = atoi(tmp), nowcont += strlen(tmp) + 1; now; sscanf(&nowdata[nowcont], "%s", tmp), now = atoi(tmp), nowcont += strlen(tmp) + 1)
        {
            struct node * newnnode = malloc(sizeof(struct node));
            newnnode->id = now;
            nownode->next = newnnode;
            nownode = newnnode;
        }
        nownode->next = NULL;
    }

    qsort(data, *size, sizeof(struct node), cmp);
    return data;
}
