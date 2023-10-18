//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string ans ="";
       for(auto i : s1)
           if(s2.find(i)==string::npos) ans+=i;
       for(auto i : s2)
           if(s1.find(i)==string::npos) ans+=i;
       return(ans == "") ? "-1" : ans;
    }
    
    
    /*--------------------- Ailter ------------------------------------
    
    
     public static String concatenatedString(String s1,String s2)
   {
       String output = "";
       
    
       for(int i = 0; i < s1.length(); i++) {
           if((s2.indexOf(s1.charAt(i)) == -1))
           output += s1.charAt(i);
       }
           
       for(int i = 0; i < s2.length(); i++) {
           if(s1.indexOf(s2.charAt(i)) == -1)
               output += s2.charAt(i);
       }
       
       
       if(output.length() == 0)
           return "-1";
       return output;
   }
   
   
   */

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends