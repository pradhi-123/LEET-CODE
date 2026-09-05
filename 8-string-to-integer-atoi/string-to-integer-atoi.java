import java.io.*;
class Solution {
    public int myAtoi(String s) {
        long num=0;
        int sign=1;
        boolean started = false;
        if(s.length()>=2)
            if((s.charAt(0)=='-' && s.charAt(1)=='+') || (s.charAt(0)=='+' && s.charAt(1)=='-'))
            return 0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)==' ' && !started)
              continue;
            if(s.charAt(i)=='-' && !started)
            {
                sign=-1;
                started=true;
                continue;
            } 
            if(s.charAt(i)=='+'&& !started)
            {
               started=true;
               continue;
            }
            if(Character.isDigit(s.charAt(i)))
            {
                started=true;
                if(num > Integer.MAX_VALUE)
                    num = Integer.MAX_VALUE + 1L;
                else
                    num = (num * 10) + (s.charAt(i) - '0');
            }
            else
               break;
        }
        if(!started)
            return 0;
        if(num>Integer.MAX_VALUE && sign==1)
           return Integer.MAX_VALUE;
        if(num>Integer.MAX_VALUE && sign==-1)
           return Integer.MIN_VALUE;
        return (sign*(int)num);
    }
}