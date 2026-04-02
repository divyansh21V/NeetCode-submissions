class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> list ; 
        for(int i = 0 ; i < nums.size() ;i++){
            int x = 1;
            for(int j = 0 ; j < nums.size(); j++){
                if(i != j){
                    x = x*nums[j];
                }
            }
            list.emplace_back(x);
        }
        return list;
    }
};
