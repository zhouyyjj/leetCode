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
             //等于0是判断是否出现栈为空但是栈里面还有元素的情况
             //stk[top - 1] != ch判断是否相等
            if (top == 0 || stk[top - 1] != ch)
             {
                return false;
            }
            else{
                //top--说明已经匹配上了，开始抵消相同的括号了
                top--;
            }
            
        }
         else
         //这里是入栈
        {
            stk[top++] = s[i];
        }
    }
//top==0说明栈为空，栈为空说明各个符号都进行了正确的匹配
   if(top==0)
   {
       return true;
   }else{
       return false;
   }
}
