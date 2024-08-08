class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        vector<int>temp;
        int n1 = arr1.size();
        int n2 = arr2.size();
        for(int i = 0;i<n1;i++){
            temp.push_back(arr1[i]);
        }
        for(int j = 0;j<n2;j++){
            temp.push_back(arr2[j]);
        }
        
        sort(temp.begin(),temp.end());
        int ans = temp[k-1];
        return ans;
    }
};
