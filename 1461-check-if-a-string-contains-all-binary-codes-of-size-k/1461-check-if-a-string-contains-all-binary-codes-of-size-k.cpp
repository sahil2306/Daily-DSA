class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k){
            return 0;
        }
        unordered_set<string> st;
        unordered_set<string>::iterator itr;
        for(int i=0;i<(s.size()-k+1);i++){
            string a = s.substr(i,k);
            st.insert(a);
        }
        int x = pow(2,k);
        if(st.size()==x)return 1;
        return 0;
    }
};