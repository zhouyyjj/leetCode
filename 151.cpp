void reverse(char* s, int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start++] = s[end];
        s[end--] = temp;
    }
}

char * reverseWords(char * s){
    // 1. �Ƴ�����ո�
    int len = strlen(s);
    int fast = 0, slow = 0;
    // �Ƴ��ַ���֮ǰ�Ŀո�
    while (s[fast] == ' ') {
        fast++;
    }
    // �Ƴ��ַ����ﵥ�ʼ����Ŀո�
    while (fast < len - 1) {
        if (s[fast] == ' ' && s[fast + 1] == ' ') {
            fast++;
        } else {
            s[slow++] = s[fast++];
        }
    }
    // �Ƴ��ַ�������Ŀո�
    if (s[fast] == ' ') {
        s[slow] = '\0';
    } else {
        s[slow++] = s[fast];
        s[slow] = '\0';
    }

    // 2. ��ת�����ַ���
    reverse(s, 0, slow - 1);

    // 3. ��תÿ������
    for (int i = 0; i < slow; i++) {
        int j = i;
        while (j < slow && s[j] != ' ') {
            j++;
        }
        reverse(s, i, j - 1);
        i = j;
    }

    return s;
}


