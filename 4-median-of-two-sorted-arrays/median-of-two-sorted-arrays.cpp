class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        int n = nums1.size();
        sort(nums1.begin(), nums1.end());
        if(n%2==0){
            float a = (nums1[n/2-1]+nums1[n/2])/2.0;
            return a;
        }
        return nums1[n/2.0];
    }
};