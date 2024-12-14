/* T. C = o(nlogk) ~= o(n)
  S.C = O(1);*/



class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        int left = 0;
        int right = 0;
        //total count for valid subarrays
        long long count = 0;

        while(right<n){
            //adding  current elements to map 
            mp[nums[right]]++;

            //sliding window and condition checks
            while(mp.rbegin()->first - mp.begin()->first > 2){
                mp[nums[left]]--;
                if(mp[nums[left]] == 0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            count += right -left +1;
            right++;
        }
        return count;


    }
};
