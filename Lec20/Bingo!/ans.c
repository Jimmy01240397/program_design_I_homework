int bingo (unsigned char num[])
{
    int cont = 0, col[8] = {1,1,1,1,1,1,1,1}, x = 1, y = 1;
    for(int i = 0; i < 8; i++)
    {
        int now = 1;
        unsigned char nownum = num[i];
        for(int k = 7; k >= 0; k--)
        {
            now = now && (nownum & 1);
            col[k] = col[k] && (nownum & 1);
            if(i == k) x = x && (nownum & 1);
            if(i == 7 - k) y = y && (nownum & 1);
            nownum = nownum >> 1;
        }
        if(now) cont++;
    }
    for(int i = 0; i < 8; i++)
    {
        if(col[i]) cont++;

    }
    if(x) cont++;
    if(y) cont++;
    return cont;
}
