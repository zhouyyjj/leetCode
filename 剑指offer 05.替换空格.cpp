char* replaceSpace(char* s){
    int i = 0;
    int j = 0;
    int len = strlen(s);
    char *p = (char*)malloc(sizeof(char) * 3 * 10000);

    for(i = 0; i <len; i++){
        if(' ' == s[i]){
            p[j++] = '%';
            p[j++] = '2';
            p[j++] = '0';
        }
        else{
            p[j] = s[i];
            j++;
        }
    }
    
    p[j] = '\0';

    return p;
}


