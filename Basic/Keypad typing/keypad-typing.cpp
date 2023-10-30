//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}
// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
    //jai ganesh
    char arr[] = "22233344455566677778889999";
    string res;
    
    for(int i=0; i<n; i++)
    {
        res += arr[s[i]- 'a'];
        
    }
    return res;
}
