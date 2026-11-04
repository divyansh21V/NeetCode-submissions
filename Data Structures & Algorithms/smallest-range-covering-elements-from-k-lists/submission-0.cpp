class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        //{value , listIndex , elementIndex}
        using Node = tuple<int,int,int>;
        //Min-Heap
        priority_queue<Node , vector<Node> , greater<Node>> pq;

        int currentMax =INT_MIN;

        for(int i = 0;i < nums.size();i++){
            int value = nums[i][0];
            pq.push({value,i,0});

            currentMax = max(currentMax,value);
        }

        int bestLeft = 0;
        int bestRight = INT_MAX;

        while(true){
            auto [currentMin , listIndex ,elementIndex] = pq.top();
            pq.pop();

            if(currentMax - currentMin < bestRight - bestLeft){
                bestLeft = currentMin;
                bestRight = currentMax;
            }
            int nextIndex = elementIndex + 1;

            if(nextIndex == nums[listIndex].size()){
                break;
            }
            int nextValue = nums[listIndex][nextIndex];
            pq.push({nextValue,listIndex,nextIndex});

            currentMax = max(currentMax,nextValue);
        }
        return {bestLeft,bestRight};
    }
};
