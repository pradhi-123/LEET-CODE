class Solution {
    public int kConcatenationMaxSum(int[] arr, int k) {
        long sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        long cur = 0;
        long max = 0;
        int n = Math.min(k, 2);
        for (int i = 0; i < arr.length * n; i++) {
            int x = arr[i % arr.length];
            cur = cur + x;
            if (cur < 0) {
                cur = 0;
            }
            if (cur > max) {
                max = cur;
            }
        }

        if (k > 2 && sum > 0) {
            max = max + (long)(k - 2) * sum;
        }

        return (int)(max % 1000000007);
    }
}