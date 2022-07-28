class Solution {
private:
    bool isValid(char ch) {
        
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            
            return 1;
        }
        
        return 0;
    }
    
    char toLowerCase(char ch) {
        
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            
            return ch;
        } else {
            
            return ch - 'A' + 'a';
        }
    }
    
    bool checkPalindrome(string name) {
        
        int s = 0, e = name.length()-1;
        while(s<=e){
            
            if(name[s] != name[e]) {
                
                return 0;
            } else {
                
                s++;e--;
            }
        }
        
        return 1;
    }
    
public:
    bool isPalindrome(string s) {
        
        string temp = "";
        for(int i = 0; i < s.length(); i++) {
            
            if(isValid(s[i])) {
                
                temp.push_back(s[i]);
            }
        }
        
        for(int i = 0; i < temp.length(); i++) {
            
            temp[i] = toLowerCase(temp[i]);
        }
        
        return checkPalindrome(temp);
    }
};