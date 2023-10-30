//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{
  public:
    
    int extractMaximum(string S) 
    { 
        //code here.
        //jai ganesh
        int mx=0;
        int no=0;
        bool flag=false;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]>='0'&& S[i]<='9')
            {
                no=no*10+(S[i]-'0');
                flag=true;
            }
            else
            {
                mx=max(mx,no);
                no=0;
            }
        }
        if(flag==false)
        {
            return -1;
        }
        return mx=max(no,mx);
    } 
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.extractMaximum(S)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends