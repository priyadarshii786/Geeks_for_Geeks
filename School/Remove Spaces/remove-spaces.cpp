//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        //jai ganesh
        return replace( s.begin(), s.end(), ' ', {} ), s;
        
        /*
        
        --------------------- Ailter ---------------------
        
         string str;
       for(int i=0;i<s.size();i++){
           if(s[i] == ' '){
               continue;
           }
           else{
               str.push_back(s[i]);
           }
       }
       return str;
       
       
       */
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends