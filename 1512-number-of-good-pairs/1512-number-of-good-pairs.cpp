class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int ans = 0;
        unordered_map<int, int> count;
        for(auto i : nums) {
            
            ans = ans + count[i]++;
            
        }
        
        return ans;
    }
};