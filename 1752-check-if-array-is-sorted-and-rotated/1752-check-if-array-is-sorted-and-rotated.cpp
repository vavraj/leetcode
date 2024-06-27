class Solution {
public:
    bool check(vector<int>& nums) {
            int n=nums.size();
            int pivot=-1;
            for(int i=0;i<n-1;i++){
                    if(nums[i]>nums[i+1])
                    {
                            pivot=i;
                            break;
                    }
            }
            
            if(pivot==-1)
                    return true;
            
            for (int i = pivot + 1; i < n - 1; i++) {
                if (nums[i] > nums[i + 1]) 
                        return false;
        }
            
            return nums[n-1]<=nums[0];
            
            
    }
};