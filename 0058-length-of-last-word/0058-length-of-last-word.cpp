class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.size()-1;
        while(s[j]==' '){
            j--;
        }
        int i=j;
        
        while(s[j]!=' ' and j>0){
            j--;
        }
        if(j==0 and s[0]!=' '){j--;}
        return i-j;
    }
};