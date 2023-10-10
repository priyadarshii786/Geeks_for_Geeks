//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    
    public:

    string Sandwiched_Vowel(string s){
        // Your code goes here
        // jai ganesh
        bool v[ CHAR_MAX ]{};
        v[ 'a' ] = v[ 'e' ] = v[ 'i' ] = v[ 'o' ] = v[ 'u' ] = true;
        
        for ( size_t i{ 1 }; i < s.size() - 1; ++i )
        if ( v[ s[ i ] ] & !v[ s[ i - 1 ] ] & !v[ s[ i + 1 ] ] )
            s.erase( i, 1 );
            
            return s;

    }
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout<<ans<< endl;
    }

	return 0;
}
// } Driver Code Ends