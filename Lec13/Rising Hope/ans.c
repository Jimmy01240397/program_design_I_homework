int rising_hope(char *R) {
	int len = strlen(R);
    int ans = 0;
    for(int i = 0; i < len; i++)
    {
        ans += R[i] == 'P' ? 1 : (R[i] == 'N' ? -1 : 0);
    }
    return ans;
}
