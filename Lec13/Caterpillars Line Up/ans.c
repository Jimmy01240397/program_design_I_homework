#include <string.h>
void swap(char *a, char *b) {
	char tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverse_caterpillar(char *l, char *r) {
	int len = (int)(r - l) + 1;
    for(int i = 0; i < len / 2; i++)
    {
        swap(&l[len - i - 1], &l[i]);
    }
}

void lineup_again(char line[]) {
	int len = strlen(line);
    char *l = NULL, *r = NULL;
    for(int i = 0; i < len; i++)
    {
        if(line[i] == 'A' || line[i] == 'Z')
        {
            if(l == NULL) l = &line[i];
            else if(r == NULL) r = &line[i];

            if(l != NULL && r != NULL)
            {
                if(*l == 'Z')
                    reverse_caterpillar(l, r);
                l = NULL;
                r = NULL;
            }
        }
    }
}
