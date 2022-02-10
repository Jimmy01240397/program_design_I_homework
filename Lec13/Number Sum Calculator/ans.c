int addition(char str[]){
    int ans = 0;
    for(char *now = strtok(str, "+"); now != NULL; now = strtok(NULL, "+"))
        ans += atoi(now);
    return ans;
}