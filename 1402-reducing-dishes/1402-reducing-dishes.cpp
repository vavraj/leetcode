class Solution {
public:
   
    int solveTab(vector<int>&satisfaction){
        int n=satisfaction.size();

            vector<int>curr(n+1,0);
            vector<int>next(n+1,0);
        
        for(int index=n-1;index>=0;index--){
            for(int time=index;time>=0;time--){
                int include=                                 ((time+1)*satisfaction[index])+next[time+1];
        int exclude=0+next[time];
        
        curr[time]=max(include,exclude);
            }
            next=curr;
        }
        
        return next[0];
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        
        sort(satisfaction.begin(),satisfaction.end());
        
        return solveTab(satisfaction);
    }
};