class Solution {
public:
    vector<int> sumZero(int n) {
        
        
        vector<int> nums;
        int until = n/2;
        if(n&1) 
            nums.push_back(0);
        for(int i = 1; i <= until; i++) {  
            
            nums.push_back(i);
            nums.push_back(-i);
        }
        return nums;
    }
};