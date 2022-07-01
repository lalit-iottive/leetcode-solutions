class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = n > 0 ? 1 : 0;
        
        for(auto num : nums) {
            if(num > nums[i - 1]) {
                nums[i++] = num;
            }
        }
        
        return i;
    }
};