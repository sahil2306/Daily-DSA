class Solution {
public:
    int numberOfSteps(int n) {
        if(n<2){
            return n;
        }
        if((n&n-1)==0){
            return log2(n)+1;
        }
        
        int ones=0,zeros=0;
        
        while(n){
            if(n&1){
                ones++;
            }
            else{
                zeros++;
            }
            n=n>>1;
        }
        
        return ((ones*2)+zeros-1);
    }
};