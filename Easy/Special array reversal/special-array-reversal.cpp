//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        //code here.
        //jai ganesh
        int low=0;
        int high=str.size()-1;
        while(low<=high){
            if(!((str[low]>='a'&& str[low]<='z') || (str[low]>='A'&& str[low]<='Z'))){
                low++;
                continue;
            }else if(!((str[high]>='a'&& str[high]<='z') || (str[high]>='A'&& str[high]<='Z'))){
                
                high--;
                continue;
            }
            swap(str[low],str[high]);
            low++;high--;
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends