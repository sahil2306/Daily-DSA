class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> t;
        int i=0,j=0;
        while(i<m and j<n){
            int x = nums1[i]>nums2[j]?nums2[j++]:nums1[i++];
            t.push_back(x);    
        }
        while(i<m){
            t.push_back(nums1[i++]);
        }
        while(j<n){
            t.push_back(nums2[j++]);
        }
        
        nums1=t;
    }
};