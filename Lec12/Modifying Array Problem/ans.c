void modify_array(int *p) {
    p = (int*)(p - (SIZE / 2));
	int mode = p[0];
    p = &p[1];
    for(int i = 0; i < SIZE; i++)
    {
        switch(mode)
        {
            case 1:
                {
                    if(i % 2 == 0)
                        p[i] += 10;
                    break;
                }
            case 2:
                {
                    if(i % 3 == 0)
                        p[i] *= 8;
                    break;
                }
            case 3:
                {
                    if(i % 5 == 0)
                        p[i] -= 2;
                    break;
                }
        }
    }
    return;
}