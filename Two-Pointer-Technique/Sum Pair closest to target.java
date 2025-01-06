class Solution {
    public List<Integer> sumClosest(int[] arr, int target) {
        // code here
        Arrays.sort(arr);
        int n = arr.length;
        int closestSum = Integer.MAX_VALUE;
        List <Integer> ans = new ArrayList<>();
        
        int st = 0;
        int end = n-1;
        while(st<end){
            int sum = arr[st] + arr[end];
            if(Math.abs(target-sum) < closestSum ){
                closestSum = Math.abs(target-sum);
                ans.clear();
                ans.add(arr[st]);
                ans.add(arr[end]);
            }
            if(sum<target){
                st++;
            }
            else if(sum>target){
                end--;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
}
