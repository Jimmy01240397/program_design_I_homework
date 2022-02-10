void add(char a[], char b[], char res[]){
	int lena = strlen(a), lenb = strlen(b), len = lena > lenb ? lena : lenb, c = 0, alllen;
    for(int i = 0; i < len; i++)
    {
        char now[5] = {0};
        sprintf(now , "%d", (i < lena ? a[lena - i - 1] - '0' : 0) + (i < lenb ? b[lenb - i - 1] - '0' : 0) + c);
        if(strlen(now) > 1)
        {
            c = (now[0] - '0');
            res[i] = now[1];
        }
        else
        {
            c = 0;
            res[i] = now[0];
        }
    }
    if(c > 0)
    	res[len] = c + '0';
    else
        res[len] = 0;
    res[len + 1] = 0;
    alllen = strlen(res);
    for(int i = 0; i < alllen / 2; i++)
    {
        char tmp = res[i];
        res[i] = res[alllen - i - 1];
        res[alllen - i - 1] = tmp;
    }
}
