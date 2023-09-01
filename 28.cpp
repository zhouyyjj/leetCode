
int strStr(char * haystack, char * needle){
    int l1=strlen(haystack),l2=strlen(needle);
    int flag=0;
    for(int i=0;i<=l1-l2;i++){
        flag=0;
        if(haystack[i]==needle[0]){
            for(int j=1;j<l2;j++){
                if(haystack[i+j]!=needle[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return i;
            }
        }
    }
    return -1;
}


