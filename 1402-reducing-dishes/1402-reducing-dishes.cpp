class Solution {
public:
    
    int solve(vector<int>&satisfaction,int i,int time,vector<vector<int> >&dp){
        if(i==satisfaction.size())
        {
            return 0;
        }
        if(dp[i][time]!=-1)
            return dp[i][time];
        
        int include=((time+1)*satisfaction[i])+solve(satisfaction,i+1,time+1,dp);
        int exclude=0+solve(satisfaction,i+1,time,dp);
        
        dp[i][time]=max(include,exclude);
        return dp[i][time];
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        
        sort(satisfaction.begin(),satisfaction.end());
        
        vector<vector<int> >dp(satisfaction.size()+1,vector<int>(satisfaction.size()+1,-1));
        return solve(satisfaction,0,0,dp);
    }
};