void alpha_composite(unsigned int image[][SIZE], unsigned int width, unsigned int height, float alpha, int background_color)
{
    for(int i = 0; i < height; i++)
    {
        for(int k = 0; k < width; k++)
        {
            image[i][k] = (image[i][k] * alpha + background_color * 1 * (1 - alpha)) / (alpha + 1 * (1 - alpha));
        }
    }
}
