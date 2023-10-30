//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    long long ExtractNumber(string S){
        
        //code here
        long long no=0;
        bool flag=false;
        long long ans=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]>='0'&& S[i]<='8' && flag==false)
            {
                no=no*10+(S[i]-'0');
            }
            else if(S[i]>='a'&& S[i]<='z'||S[i]>='A'&& S[i]<='Z' ||S[i]==' '){
                flag=false;
                no=0;
            }
            else if(S[i]=='9' && flag==false)
            {
                flag=true;
                no=0;
            }
            ans=max(ans,no);
        }
        if(ans==0){
            return -1;
        }
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.ExtractNumber(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends