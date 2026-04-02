class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int c = nums.size();
        vector <int> ans(2*c);
        for (int i =0 ; i<c ; i++){
            ans[i] = ans[i+c] = nums[i];
        }
        
    return ans;
    }
};