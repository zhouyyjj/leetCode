char * removeDuplicates(char * s){
    int len=strlen(s);
    char* stack=malloc(sizeof(char) * (len+1));
    int top=0;
 
    for(int i=0;i<len;i++)
    {
        if(top>0 && stack[top-1]==s[i])//除了第一个，相同就弹出
        {
            top--;
        }
        else//不相同就入栈
        {
            stack[top]=s[i];
            top++;
        }
    }

    stack[top]='\0';

    return stack;
}
