//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here
        //jai ganesh s =0;
        int e= n-1;
        int mid =0 ;
        
        while(mid<=e){
            if(a[mid] == 0)
            {
                swap(a[s] , a[mid]);
                mid++;
                s++;
                
            }
            else if(a[mid] == 1)
            mid++;
            
            else if(a[mid] == 2)
            {
                swap(a[mid] , a[e]);
                e--;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends