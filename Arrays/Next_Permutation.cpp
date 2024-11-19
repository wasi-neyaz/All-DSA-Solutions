class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        int swapPoint_index = -1;
        
        //traversing from back of the arr
        for(int i = n-1; i > 0 ; i--){
            if(arr[i] > arr[i-1]){
                swapPoint_index = i-1;
                break;
            }
        }
        
        if(swapPoint_index != -1){
            int swap_index = swapPoint_index;
            
            for(int j = n-1 ; j>=swapPoint_index +1; j--){
                if(arr[j] > arr[swapPoint_index]){
                    swap_index = j;
                    break;
                }
            }
            swap(arr[swapPoint_index] , arr[swap_index]);
        }
        reverse(arr.begin() + swapPoint_index +1 ,arr.end());
    }
};
