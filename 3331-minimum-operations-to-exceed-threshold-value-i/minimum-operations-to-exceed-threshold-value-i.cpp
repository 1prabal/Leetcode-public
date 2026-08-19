class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        while(true){
        int mini = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<nums[mini]) mini = i;
           }
           if(nums[mini]>=k) break;
            nums.erase(nums.begin()+mini);
            count++;
        }
        return count;
    }
};