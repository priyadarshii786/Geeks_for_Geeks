//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        //jai ganesh
        
        if (k > str.length())
        return 0;
        string temp = str.substr(0, k);
        
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (temp == arr[i].substr(0, k))
            count++;
        }
        
        return count;
        
    }
        
        
/* -> Check the base case again: check if the length of s is >= k or not. If not, return 0.
-> Define a Node to represent each node in the trie. It will have two members: pre_cnt, which will store the count of strings passed through this node, and 'next', an unordered_map that maps characters to the next node in the trie.

-> Now, iterate through the given array of strings.
-> For each character in any string, check if there is a corresponding node for the given character in the trie. If not, create one and add it to the next map of the current node.
-> Also, increment the pre_cnt value of the node, indicating that a string has passed through this node.
-> Finally, traverse through the trie for the first k characters of the given string s. If any character is not found in the next map of the current node, it implies that there doesn't exist any string with the same prefix of length k as the given string.
-> Finally, return the pre_cnt of the final reached node, representing the count of strings with the desired common prefix.

 
 
 
 struct Node{
        int pre_cnt;
        unordered_map<char,Node*>next;
        Node(){
            pre_cnt=0;
        }
    };
    int klengthpref(string a[], int n, int k, string s){    
        if(s.length()<k)return 0;
        Node* root = new Node();
        int i,j,cnt=0;
        for(i=0;i<n;i++){
            string x=a[i];
            Node *temp=root;
            for(j=0;j<x.length();j++){
                if(temp->next.find(x[j])==temp->next.end())temp->next[x[j]]=new Node();
                temp=temp->next[x[j]];
                temp->pre_cnt++;
            }
        }
        Node *temp=root;
        for(i=0;i<k;i++){
            if(temp->next.find(s[i])==temp->next.end())return 0;
            else temp=temp->next[s[i]];
        }
        return temp->pre_cnt;
        
    }
    
    
    */
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends