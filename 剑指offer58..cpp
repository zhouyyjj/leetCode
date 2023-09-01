char* reverse(char* s, int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start++] = s[end];
        s[end--] = temp;
    }
    return s;
}
char* reverseLeftWords(char* s, int n){
    int len = strlen(s);
    //��תǰ n ���ַ�
    s = reverse(s, 0, n - 1);
    //��ת k ��ĩβ���ַ�
    s = reverse(s, n, len - 1);
    //��ת�����ַ���
    s = reverse(s, 0, len - 1);
    return s;
}

