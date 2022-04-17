class Solution {
public:
    
    int reverseNumber(int n){
        long long int ans=0;
        while(n){
            int t = n%10;
            n/=10;
            
            ans*=10;
            ans+=t;
        }
        return ans;
    }
    
    bool isPalindrome(int x) {
        
        if(x<0){
            return 0;
        }
        
        int n = x;
        int r = reverseNumber(n);
        return x==r?1:0;
    }
};