class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int x = k % nums.size();
        auto arr = [&](int left , int right){
            while(left < right){
                std::swap(nums[left],nums[right]);
                left++;
                right--;
            }
        };

        arr(0,nums.size()-1);
        arr(0,x-1);
        arr(x,nums.size()-1);
        return ;
    }
};       