//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> posarr;
	    vector<int> negarr;
	    for(int i=0 ;i<n ;i++)
	    {
	        if(arr[i]<0){
	            negarr.push_back(arr[i]);
	        }else{
	            posarr.push_back(arr[i]);
	        }
	    }
	    int p=0,ne=0,i=0;
	    while(i<n)
	    {
	        if(p!=posarr.size()){
	            arr[i++] = posarr[p++];
	        }
	        if(ne!=negarr.size()){
	            arr[i++] = negarr[ne++];
	        }
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends