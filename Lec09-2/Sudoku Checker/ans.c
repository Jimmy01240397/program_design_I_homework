void check_sudoku(int grid_p[][NUM]){
    int data[9][9] = {0};
	for(int i = 0; i < 9; i++)
    {
        for(int k = 0; k < 9; k++)
        {
            for(int j = 0; j < 9; j++)
            {
            	if(grid_p[i][k] == grid_p[i][j] && k != j)
                {
                        data[i][k] = 1;
                        data[i][j] = 1;
                }
            }
            for(int j = 0; j < 3; j++)
            {
                for(int j2 = 0; j2 < 3; j2++)
                {
                    if(grid_p[i][k] == grid_p[(i / 3)*3 + j][(k / 3)*3 + j2] && !(i == (i / 3)*3 + j && k == (k / 3)*3 + j2))
                    {
                            data[i][k] = 1;
                            data[(i / 3)*3 + j][(k / 3)*3 + j2] = 1;
                    }
                }
            }
            for(int j = 0; j < 9; j++)
            {
            	if(grid_p[i][k] == grid_p[j][k] && i != j)
                {
                        data[i][k] = 1;
                        data[j][k] = 1;
                }
            }
        }
    }
    for(int i = 0; i < 9; i++)for(int k = 0; k < 9; k++)
    {
        if(data[i][k])
        {
            printf("(%d,%d)\n", i, k);
        }
    }
}