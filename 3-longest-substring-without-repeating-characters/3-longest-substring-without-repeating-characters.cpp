class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>ht;
        ht.assign(128,-1);
        int val=0;
        int count =0;
        int start=0;
        int end=0;
        while(s[end]!='\0'){
            if(ht[s[end]]==-1){
                ht[s[end]]=end;
                count++;
                val=max(val,count);
            }
            else{
                for(int i=start;i<ht[s[end]];i++){
                    ht[s[i]]=-1;
                }
                start=ht[s[end]]+1;
                ht[s[end]]=end;
                //cout<<start<<" "<<end<<endl;
                count=end-start+1;
                val=max(val,count);
            }
           // cout<<count<<endl;
            end++;
        }
        return val;
    
    }
};