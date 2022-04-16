class Solution {
public:
    vector<string> ans;
    
    void helper(string digits, int ind, string psf, vector<string> m){
        if(ind==digits.size()){
            ans.push_back(psf);
            return;
        }
        
        int val = digits[ind]-'0';
        string t = m[val];
        
        for(int i=0;i<t.size();i++){
            helper(digits,ind+1,psf+t[i],m);
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        
        if(digits.size()==0){
            return ans;
        }
        
        vector<string> m(10);
        
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        
        
        helper(digits,0,"",m);
        
        return ans;
        
    }
};