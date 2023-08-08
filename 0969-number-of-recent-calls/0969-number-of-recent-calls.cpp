class RecentCounter {
    int min_idx;
public:
    vector<int> v;
    RecentCounter() {
        v={};
        min_idx=0;
    }
    
    int ping(int t) {
        v.push_back(t);
        while((t-v[min_idx])>3000){
            min_idx++;
        }

        return v.size()-min_idx;

    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */