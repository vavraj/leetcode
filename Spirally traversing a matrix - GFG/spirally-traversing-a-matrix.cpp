//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    void solve(vector<vector<int> > &matrix, int r, int c,vector<int>&ans,int row,int col,vector<vector<int> >&visited)
    {
        if(row>=r || row<0)
            return ;
        if(col>=c || col<0)
            return;
        if(visited[row][col]==1)
            return;
       
            ans.push_back(matrix[row][col]);
            visited[row][col]=1;
        
        // go right
        if(row>0 && col>=0 &&visited[row-1][col]==0)
        {
            
        }
        else
            solve(matrix,r,c,ans,row,col+1,visited);
        // go down
        solve(matrix,r,c,ans,row+1,col,visited);
        // go left
        solve(matrix,r,c,ans,row,col-1,visited);
        // go up
        solve(matrix,r,c,ans,row-1,col,visited);
    }
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>ans;
        vector<vector<int> >visited(r,vector<int>(c,0));
        solve(matrix,r,c,ans,0,0,visited);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends