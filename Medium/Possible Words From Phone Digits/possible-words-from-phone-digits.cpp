//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        //jai ganesh
        vector <string> val = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector <string> ans;
        
        solve(a, 0, N, val, "", ans);
        
        return ans;
    }
    
    void solve(int a[], int i, int n, vector <string> val, string op, vector <string> &v) {
        if(i == n)
        {
            v.push_back(op);
            return;
        }
        
        for(auto x: val[a[i]])
        {
            op.push_back(x);
            solve(a, i + 1, n, val, op, v);
            op.pop_back();
        }
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends