//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    // Driver code
    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String[] str = br.readLine().trim().split(" ");
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(str[i]);
            }

            int ans = new Solution().findKRotation(a, n);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    int findKRotation(int arr[], int n) {
        
        if(arr[0]<arr[n-1] || n == 1)
          return 0;
        return bns(arr,0,n-1,n);
    }
    int bns(int arr[],int l,int r,int n){
        if(l<=r){
            int m = l +(r-l)/2;
            if(m>0 && arr[m-1]>arr[m]){
                return m;
            }
            if(m<n && arr[m]>arr[m+1])
             return m+1;
            if(arr[m]>arr[l]){
                return bns(arr,m+1,r,n);
            }
            return bns(arr,l,m-1,n);
        }
        return -1;
    }
}