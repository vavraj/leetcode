//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    // vaibhav
    // 0123456=7
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        string ans;
        for(int i=str.length()-1;i>=0;i--)
        {
            // ans[str.length()-i-1]=str[i];
            ans.push_back(str[i]);
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends