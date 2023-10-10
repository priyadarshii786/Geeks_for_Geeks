//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string stringSort (string s)
    {
        //code here.
        //jai ganesh
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);
        
        for (int i=0; i<s.length(); i++) {
            if (isupper(s[i])) upper[ s[i] - 'A' ]++;
            else lower[ s[i] - 'a']++;
        }
        
        int k=0, i=0, j=0;
        
        // string res;
        while (i < 26 || j < 26) {
            
            while(i < 26 && upper[i] == 0) i++;
            while(j < 26 && lower[j] == 0) j++;
            
            if (i < 26 && upper[i]-- > 0) s[k++] = i + 'A'; // res.push_back(i + 'A');
            if (j < 26 && lower[j]-- > 0) s[k++] = j + 'a'; // res.push_back(j + 'a');
                
            if (upper[i] == 0) i++;
            if (lower[j] == 0) j++;
        }
        
        return s;
    }
};

//{ Driver Code Starts.
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.stringSort (s) << endl;
    }
}

// Contributes By: Pranay Bansal
// } Driver Code Ends