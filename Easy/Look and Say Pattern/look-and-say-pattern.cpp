//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        // jai ganesh
       string res="1",res2;
       int count=1;
       for(int i=2;i<=n;i++){
           res2="";
           for(int j=0;j<res.length()-1;j++)
           {
               if(res[j]==res[j+1])
               {
                   count++;
               }else
               {
                   res2+=to_string(count)+res[j];
                   count=1;
               }
           }
           res2+=to_string(count)+res[res.length()-1];
           count=1;
           res=res2;
       }
       return res;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends