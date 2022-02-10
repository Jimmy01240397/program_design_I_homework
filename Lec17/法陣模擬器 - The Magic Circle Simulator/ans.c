
typedef void** linkedlist;

linkedlist lnlistget(linkedlist alldata, int index)
{
    int check = index < 0;
    index = abs(index);
    for(int i = 0; i < index; i++)
    {
        if(!alldata) return NULL;
        alldata = ((linkedlist)alldata)[check ? 0 : 2];
    }
    return alldata;
}

linkedlist lnlisthead(linkedlist alldata)
{
    linkedlist head = alldata;
    for(; alldata[0] && head != alldata[0]; alldata = alldata[0]){}
    return alldata;
}

linkedlist lnlistend(linkedlist alldata)
{
    linkedlist head = alldata;
    for(; alldata[2] && head != alldata[2]; alldata = alldata[2]){}
    return alldata;
}

int lnlistlen(linkedlist alldata)
{
    int len;
    linkedlist head = alldata, checkhead = NULL;
    for(len = 0; alldata && alldata != checkhead; alldata = alldata[2], checkhead = head, len++){}
    return len;
}

linkedlist lnlistadd(linkedlist* alldata, void* data)
{
    void** nowdata = malloc(sizeof(void*) * 3);
    nowdata[0] = NULL;
    nowdata[1] = data;
    nowdata[2] = NULL;
    if(*alldata)
    {
        linkedlist now = *alldata;
        linkedlist head = now;
        for(; now[2] && head != now[2]; now = now[2]){}
        now[2] = nowdata;
        nowdata[0] = now;
    }
    else
    {
        *alldata = nowdata;
    }
    return nowdata;
}

linkedlist lnlistremove(linkedlist* alldata, int index)
{
    linkedlist now = *alldata;
    linkedlist a = lnlistget(now, index - 1), b = a ? a[2] : lnlistget(now, index), c = b ? b[2] : lnlistget(now, index + 1);
    if(a) a[2] = c;
    if(c) c[0] = a;
    if(now == b || (a == NULL && c == NULL)) *alldata = c;
    if(a == b && b == c) *alldata = NULL;
    if(b) free(b);
    return c;
}

linkedlist lnlistinsert(linkedlist* alldata, void* data, int index)
{
    linkedlist a = lnlistget(*alldata, index - 1), b = a ? a[2] : lnlistget(*alldata, index);
    linkedlist nowdata = malloc(sizeof(void*) * 3);
    nowdata[0] = a;
    nowdata[1] = data;
    nowdata[2] = b;
    if(a) a[2] = nowdata;
    if(b) b[0] = nowdata;
    if(!index) *alldata = nowdata;
    return nowdata;
}

void lnlistloopup(linkedlist alldata)
{
    linkedlist head = lnlisthead(alldata), mend = lnlistend(alldata);
    if(head) head[0] = mend;
    if(mend) mend[2] = head;
}

void lnlistdisloopup(linkedlist alldata)
{
    linkedlist mend = lnlistend(alldata);
    if(alldata) alldata[0] = NULL;
    if(mend) mend[2] = NULL;
}

void lnlistswap(linkedlist a, linkedlist b)
{
    void* tmp = a[1];
    a[1] = b[1];
    b[1] = tmp;
}

void lnlistqsort(linkedlist alldata, int cont, int (*cmp)(const void*, const void*)) {
    if(cont <= 1) return;
    int s = 0;
    linkedlist nows = lnlistget(alldata, s), nowhigh = lnlistget(alldata, cont - 1);
    for(linkedlist a = nows; a; a = lnlistget(a, 1))
    {
        if(cmp(a[1], nowhigh[1]) < 0)
        {
            lnlistswap(a, nows);
            nows = lnlistget(nows, 1);
            s++;
        }
    }
    lnlistswap(nowhigh, nows);
    nows = lnlistget(nows, 1);
    lnlistqsort(alldata, s, cmp);
    lnlistqsort(nows, cont - (s + 1), cmp);
}

enum orb_type changetoorb(char now)
{
    switch(now)
    {
        case 'R':
            return O_RED;
        case 'B':
            return O_BLUE;
        case 'G':
            return O_GREEN;
        case 'Y':
            return O_YELLOW;
        case 'C':
            return O_CLONE;
        case 'D':
            return O_DYSON;
        case 'E':
            return O_EXPAND;
        case 'F':
            return O_FLOAT;
    }
    return O_UNSET;
}

char changetochar(enum orb_type now)
{
    switch(now)
    {
        case O_RED:
            return 'R';
        case O_BLUE:
            return 'B';
        case O_GREEN:
            return 'G';
        case O_YELLOW:
            return 'Y';
        case O_CLONE:
            return 'C';
        case O_DYSON:
            return 'D';
        case O_EXPAND:
            return 'E';
        case O_FLOAT:
            return 'F';
    }
    return '\0';
}

// Allocate memory for array of list heads
struct head_t *alloc_list_heads(int size){
    return malloc(size * sizeof(struct head_t));
}

linkedlist data = NULL;

// Read input and Initialize array of linked-lists
void init_head_arr(struct head_t *arr, int size){
    //getchar();
    for(int i = 0; i < size; i++)
    {
        arr[i].orb = changetoorb(getchar());
        arr[i].head = NULL;
        data = lnlistadd(&data, &arr[i]);
    }
    data = lnlisthead(data);
    lnlistloopup(data);
    getchar();
}

struct node_t* copystems(struct node_t* target)
{
    struct node_t* now = NULL, **putfor = &now;
    for(; target; target = target->next)
    {
        *putfor = malloc(sizeof(struct node_t));
        (*putfor)->orb = target->orb;
        (*putfor)->next = NULL;
        putfor = &((*putfor)->next);
    }
    return now;
}

void insert_nextwithnote(struct head_t *arr, int size, struct node_t * nownode){
    struct head_t* nowdata = data[1];
    struct node_t **use;
    for(use = &(nowdata->head); *use && (*use)->orb != O_FLOAT; use = &((*use)->next)) {}
    if(*use && (*use)->orb == O_FLOAT) use = &(nowdata->head);
    nownode->next = *use;
    *use = nownode;
}

// Insert the next orb onto the magic circle
void insert_next(struct head_t *arr, int size, const char c){
    enum orb_type now = changetoorb(c);
    struct head_t* nowdata = data[1];
    struct node_t **use;
    for(use = &(nowdata->head); *use && (*use)->orb != O_FLOAT; use = &((*use)->next)) {}
    if(*use && now == O_FLOAT && (*use)->orb == O_FLOAT)
    {
        data = lnlistget(data, 1);
        return;
    }
    else if(*use && (*use)->orb == O_FLOAT) use = &(nowdata->head);
    struct node_t *nownode = malloc(sizeof(struct node_t));
    nownode->next = *use;
    *use = nownode;
    (*use)->orb = now;

    //print_magic_circle(arr, size);
    //printf("\n\n");

    switch(now)
    {
    case O_CLONE:
        {
            int cont = 0;
            for(int i = 0; i < size; i++)
            {
                for(struct node_t* target = ((struct head_t*)lnlistget(data, i)[1])->head; target; target = target->next)
                {
                    if (target->orb == O_CLONE) cont++;
                }
            }
            ((struct head_t*)lnlistget(data, -cont)[1])->head = copystems(nowdata->head);
            break;
        }
    case O_EXPAND:
        {
            for(int i = 0; i < size; i++)
            {
                insert_next(arr, size, changetochar(nowdata->orb));
            }
            break;
        }
    case O_DYSON:
        {
            for(int i = 1; i < size; i++)
            {
                struct node_t **target;
                struct head_t * head = lnlistget(data, i)[1];
                int change = 0;
                for(target = &(head->head); *target; target = (change ? target : &((*target)->next)))
                {
                    change = 0;
                    if((*target)->orb == nowdata->orb)
                    {
                        struct node_t *ans = *target;
                        *target = (*target)->next;
                        change = 1;
                        insert_nextwithnote(arr, size, ans);
                        //print_magic_circle(arr, size);
                        //printf("\n\n");
                    }
                }
            }
            break;
        }
    }
    data = lnlistget(data, 1);
    return;
}
