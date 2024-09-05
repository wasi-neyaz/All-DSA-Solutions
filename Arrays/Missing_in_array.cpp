class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
      sort(arr.begin(),arr.end());
      for(int i=0;i<n;i++){
          if(arr[i]!=i+1) return i+1;
      }
      return n;
    }
};
