class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int> mask(words.size());
        for(int i=0;i<words.size();i++){
            for(auto& c : words[i]){
                mask[i]|=1<<(c-'a');
            }
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if((mask[i]&mask[j])==0)
                    ans=max(ans,int(words[i].size()*words[j].size()));
            }
        }
        return ans;
    }
};