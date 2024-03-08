#include<unordered_map>
class Solution {
public:


    int solve(string s,unordered_map<char,int>map)
    {
        int ans=0;
        int i=0;
        while(i<s.length())
        {
            int value=map[s[i]];
            if(i<s.length()-1 && s[i]=='I' && s[i+1]=='V')
            {
                ans=ans+ 4;
                i=i+2;
            }
            else if(i<s.length()-1 && s[i]=='I' && s[i+1]=='X')
            {
                ans=ans+ 9 ;
                i=i+2;
            }
            else if(i<s.length()-1 && s[i]=='X' && s[i+1]=='L')
            {
                ans=ans+ 40;
                i=i+2;
            }
            else if(i<s.length()-1 && s[i]=='X' && s[i+1]=='C')
            {
                ans=ans+ 90;
                i=i+2;
            }
            else if(i<s.length()-1 && s[i]=='C' && s[i+1]=='D')
            {
                ans=ans+ 400;
                i=i+2;
            }
            else if(i<s.length()-1 && s[i]=='C' && s[i+1]=='M')
            {
                ans=ans+ 900;
                i=i+2;
            }
            else{
                ans=ans+value;
                i=i+1;
            }
        }
        return ans;

    }
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp.insert(make_pair('I',1));
        mp.insert(make_pair('V',5));
        mp.insert(make_pair('X',10));
        mp.insert(make_pair('L',50));
        mp.insert(make_pair('C',100));
        mp.insert(make_pair('D',500));
        mp.insert(make_pair('M',1000));
        return solve(s,mp);

    }
};