class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> ump = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},
                                        {'M',1000}};
        int ans = 0;
        for(int i = 0; i<s.length(); i++){
            if( ump[s[i+1]] > ump[s[i]]) {
                ans = ans + (ump[s[i+1]] - ump[s[i]]);
                i++;
            }
            else
                ans = ans + ump[s[i]];   
        }
        return ans;
    }
};
