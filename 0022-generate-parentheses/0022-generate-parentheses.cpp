class Solution {
public:
    vector<string> ans;

    void dp(int o,int c,string curr){
        if(c==0 and o==0){
            ans.push_back(curr);
            return;
        }
        if(o>0){
            dp(o-1,c,curr+'(');
        }
        if(o<c){
            dp(o,c-1,curr+')');
        }
    }

    vector<string> generateParenthesis(int n) {
        dp(n,n,"");
        return ans;
    }
};