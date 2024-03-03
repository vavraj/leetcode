class Solution {

    
public:
        int solve(int n,vector<int>&cost,vector<int>&dp){
                if(n==1 || n==0){
                        return cost[n];
                }
                if(dp[n]!=-1)
                        return dp[n];
                
                int oneStep=cost[n]+solve(n-1,cost,dp);
                int twoStep=cost[n]+solve(n-2,cost,dp);
                
                dp[n]= min(oneStep,twoStep);
                return dp[n];
        }
        int solveTab(int n,vector<int>&cost){
                vector<int>dp(n+1,0);
                int prev=cost[0];
                int curr=cost[1];
                int ans,oneStep,twoStep;
                for(int i=2;i<n;i++){                
                oneStep=cost[i]+curr;
                twoStep=cost[i]+prev;

                ans= min(oneStep,twoStep);
                prev=curr;
                curr=ans;
                
                }
                return min(curr,prev);
        }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        return solveTab(n,cost);
    }
};