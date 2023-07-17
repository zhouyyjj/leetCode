char show(char a) {
    if (a == '}') return '{';
    if (a == ']') return '[';
    if (a == ')') return '(';
    return 0;
}

bool isValid(char* s) {
    int n = strlen(s);
    if (n % 2 == 1) {
        return false;
    }
    int stk[n + 1], top = 0;
    for (int i = 0; i < n; i++)
     {
        char ch = show(s[i]);
        if (ch)
         {
             //����0���ж��Ƿ����ջΪ�յ���ջ���滹��Ԫ�ص����
             //stk[top - 1] != ch�ж��Ƿ����
            if (top == 0 || stk[top - 1] != ch)
             {
                return false;
            }
            else{
                //top--˵���Ѿ�ƥ�����ˣ���ʼ������ͬ��������
                top--;
            }
            
        }
         else
         //��������ջ
        {
            stk[top++] = s[i];
        }
    }
//top==0˵��ջΪ�գ�ջΪ��˵���������Ŷ���������ȷ��ƥ��
   if(top==0)
   {
       return true;
   }else{
       return false;
   }
}
