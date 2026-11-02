class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int best = 0;
        int size = 0;
        sort(nums.begin(),nums.end());

        for (int x : nums) if(size==0 || nums[size-1] != x) nums[size++] = x;
        for(int right = 0 ; right < size ;right++){
            while(nums[right] - nums[left] >= n) left++;
            best = max(best,right-left+1);
        }
        return n-best;
    }
};
