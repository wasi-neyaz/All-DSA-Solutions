class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        // int n = mat[0].size();
        vector<int>ans;
        int maxOnes = INT_MIN;
        int row = 0;

        for(int i =0;i<n;i++){
            int oneCnt = 0;
            for(int j = 0;j<mat[0].size();j++){
                if(mat[i][j] ==1){
                    oneCnt++;
                }

            }
            if(oneCnt>maxOnes){
                maxOnes = oneCnt;
                 row = i;
            }
           
        }
        ans.push_back(row);
        ans.push_back(maxOnes);
        return ans;

    }
};
