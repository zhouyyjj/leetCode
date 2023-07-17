char * removeDuplicates(char * s){
    int len=strlen(s);
    char* stack=malloc(sizeof(char) * (len+1));
    int top=0;
 
    for(int i=0;i<len;i++)
    {
        if(top>0 && stack[top-1]==s[i])//���˵�һ������ͬ�͵���
        {
            top--;
        }
        else//����ͬ����ջ
        {
            stack[top]=s[i];
            top++;
        }
    }

    stack[top]='\0';

    return stack;
}
