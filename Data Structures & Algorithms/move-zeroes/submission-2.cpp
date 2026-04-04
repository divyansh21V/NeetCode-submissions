class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       if (nums.size() == 1){ return ; }
        for (int i = 0 ; i < 10 ; i++){
            if(nums[i] == 0 ){ 
                for (int j = nums.size()-1 ; j > i ; j--){
                    if(nums[j] != 0){ 
                        std::swap(nums[i],nums[j]); 
                    }

                }
            }
        }
        return ; 
    }
};