class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        
        int counter = 0, e = nums.size();
        for(auto& i:nums) {
            if(i == val) {
                counter++; 
                i = INT_MAX; 
            }
        }
        sort(nums.begin(), nums.end());
        return (e - counter);  
    }
};