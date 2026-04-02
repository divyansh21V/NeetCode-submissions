class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int c = nums.size();
        vector<int> arr[c];
        for (int i = 0 ; i<c;i++){
            for (int j = i+1 ; j <c ; j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
            
        }
        return false;
          
    }
};