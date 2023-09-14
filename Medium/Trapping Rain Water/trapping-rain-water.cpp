//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        //jai ganesh
        
        long long s=0,e=n-1;
        long long lm=0,rm=0;
        long long sum=0;
        while(s<e)
        {
            if(arr[s]<=arr[e])
            {
                if(arr[s]>=lm)lm=arr[s];
                else sum+=lm-arr[s];
                s++;
            }
            else
            {
                if(arr[e]>=rm)rm=arr[e];
                else sum+=rm-arr[e];
                e--;
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends