//{ Driver Code Starts
//Initial Template for javascript
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let n = parseInt(readLine());
        let a = new Array(n);
        let input_ar = readLine().split(' ').map(x=>parseInt(x));
        for(let i=0;i<n;i++)
            a[i] = input_ar[i];
        let obj = new Solution();
        console.log(obj.equilibriumPoint(a, n));
        
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} a
 * @param {number} n
 * @returns {number}
*/

class Solution {
    // Function to find equilibrium point in the array.
    // jai ganesh
    
    equilibriumPoint(a, n)
    {
        if(n===1){
            return 1
        }
        
        if(n===0){
            return -1
        }
        
        if(n==2){
            return -1
        }
        
        let i = 0;
        let total = 0
        
        for(let p=0;p<n;p++){
            total = total + a[p];
        }
        
        let left = 0;
        let right = 0;
        
        while(i<n-2){
         
         
         left = left + a[i];
         right = total - left - a[i+1]
         
         if(left === right){
             return i+2
         }
         
         i++
            
        }
        
        return -1
        
    }
}