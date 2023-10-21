//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
        //jai ganesh
        string res;
        while(n){
            int k = n%4;
            if(k == 1){
                res += '2';
            }else if(k == 2){
                res += '3';
            }else if(k == 3){
                res += '5';
            }else{
                res += '7';
            }
            n--;
            n = n/4;
        }
        reverse(res.begin(), res.end());
        return stoi(res);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}

// } Driver Code Ends