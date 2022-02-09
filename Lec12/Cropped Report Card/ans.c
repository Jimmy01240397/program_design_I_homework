int *report_card (int *s) {
    int* ans, *tmpar;
    int cont = 0, tmpcont = 0, sum = 0, tmpsum = 0;
    for(int i = 0; ; i++)
    {
        if(s[i] >= 60)
        {
            if(tmpcont == 0)
                tmpar = &s[i];
            tmpsum+=s[i];
            tmpcont++;
        }
        else if(tmpcont > 0)
        {
            if(cont < tmpcont)
            {
            	ans = tmpar;
                cont = tmpcont;
                sum = tmpsum;
            }
            else if(cont == tmpcont && sum < tmpsum)
            {
                ans = tmpar;
                cont = tmpcont;
                sum = tmpsum;
            }
            tmpar = NULL;
            tmpcont = 0;
            tmpsum = 0;
        }
        if(s[i] == -1)
            break;
    }
    ans[cont] = -1;
    return ans;
}