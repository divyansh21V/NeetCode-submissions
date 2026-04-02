class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int x = nums.size();
        vector <int> ans(2*x);
        for (int i =0 ; i<x ; i++){
            ans[i] = ans[i+x] = nums[i];
        }
        
    return ans;
    }
};