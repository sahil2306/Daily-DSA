class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_set<int> f;
        for(auto i:arr){
            freq[i]++;
        }
        for(auto i:freq){
            if(f.find(i.second)!=f.end()){
                return 0;
            }
            f.insert(i.second);
        }
        return 1;
    }
};