//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main (String[] args)
    {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int [][]arr = new int[n][m];
            
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < m; ++j)
                    arr[i][j] = sc.nextInt ();

    		System.out.println (new Sol().maxOnes (arr, n, m));
        }
        
    }
}
// } Driver Code Ends


//User function Template for Java

class Sol
{
    public static int maxOnes (int Mat[][], int N, int M)
    {
        int i=0;
        int j=0;
        int ans = -1;
        int maxC =-1;
        while(i<N&&j<M){
            while(j<M&&Mat[i][j]==0){
                j++;
            }
            if(M-j>maxC){
                ans = i;
                maxC = M-j;
            }
            if(j==M){
                j=0;
            }
            i++;
            while(i<N && j>=0&&Mat[i][j]==1){
                j--;
            }
            if(j==-1){
                j=0;
            }
        }
        return ans;
    }
}