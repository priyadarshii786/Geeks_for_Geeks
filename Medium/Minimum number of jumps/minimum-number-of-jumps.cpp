//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        //jai ganesh
        
         int jump=0,curr_jump=0,farthest=0;
        for(int i=0;i<n-1;i++)
        {
            farthest=max(farthest,i+arr[i]);// it calculates the maximum index 
                                             //at which frog can jump from index i
             if(i==farthest)// idx at which frog cannot jump further
             {
                 return -1;
             }
             //frog is at ith index which is his curr pos jumping to maxm idx
             if(i==curr_jump)
             {
                 jump++;
                 curr_jump=farthest;
             }
        }
        return jump;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends