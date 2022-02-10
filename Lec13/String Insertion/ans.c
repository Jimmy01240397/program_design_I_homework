void strins(char *P, char *s, char *t) {
    char tmp[MAX_LEN_P] = {0}, *nowPtmp = P, *check = nowPtmp;
	unsigned long long slen = strlen(s), tlen = strlen(t), tmplen = 0;
    for(tmplen = (unsigned long long)check, check = strstr(nowPtmp, s), tmplen = (unsigned long long)check - tmplen; check; tmplen = (unsigned long long)check + slen, check = strstr(nowPtmp, s), tmplen = (unsigned long long)check - tmplen)
    {
        strncat(tmp, nowPtmp, (int)tmplen);
        strncat(tmp, check, (int)slen);
        strncat(tmp, t, (int)tlen);
        nowPtmp = (char *)(nowPtmp + (int)tmplen + (int)slen);
    }
    strncat(tmp, nowPtmp, (int)tmplen);
    strcpy(P, tmp);
}
