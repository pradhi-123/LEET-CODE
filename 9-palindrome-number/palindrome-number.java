class Solution {
    public boolean isPalindrome(int x) {
        int n=x;
        int t1=0;
        while(n!=0)
        {
            t1=(t1*10)+(n%10);
            n=n/10;
        }
        if(t1==x && t1>=0)
           return true;
        else
           return false;
    }
}