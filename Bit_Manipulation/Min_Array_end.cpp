Question Link:-> https://leetcode.com/problems/minimum-array-end/description/?envType=daily-question&envId=2024-11-09

class Solution {
public:
    long long minEnd(int n, int x) {
        long long  num = x;
        for(long i = 1;i<n;i++){
            num = (num+1) | x;
        }
        return num;
    }
};
