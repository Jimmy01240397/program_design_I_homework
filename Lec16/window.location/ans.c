char* newclearstring()
{
    char *ans = malloc(sizeof(char));
    *ans = 0;
    return ans;
}

void setstring(char** strpointer, char** lastpointer, char* checkstr, char* checkchar, int mvindex)
{
    *strpointer = strstr(*lastpointer, checkstr);
    if(*strpointer)
    {
        char *tmp = *strpointer;
        tmp[0] = '\0';
        int bad = 0;
        for(int i = 0; i < strlen(checkchar); i++)
        {
            char nowtmp[2] = {checkchar[i], '\0'};
            bad = bad || strstr(*lastpointer, nowtmp);
        }
        if(bad)
        {
            tmp[0] = checkstr[0];
            *strpointer = newclearstring();
        }
        else
        {
            *strpointer = &(*strpointer)[mvindex];
            *lastpointer = *strpointer;
        }
    }
    else
        *strpointer = newclearstring();
}

Location *parse_url(char *url)
{
    if(url[strlen(url) - 1] == '\n') url[strlen(url) - 1] = '\0';
    Location *x = malloc(sizeof(Location));
    (*x).port = 0;

    char *port, *last = url;

    (*x).protocol = url;
    setstring(&(*x).host, &last, "://", "", 3);
    setstring(&port, &last, ":", "/?#", 1);
    setstring(&(*x).pathname, &last, "/", "?#", 1);
    setstring(&(*x).search, &last, "?", "#", 1);
    setstring(&(*x).hash, &last, "#", "", 1);
    if(port[0]) (*x).port = atoi(port);
    return x;
}
