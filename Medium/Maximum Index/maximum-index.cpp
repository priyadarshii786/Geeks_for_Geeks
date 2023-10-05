//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        //jai ganesh
         int maxArr[N], minArr[N], result = -1;
        maxArr[N-1] = A[N-1];
        minArr[0] = A[0];
        for (int i=1,j=N-2; i<N,j>=0; i++,j--) {
           minArr[i] = min(minArr[i-1], A[i]);
           maxArr[j] = max(maxArr[j+1], A[j]);
        }
        int i=0,j=0;
        while(i<N && j<N) {
            if (minArr[i] <= maxArr[j]) {
                result = max(result, j-i);
                j++;
            }
            else
            i++;
        }
        return result;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends