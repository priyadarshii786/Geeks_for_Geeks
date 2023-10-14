//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    // jai ganesh
    unordered_map<char,int>a;
    int n=S.length();
    int j=0,i=0,m=0;

    for(int i=0;i<n;i++)
    {
        a[S[i]]++;
        
        while(a[S[i]]>1)
        {
            a[S[j]]--;
            j++;
            
        }

        m=max(m,i-j+1);
        
    }
    return m;
}