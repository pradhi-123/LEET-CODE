class Solution {
    public int kConcatenationMaxSum(int[] arr, int k) {
        int n = arr.length;
        long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        long curr = 0;
        long max = 0;
        int times = Math.min(k, 2);
        for (int i = 0; i < n * times; i++) {
            int x = arr[i % n];
            curr = curr + x;
            if (curr < 0) {
                curr = 0;
            }
            if (curr > max) {
                max = curr;
            }
        }

        if (k > 2 && sum > 0) {
            max = max + (long)(k - 2) * sum;
        }

        return (int)(max % 1000000007);
    }
}