class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count =0, totalsum=0;
            int lsum=0;
        for(int i=0; i<nums.size(); i++){
        totalsum+=nums[i];
        }
        for(int i=0; i<nums.size()-1; i++){
            lsum+=nums[i];
        int rsum = totalsum-lsum;
        if((lsum%2)==rsum%2) count++;
        }
    return count;
    }
};