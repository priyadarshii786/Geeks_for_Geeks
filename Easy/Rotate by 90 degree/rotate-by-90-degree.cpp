//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here
        // jai ganesh
        for(int i=0;i<n;i++)
            for(int j=i;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
        
        // transposed the given matrix
        
        for(int j=0;j<n;j++)
            for(int i=0;i<n;i++)
            {
                swap(matrix[i][j],matrix[n-i-1][j]);
                if(n-1-i==n/2)
                    break;
            }
       // reversed the column elements
    } 
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends