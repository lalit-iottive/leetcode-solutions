class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int c = 1, i1 = 0;
        for(int i = 0; i<nums.size(); i++) {
            
            if(nums[i] == nums[i1]) {
                
                c++;
            } else {
                
                c--;
            }
            
            if(c == 0){
                
                i1 = i;
                c = 1;
            }
        }
        
        return nums[i1];
    }
};