//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            // jai ganesh
            int i=0,j=0,k=0;
            vector<int>v;
            while(i<n1 and j<n2 and k<n3){
                if(A[i]==B[j] and B[j]==C[k]) 
                {
                    v.push_back(A[i]);
                    i++;j++;k++;
                }
                else if(A[i]<B[j]) i++;
                else if(B[j]<C[k]) j++;
                else k++;
                int xx = A[i-1];
                while(A[i]==xx) i++;
                int yy = B[j-1];
                while(B[j]==yy) j++;
                int zz = C[k-1];
                while(C[k]==zz) k++;
            }
            if(v.size()==0) return {-1};
            return v;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends