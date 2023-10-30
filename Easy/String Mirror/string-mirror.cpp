//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
        /*
    LETS ANALYSE HOW CODE SHOULD WORK AND HOW SHOUL WE PICK THE PREFFIX

    eq ->abc 
    sirf a liya -> aa
    ab liya --> abba
    abc liya abccba
    lexographical --> aa<abba<abccba
    
    2. ab
        sirf a liya --> ans-> aa
        ab liya --> abba
        order --> aa<ab
        
      info no. a)  we get info that if next charachter bda hai hmary pichly choosen charachter sy mtt lo vo hmesha bda ayega
        
        
    3. ca
        c liya --> cc
        ca liya --> caac 
        order --> caac<cc
        
        info no. b) agar pichla choosen charchy=ter (c) is greater then next charachter to be choosen (a)
        then ye next charachter (a) choose kar lo ye order chota hi dega
        
    4. EDGE case 
    agar equal ata hai
    
    aab--> a ly sirf = aa
    aa liya -> aaaa
    aab to vese hi nhi lena kyonki 3rd choosen charachre hmara 2nd coosen char sy bda hai b>a
    phir bhi agar ly liya to --> ans =aabbaa
    
    aa<aaaa<aabbaa 
    inf no. c)agar same ata next  hai then na lo cuz dekha na hmny aa< aaaa to next a lena hi nhi chiye tha
    
    5. special case of equal baaab
    
    only b --> bb
    ba--> baab
    baa-> baaaab
    
    oh no ye kya hoyga  equal character lene sy to chota a oredr a gya baaaab<baab<bb
    
    edit the info c) agar 2nd position py equal hai (aab) --> na include kro
    but agar kisi or position py equal charachter hai then include karlo(baaaab<baab)
    
*/
         string temp="";
        //phla charachter to daal hi lo
        temp+=str[0];
        for(int i=1;i<str.length();i++)
        {
            if(i!=1 and temp[i-1]==str[i])
            temp+=str[i];
            else if(temp[i-1]>str[i])
            temp+=str[i];
            else
            break;
        }
        string temp2=temp;
        reverse(temp.begin(),temp.end());
        temp2+=temp;
        return temp2;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends