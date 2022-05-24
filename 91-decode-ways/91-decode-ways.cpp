class Solution {
public:
    int numDecodings(string s) {
        int a=1,b=0;
        for(int idx=s.size()-1;idx>=0;idx--){
            char ch = s[idx];
            int c=0;
            if(ch!='0'){
                c+=a;
                if(idx<(s.size()-1)){
                char ch2 = s[idx+1];
                int no = (ch-'0')*10 + (ch2-'0');
                if(no<27){
                    c+=b;
                }
            }
            }
            
            b=a;
            a=c;
        }
        return a;
    }
};