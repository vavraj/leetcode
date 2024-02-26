class Solution {
public:
    
    int solveMem(vector<int>&obstacles,int pos,int Currlane,vector<vector<int> >&dp){
        int n=obstacles.size()-1;
        if(pos==n)
            return 0;
        if(dp[Currlane][pos]!=-1)
            return dp[Currlane][pos];
        
        if(obstacles[pos+1]!=Currlane){
            return solveMem(obstacles,pos+1,Currlane,dp);
        }
        else{
            int ans=INT_MAX;
            for(int i=1;i<=3;i++){
                if(Currlane!=i && obstacles[pos]!=i)
                {
                    ans= min(ans,1 + solveMem(obstacles,pos,i,dp));
                }
            }
            dp[Currlane][pos]=ans;
           return dp[Currlane][pos];
        }
    }
    int minSideJumps(vector<int>& obstacles) {
        vector<vector<int> >dp(4,vector<int>(obstacles.size()+1,-1));

        return solveMem(obstacles,0,2,dp);
        
        
    }
};