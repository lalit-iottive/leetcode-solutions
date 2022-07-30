class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0, n = chars.size(), ans = 0;
        while(i<n) {
            
            int j = i+1;
            while(j<n && chars[i] == chars[j]) {
                
                j++;
            }
            
            chars[ans++] = chars[i];
            int counter = j - i;
            if(counter > 1) {
                
                string count = to_string(counter);
                for(auto c : count) {
                    
                    chars[ans++] = c;
                }
            }
            i = j;
        }
        return ans;
    }
    
};