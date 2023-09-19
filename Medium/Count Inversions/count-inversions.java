//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.lang.*;

class Sorting
{
    public static void main (String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        
        while(t-- > 0)
        {
            long n = sc.nextLong();
            long arr[] = new long[(int)n];
            
            for(long i = 0; i < n; i++)
             arr[(int)i] = sc.nextLong();
             
            System.out.println(new Solution().inversionCount(arr, n));
            
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    // arr[]: Input Array
    // N : Size of the Array arr[]
    //Function to count inversions in the array.
    //jai ganesh
    
     static long countAndMerge(long arr[],int low,int high,int mid){
        int n1=mid+1-low;
        int n2=high-mid;
        long[] left=new long[n1];
        long[] right=new long[n2];
        for(int i=0;i<n1;i++){
            left[i]=arr[i+low];
        }
        for(int j=0;j<n2;j++){
            right[j]=arr[mid+1+j];
        }
        int i=0,j=0,k=low;
        long res=0;
        while(i<n1 && j<n2){
            if(left[i]<=right[j]){
                arr[k]=left[i];
                k++;
                i++;
            }
            else{
                arr[k]=right[j];
                res=res+(long)(n1-i);
                k++;
                j++;
            }
        }
        while(i<n1){
            arr[k]=left[i];
            i++;
            k++;
        }
        while(j<n2){
            arr[k]=right[j];
            j++;
            k++;
        }
        return res;
     }
     static long invCount(long arr[],int l,int r){
        long res=0 ;
        if(l<r){
            int mid= l+(r-l)/2; // same as (r+l)/2
            res +=invCount(arr,l,mid);
            res +=invCount(arr,mid+1,r);
            res +=countAndMerge(arr,l,r, mid);
            }
        return res; 
    }
    static long inversionCount(long arr[], long N)
    {
      //  arr[N-1]; //not a statement because array indexing is done in int or short
        long res=0 ;
        int n=(int)N;
        res=invCount(arr,0,n-1);
        return res;    
    }
}

