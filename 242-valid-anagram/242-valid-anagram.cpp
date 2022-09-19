class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> freq(26,0);
        for(char c:s){
            freq[c-'a']+=1;
        }
        for(char c:t){
            freq[c-'a']-=1;
        }
        
        for(auto i:freq){
            if(i!=0){
                return 0;
            }
        }
        return 1;
    }
};