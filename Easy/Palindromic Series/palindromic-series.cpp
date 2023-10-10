//{ Driver Code Starts
#include<bits/stdc++.h>
#include<string>

using namespace std;

bool pallan(int n);


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin >> n;
        
            
        if(pallan(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool pallan(int n){
    
    // Complete the function
    // jai ganesh
  string ans=to_string(n);
  string val="";
  int count=0;
  for(int i=0;i<ans.length();i++)
  {
     
      val+= ans[i]+'a';
      count+=ans[i]-'0';
  }
  string temp="";
  for(int i=0;i<count;i++)
  {
      temp+=val;
  }
  int i=0;
  int j=count-1;
  while(i<j)
  {
      if(temp[i]!=temp[j])
      {
          return false;
      }
      i++;j--;
  }
  return true;
  
    
}
