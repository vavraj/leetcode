//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
#include<math.h>
class Solution{
public:
    int solve(int N,int K,vector<int>&arr,vector<int>&dp){
        if(K<0 || N<0)
            return 0;
        if(K==0)
            return 1;
        if(dp[N]!=-1)
            return dp[N];
            
        int include=1+solve(N-1,K-arr[N],arr,dp);
        int exclude=0+solve(N-1,K,arr,dp);
        dp[N]= max(include,exclude);
        return dp[N];
    }
   
    
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(),arr.end());
        int count = N;
        int sum = 0;

        for (int i = 0; i < N; i++) {
            sum += arr[i];
            while (sum > K) {
                sum -= arr[count-1];
                count--;
            }
            
        }
        return count;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends