class Solution {
public: 
        int solveTab(int n){
                vector<int>dp(n+1,0);
                dp[0]=1;
                dp[1]=1;
                for(int i=2;i<=n;i++){
                        
                int oneStep=dp[i-1];
                int twoStep=dp[i-2];
                
                dp[i]= oneStep+twoStep;
                }
                
                return dp[n];
        }
    int climbStairs(int n) {

       return solveTab(n);
            
    }
};