class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end());
        int count = 0;
        int n = arr.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(arr[i]+arr[j]<target){
                count+=j-i;
                i++;
            }
            else{
                j--;
            }
        }
        return count;
    }
};
