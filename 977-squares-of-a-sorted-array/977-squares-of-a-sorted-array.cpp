class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int s = 0, e = nums.size() - 1;
        vector<int> ans(nums.size());
        
        for(int i = nums.size()-1; i>= 0; i--){
            
            if (abs(nums[e]) > abs(nums[s])) {
                
                ans[i] = nums[e] *nums[e];
                e--;
            } else {
                
                ans[i] = nums[s] * nums[s];
                s++;
            }
        
        }
                return ans;
                
    }
    
};