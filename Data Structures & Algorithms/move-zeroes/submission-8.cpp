class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        if(nums.size() == 1) { return ;}
        for(int x = 0 ; x <nums.size();x++){
            if (nums[x] != 0){
                std::swap(nums[x],nums[i]);
                i++;
            }
        }
        return ;        
    }
};