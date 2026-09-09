class Solution {
    public String multiply(String num1, String num2) {

        if (num1.equals("0") || num2.equals("0"))
            return "0";

        int n = num1.length();
        int m = num2.length();

        int[] res = new int[n + m];

        for (int i = n - 1; i >= 0; i--) {
            int a = num1.charAt(i) - '0';

            for (int j = m - 1; j >= 0; j--) {
                int b = num2.charAt(j) - '0';

                int pos = i + j + 1;

                int value = a * b + res[pos];

                res[pos] = value % 10;
                res[pos - 1] += value / 10;
            }
        }

        StringBuilder sb = new StringBuilder(n + m);

        int i = 0;
        while (i < res.length && res[i] == 0)
            i++;

        while (i < res.length)
            sb.append(res[i++]);

        return sb.toString();
    }
}