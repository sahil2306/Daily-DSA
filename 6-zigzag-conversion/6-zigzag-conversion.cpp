class Solution {
public:
    string convert(string s, int num) {
        vector<string> v(num+1,"");
        
        if(num==1){
            return s;
        }
        
        int k=0;
        bool inc=1;
        
        for(int i=0;i<s.size();i++){
            //cout<<k<<" ";
            if(inc){
                v[k]+=s[i];
                k++;
                if(k==(num-1))inc=0;
            }
            else{
                v[k]+=s[i];
                k--;
                if(k==0)inc=1;
            }
            
        }
        
        string ans="";
        for(int i=0;i<num;i++){
            ans+=v[i];
        }
        return ans;
    }
};