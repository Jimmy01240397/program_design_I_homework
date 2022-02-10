void recovering_order(char *order, char **result) {
    *result = malloc(1000000);
    memset(*result, 0, 1000000);
    for(char *token = strtok(order, ":"); token; token = strtok(NULL, ":"))
    {
        char tmp[MAX_NAME_LEN] = {0};
        int cont = 100000;
        for(int i = 0; i < GOODS_SIZE; i++)
        {
            if(strstr(names[i], token))
            {
                if(cont > strstr(names[i], token) - names[i])
                {
                    strcpy(tmp, names[i]);
                    cont = strstr(names[i], token) - names[i];
                }
                else if(cont == strstr(names[i], token) - names[i])
                {
                    if(strlen(names[i]) < strlen(tmp))
                    {
                        strcpy(tmp, names[i]);
                        cont = strstr(names[i], token) - names[i];
                    }
                    else if(strlen(names[i]) == strlen(tmp) && strcmp(names[i], tmp) < 0)
                    {
                        strcpy(tmp, names[i]);
                        cont = strstr(names[i], token) - names[i];
                    }
                }
            }
        }
        strcat(*result, tmp);
        strcat(*result, "+");
    }
    //printf("%s\n", *result);
    while((*result)[strlen(*result) - 1] == '+')
    {
        (*result)[strlen(*result) - 1] = 0;
    }
    return;
}
