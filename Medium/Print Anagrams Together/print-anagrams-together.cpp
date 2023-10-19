//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        //jai gaensh
        
        
        /*
        
        The key idea is to use the sorted version of each word as the key in the map. Anagrams will have the same sorted key, allowing them to be grouped together. By storing the original words in the corresponding vector values, we can group all anagrams together efficiently.

Algorithm:

1.Create an empty unordered map mp to store the sorted version of each word as the key and the original word as the value.
2.Iterate over each word in the string_list vector.
3.For each word:
4.Make a copy of the word and store it in a temporary variable (temp).
5.Sort the characters of the word in ascending order using sort().
6.Use the sorted version of the word as the key and add the original word (temp) to the vector value corresponding to the key in the map.
7.After processing all the words, create an empty vector of vector of strings ans to store the grouped anagrams.
8.Iterate over each key-value pair in the map.
9.For each key-value pair, append the vector value (which contains all anagrams of a particular key) to the ans vector.
10.Return the ans vector containing the grouped anagrams.
        
        */
        
        
          vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(auto &it : string_list){
            string temp = it;
            sort(it.begin(),it.end());
            mp[it].push_back(temp);
        }
        
        for(auto &k : mp)
            ans.push_back(k.second);
        return ans;
    }
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
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends