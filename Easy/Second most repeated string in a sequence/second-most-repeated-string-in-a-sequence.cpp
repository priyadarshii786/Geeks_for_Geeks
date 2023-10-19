//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
   {
       //code here.
       //jai ganesh
       
       ////// *****take map put the strings and tha just iterate the map for once and we got our answer ******//////
       int mx=0;
       string s="";

 

//put all the strings in map with its count ans also keep track of max number of times occured string//
       unordered_map<string,int>mp;
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
           if(mp[arr[i]]>mx){
               mx=mp[arr[i]];
               s=arr[i];
           }
       }

 

//delete the string which occured max no. of times//

       mp.erase(s);
       string ans="";
       mx=0;

 

//now put themax string in  ans because now,that string is second max as we deleted first max string //
       for(auto it:mp){
           if(it.second>mx){
               mx=it.second;
               ans=it.first;
           }
       }
       return ans;
        
}
    
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends