class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry=0,len=digits.size()-1;
        for(int i=len;i>=0;i--){
            
            digits[i]+=(i==len)?1:carry;
            carry=digits[i]/10;
            digits[i]%=10;
        }
        
        if(carry)
            
            digits.insert(digits.begin(),carry);
        
        return digits;
    }
};