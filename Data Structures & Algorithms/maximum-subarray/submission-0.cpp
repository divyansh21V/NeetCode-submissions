class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int high = -10 , sum = 0;
        for (int i = 0 ; i < nums.size(); i++){
            sum = max(nums[i],sum+nums[i]);
            high = max(high,sum);
        }
        return high;
    }
};
