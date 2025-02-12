class Solution {
    public int getDigitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += (num % 10);
            num /= 10;

        }
        return sum;
    }

    public int maximumSum(int[] nums) {
        int[] max = new int[82];
        int maxAns = -1;
        for (int num : nums) {
            int digitSum = getDigitSum(num);
            if (max[digitSum] > 0) {
                int prevNum = max[digitSum];
                maxAns = Math.max(prevNum + num, maxAns);
                max[digitSum] = Math.max(prevNum, num);
            } else {
                max[digitSum] = num;
            }
        }
        return maxAns;
    }
}
