class Solution {
    public String convert(String s, int numRows) 
    {
        char[][] arr = new char[numRows][s.length()];
        int c = 0;

        while (c < s.length()) {
            for (int i=0;i<numRows;i++) 
            {
                if(c<s.length())
                {
                arr[i][c]=s.charAt(c);
                c++;
                }
            }

            for (int i=numRows-2;i>0;i--) 
            {
                if(c<s.length())
                {
                arr[i][c] = s.charAt(c);
                c++;
                }
            }
        }

        String ans = "";

        for (int i = 0; i < numRows; i++)
            for (int j = 0; j < s.length(); j++)
                if (arr[i][j] != '\0') {
                    ans = ans + arr[i][j];
                }
        return ans;
        }
}