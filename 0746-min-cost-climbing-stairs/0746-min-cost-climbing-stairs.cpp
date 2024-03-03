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
                dp[0]=cost[0];
                dp[1]=cost[1];
                for(int i=2;i<n;i++){                
                int oneStep=cost[i]+dp[i-1];
                int twoStep=cost[i]+dp[i-2];

                dp[i]= min(oneStep,twoStep);
                }
                return min(dp[n-2],dp[n-1]);
        }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        return solveTab(n,cost);
    }
};