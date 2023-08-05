class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;

        for(auto i:word1){
            freq1[i]++;
        }
        for(auto i:word2){
            freq2[i]++;
        }

        if(freq1.size()==freq2.size()){
            string s1 = "",s2="",s3="",s4="";
            for(auto i:freq1){
                s3+=i.first;
                s1+=i.second+'0';
            }
            for(auto i:freq2){
                s2+=i.second+'0';
                s4+=i.first;
            }
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());

            sort(s3.begin(),s3.end());
            sort(s4.begin(),s4.end());

            if(s1==s2 and s3==s4){
                return 1;
            }
            
        }

        return 0;
    }
};