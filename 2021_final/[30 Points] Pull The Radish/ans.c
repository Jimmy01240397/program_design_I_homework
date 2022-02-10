int pull_radish(int *l, int *r, int *pos, int x) {
    int cont = 0;
    for(int * i = pos; i >= l; i-=x)
    {
        if(*i && i != pos)
        {
            cont++;
            (*i)--;
        }
    }
    for(int * i = pos; i <= r; i+=x)
    {
        if(*i && i != pos)
        {
            cont++;
            (*i)--;
        }
    }
    return cont;
}
