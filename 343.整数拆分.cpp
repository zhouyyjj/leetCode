int integerBreak(int n)
{
    int nums[60];//���ô����鴢��ÿ������Ӧ�����˻�
    nums[1] = 1;
    if(n == 2)
        return 1;

    nums[2] = 2; //��δ����n֮ǰ��nums[i]�д洢����max(maxproduct, i);
    for(int i = 3; i<=n; i++)
    {
        int maxpdct = nums[i-1];
        for(int j = 2; j<=i/2+1; j++)//��j<=i/2+1����֦
        {
            int pdct = nums[j]*nums[i-j]; //����˻�
            maxpdct = maxpdct >= pdct ? maxpdct : pdct;
        }
        nums[i] = i==n ? maxpdct : fmax(i, maxpdct);
        //�ж��Ƿ񵽴�n�����û�У���洢 i �� ���˻� �����ֵ
    }
    return nums[n];
}

