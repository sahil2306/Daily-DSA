class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int ans = 0;
        
        while(i<=j){
            int curr = min(height[i],height[j])*(j-i);
            ans = max(curr,ans);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
            
        }
        
        return ans;
    }
};