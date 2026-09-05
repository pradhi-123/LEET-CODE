class Solution {
    public String longestCommonPrefix(String[] strs) 
    {
        String word = strs[0];
        for (int i = 1; i < strs.length; i++)
            if (strs[i].length() < word.length())
                word = strs[i];

        for (int i = 0; i < word.length(); i++)
        {
            char ch = word.charAt(i);
            for (int j = 0; j < strs.length; j++)
                if (strs[j].charAt(i) != ch)
                    return word.substring(0, i);
        }
        return word;
    }
}