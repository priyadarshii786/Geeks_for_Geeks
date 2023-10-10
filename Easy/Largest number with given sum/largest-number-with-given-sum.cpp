//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        // jai ganesh
        
        string temp="";
        if(n*9<sum){
            return "-1";
        }
        while(sum>0){
            if(sum>=9){
                temp+="9";
                sum=sum-9;
                n--;
            }else{
                temp+=to_string(sum);
                n--;
                sum=0;
            }
        }
        while(n--){
            temp+="0";
            
        }
        return temp;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends