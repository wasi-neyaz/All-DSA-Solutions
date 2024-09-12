class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int ones=0;
        int two=0;
        int zero=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                zero++;
            }
            else if(arr[i]==2){
                two++;
            }
            else if(arr[i]==1){
                ones++;
            }
        }
        int i = 0;
        while (zero--) arr[i++] = 0;
        while (ones--) arr[i++] = 1;
        while (two--) arr[i++] = 2;
    }
};