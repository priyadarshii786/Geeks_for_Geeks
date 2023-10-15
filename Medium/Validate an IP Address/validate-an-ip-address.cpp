//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            // jai ganesh
            string s1;
            int n=s.length();
            int d=0;//dot count
            
            if(s[0]=='.' || s[n-1]=='.')    return 0;
                
            for(int i=0;i<n-1;i++){
                if(s[i]=='.'&& s[i+1]=='.')  return 0;
                if(s[i]=='.')   d++;
            }
            
            if(d!=3)    return 0;
            
            for(int i=0;i<n;i++){
                
                while(i<n && s[i]!='.'){
                    if(s[i]<'0' || s[i]>'9')    return 0;
                    s1+=s[i++];
                }
                
                int t=stoi(s1);
                
                if(t>255)   return 0;
                
                if(t==0 && s1.length()==1){
                    s1="";
                    continue;
                }
                
                int c=0; //no. of digits
                while(t){
                    t/=10;
                    c++;
                }
                if(c!=s1.length())  return 0;//trailing zeros
                    
                s1="";
            }
            return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends