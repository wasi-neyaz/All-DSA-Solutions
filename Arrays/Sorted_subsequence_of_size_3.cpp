
class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        int n = arr.size();
        
        //creating leftmin vector
        
        vector<int>leftmin(n);
        leftmin[0] = arr[0];
        for(int i = 1;i<n;i++){
            leftmin[i] = min(leftmin[i-1],arr[i]);
        }
        
        //creating rightmax vector
        
        vector<int> rightmax(n);
        rightmax[n-1] = arr[n-1];
        for(int i = n-2;i>=0;i--){
            rightmax[i] = max(rightmax[i+1],arr[i]);
        }
        
        //iterateing from second to the second last element to find the 3rd element 
        for(int i = 1;i<n-1;i++){
            if(arr[i]>leftmin[i-1] && arr[i]<rightmax[i+1]){
                return {leftmin[i-1],arr[i],rightmax[i+1]};
            }
        
        }
        return {};
    }
    
};
