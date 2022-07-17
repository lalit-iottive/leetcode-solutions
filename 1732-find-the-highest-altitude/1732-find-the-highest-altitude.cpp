class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int start = 0, max = 0;
        for(int i = 0; i < gain.size(); i++) {
            
            start = start + gain[i];
            
            if (start > max) 
                max = start;
        }
        
        return max;
    }
};