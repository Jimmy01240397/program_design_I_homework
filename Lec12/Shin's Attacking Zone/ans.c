void convert_to_polar(int *coords, int N)
{
	int (*data)[2] = (int (*)[2])coords;
    for(int i = 0; i < N; i++)
    {
        double dir = (data[i][0] | data[i][1]) != 0 ? (atan((double)data[i][1] / (double)data[i][0]) * (180 / M_PI)) : 0;
        if(dir < 0)
        {
            dir += 360;
            if(data[i][0] < 0)
                dir += 180;
        }
        else
        {
            if(data[i][0] < 0)
                dir += 180;
        }
        dir = dir - (((int)(dir / 360)) * 360);
        printf("%.2lf %.2lf\n", dir, pow(pow(data[i][1], 2) + pow(data[i][0], 2), 0.5));
    }
}
