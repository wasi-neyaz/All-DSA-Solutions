class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
          unordered_map<int, int> mp;
    for (auto e : arr) {
        mp[e]++;
    }
    vector<pair<int, int>> p;
    for (auto e : mp) {
        p.push_back({-e.second, e.first}); 
    }
    sort(p.begin(), p.end());
    vector<int> ans;
    for (auto e : p) {
        for (int i = 0; i < -e.first; i++) { 
            ans.push_back(e.second);
        }
    }
    return ans;
    }
};
