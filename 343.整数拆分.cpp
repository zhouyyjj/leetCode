int integerBreak(int n)
{
    int nums[60];//利用大数组储存每个数对应的最大乘积
    nums[1] = 1;
    if(n == 2)
        return 1;

    nums[2] = 2; //在未遇到n之前，nums[i]中存储的是max(maxproduct, i);
    for(int i = 3; i<=n; i++)
    {
        int maxpdct = nums[i-1];
        for(int j = 2; j<=i/2+1; j++)//“j<=i/2+1”剪枝
        {
            int pdct = nums[j]*nums[i-j]; //计算乘积
            maxpdct = maxpdct >= pdct ? maxpdct : pdct;
        }
        nums[i] = i==n ? maxpdct : fmax(i, maxpdct);
        //判断是否到达n，如果没有，则存储 i 和 最大乘积 的最大值
    }
    return nums[n];
}

