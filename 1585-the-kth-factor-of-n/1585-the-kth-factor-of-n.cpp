class Solution {
public:
    int kthFactor(int n, int k) {
        priority_queue<int> pq;
        for(int i=1;i<=sqrt(n);i++){
            if(i*i==n){
                pq.push(i);
            }
            else if(n%i==0){
                pq.push(i);
                pq.push(n/i);
            }
        }
        

        int sz = pq.size();
        if(k>sz){
            return -1;
        }
        for(int i=0;i<(sz-k);i++){
            pq.pop();
        }
        return pq.top();
    }
};