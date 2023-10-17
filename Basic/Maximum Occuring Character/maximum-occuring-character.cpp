//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        // jai ganesh
        map<char,int> m;
        for(int i=0;i<str.length();i++)
            m[str[i]]++;
        int max_ele=0;
        char c;
        for(auto i=m.begin();i!=m.end();i++)
            if(max_ele < i->second){
                max_ele = i->second;
                c = i->first;
        }
        return c;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends