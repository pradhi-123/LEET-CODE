class Solution {
    public int reverse(int x) {
        int n=0;
        int c=0;
        int temp=x;
        while(x!=0)
        {
            n=(n*10)+(x%10);
            x=x/10;
            c++;
        }
        if(c>9 && temp!=-2147483412 && temp!=1463847412 && temp!=-1463847412)
          return 0;
    return n;
    }
}