class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue<int>pq;
            for(int i=0;i<nums.size();i++){
                    pq.push(nums[i]*nums[i]);
            }
            int i=nums.size()-1;
            while(!pq.empty()){
                    nums[i--]=pq.top();
                    pq.pop();
            }
            return nums;
    }
};