class Solution {
public:
  int solveTab(vector<int>&obstacles,vector<vector<int> >&dp){
        
    int n=obstacles.size()-1;
        dp[0][n]=0;
        dp[1][n]=0;
        dp[2][n]=0;
        dp[3][n]=0;
        
        for(int Currpos=n-1;Currpos>=0;Currpos--){
            for(int Currlane=1;Currlane<=3;Currlane++){
                if(obstacles[Currpos+1]!=Currlane){
            dp[Currlane][Currpos] =dp[Currlane][Currpos+1];
        }
        else{
            int ans=1e9;
            for(int i=1;i<=3;i++){
                if(Currlane!=i && obstacles[Currpos]!=i)
                {
                    ans= min(ans,1 + dp[i][Currpos+1]);
                }
            }
           dp[Currlane][Currpos] = ans;
        }
            }
        }
        return min(dp[2][0],min(dp[1][0]+1,dp[3][0]+1));
    }
    int minSideJumps(vector<int>& obstacles) {
        vector<vector<int> >dp(4,vector<int>(obstacles.size(),INT_MAX));

        return solveTab(obstacles,dp);
        
        
    }
};