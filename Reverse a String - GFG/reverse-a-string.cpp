//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    string reverse(string str)
    {
        stack<char>st;
        for(int i=0;i<str.length();i++)
        {
            st.push(str[i]);
        }
        int i=0;
        while(!st.empty())
        {
            str[i++]=st.top();
            st.pop();
        }
        return str;
    }
    public:
    string reverseWord(string str)
    {
        return reverse(str);
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