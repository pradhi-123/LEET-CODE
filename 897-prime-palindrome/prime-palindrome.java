import java.lang.*;
class Solution {
    int count;
    public int primePalindrome(int n) {
        while(n<Integer.MAX_VALUE)
        {
            if(n==1)
               return 2;
            if(n==2 || n==3)
               return n;
            if(n<=5)
               return 5;
            if(n<=7)
               return 7;
            if(n<=11)
               return 11;
            count=(""+n).length();
            if(count%2==0)
            {
                n=(int)Math.pow(10,count);
               continue;
            }
            
            if(isPallindrome(n)==true && isPrime(n)==true)
                return n;
                n++;
        }
        return 0;
    }

    public boolean isPallindrome(int N)
    {
        int r=0;
        int n=N;
        while(n!=0)
        {
            r=(r*10)+(n%10);
            n=n/10;
        }
        if(r==N)
           return true;
        return false;
    }

    public boolean isPrime(int N)
    {
        if(N < 2)
            return false;
        for(int i=2;i*i<=N;i++)
        {
            if(N%i==0)
               return false;
        }
        return true;
    }
}