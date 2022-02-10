void spread(char *graph, int row, int col)
{
    char (*nowgraph)[8] = (char (*)[8])graph;
    char now = nowgraph[row][col];
    for(int i = row; i >= 0; i--)
    {
        if(nowgraph[i][col] != 'X' && nowgraph[i][col] != now)
            break;
        nowgraph[i][col] = now;
    }
    for(int i = row; i < 5; i++)
    {
        if(nowgraph[i][col] != 'X' && nowgraph[i][col] != now)
            break;
        nowgraph[i][col] = now;
    }

    for(int i = col; i >= 0; i--)
    {
        if(nowgraph[row][i] != 'X' && nowgraph[row][i] != now)
            break;
        nowgraph[row][i] = now;
    }
    for(int i = col; i < 8; i++)
    {
        if(nowgraph[row][i] != 'X' && nowgraph[row][i] != now)
            break;
        nowgraph[row][i] = now;
    }
}
