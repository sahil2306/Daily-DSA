class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.size();
        int count=0;
        for(int i=(size-1);i>=0;i--){
            if(s[i]==' '&&count==0) continue;
            else if(s[i]==' '&& count!=0) break;
            else count++;
        }
        return count;
    }
};