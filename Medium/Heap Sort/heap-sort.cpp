//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
      // jai ganesh
      int l=2*i+1;
      int r=2*i+2;
      int largest=i;
      if(l<n && arr[largest]<arr[l]){
          largest=l;
      }
      if(r<n && arr[largest]<arr[r]){
            largest=r;
      }
      
      //if we found child greater than the parent make child parent
      if(largest!=i){
          swap(arr[largest],arr[i]);
          //there is chance ith value go further down in heap so heapifiy it
          heapify(arr,n,largest);
      }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
    //(n/2-1)th node is first non-leaf node i.e. all node greater than (n/2-1) are leaf node
        //so there is no need to heapified leaf node it get there desire position by parents
        //lower nodes get heapified first
        for(int i=n/2-1;i>=0;i--){
            heapify(arr,n,i);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        //first we have to build max heap so we got max elm on top swap it to last
        //and iterate for length-1 array
        buildHeap(arr,n);
        //here we got max elm on idx 0 to swap it to last elm and we can clearly see after
        //swapping the 0th elm is only which is un heapified so heapify it i.e. take that elm 
        //to its pos.
        for(int i=n-1;i>=0;i--){
            swap(arr[0],arr[i]);
            //reduce array size by one in each iteration
            heapify(arr,i,0);    //since 0th elm is not heapified
        }
    }
};




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends