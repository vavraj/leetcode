class Solution {
public:
  int solveTab(vector<int>&obstacles){
        vector<int>curr(4,INT_MAX);
        vector<int>next(4,0);
        int n=obstacles.size()-1;
        next[0]=0;
        next[1]=0;
        next[2]=0;
        next[3]=0;
        
        for(int Currpos=n-1;Currpos>=0;Currpos--){
            for(int Currlane=1;Currlane<=3;Currlane++){
                if(obstacles[Currpos+1]!=Currlane){
            curr[Currlane] =next[Currlane];
        }
        else{
            int ans=1e9;
            for(int i=1;i<=3;i++){
                if(Currlane!=i && obstacles[Currpos]!=i)
                {
                    ans= min(ans,1 + next[i]);
                }
            }
           curr[Currlane] = ans;
        }
            }
            next=curr;
        }
        return min(next[2],min(next[1]+1,next[3]+1));
    }
    int minSideJumps(vector<int>& obstacles) {


        return solveTab(obstacles);
        
        
    }
};