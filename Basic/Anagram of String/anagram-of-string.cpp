//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
// jai ganesh
int arr[26] = {0};
    
    for(char it : str1)
    arr[it-'a']++;
    
    for(char it : str2)
    arr[it-'a']--;
    
    int ans = 0;
    
    for(int i=0; i<26; i++)
        if(arr[i] != 0)
            ans += abs(arr[i]);
            
    return ans;
    
    /*
    
    ---------------------- Ailter ------------------------
    
    int remAnagram(string str1, string str2)
{
    unordered_map<char, int> map;
    
    for(int i=0; i<str1.size(); i++)
        map[str1[i]]++;
        
    for(int i=0; i<str2.size(); i++)
        map[str2[i]]--;
        
    int ans = 0;
    
    for(auto i : map){
        
        ans =ans+ abs(i.second);
    }
    
    
    return ans;
    
    
    
    */

}