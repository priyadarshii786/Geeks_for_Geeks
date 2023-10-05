//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int N)
{
//Your code here
//jai ganesh
int sum =0;

int s[N];
s[0]=0;
for(int i=0;i<N;i++)
{ sum=sum+A[i];
 s[0]=A[i]*i+s[0];
}
int max=s[0];
for(int i=0;i<N-1;i++)
{s[i+1]=s[i]+sum-(N*A[N-1-i]);
 if(s[i+1]>max)
 max=s[i+1];
 s[i]=s[i+1];
}
return max;
}