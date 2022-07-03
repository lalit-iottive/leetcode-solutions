class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size(), sum = 0;
        
        
        int total_sum = (n*(n+1))/2;
        
        for(auto num : nums){
            
            sum += num;          
        }
        
        return (total_sum - sum);
    }
};