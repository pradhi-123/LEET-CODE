class Solution {
    public int minimumNumbers(int num, int k) {
        int i;
        int m=0;
        if(num==0)
            return 0;
        if(k==0 && k%10!=num%10)
            return -1;
        for(i=k;i<=num;i+=k)
        {
            m++;
            if(i%10==num%10)
                break;
        }
        if(i>num)
            return -1;
        return m;
    }
}