class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size(),n=needle.size();
        int i=0,j=0,prev=0;

        while(i<h and j<n){
            prev = i;

            while(haystack[i]==needle[j] && i<h && j<n)
            {
                j++;
                i++;
            }
            if(j==n){
                return prev;
            }
            else{
                j=0;
                i = prev+1;
            }

        }
        return -1;
    }
};