//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



bool metaStrings (string S1, string S2)
{
    // your code here
    // jai ganesh
    if(S1.size()!=S2.size()) return 0;

    if(S1==S2) return 0;

    int i=0;

    int j=S1.size()-1;

    while(S1[i]==S2[i])
    {

        i++;

    }

    while(S1[j]==S2[j])
    {

        j--;

    }

    swap(S1[i],S1[j]);

    if(S1==S2) 
    return true;

    else 
    return false;


}