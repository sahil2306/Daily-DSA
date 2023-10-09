class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto i:stones) pq.push(i);

        while(pq.size()>1){
            int x = pq.top();pq.pop();
            int y = pq.top();pq.pop();
            cout<<x<<" "<<y<<endl;
            if(x!=y){
                pq.push(x-y);
            }
        }

        return pq.size()==1?pq.top():0;
    }
};