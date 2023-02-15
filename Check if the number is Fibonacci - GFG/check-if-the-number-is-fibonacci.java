//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.checkFibonacci(N));
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution{
    static String ans ="No";
    static String checkFibonacci(int n){
        ans ="No";
        
        if(n==0 || n==1){
            return ans="Yes";
        }
        if(n>=2)
          recursive(n,0,1);
        return ans;
    }
   static void recursive(int n,int a,int b){
        if(n==(a+b)){
            ans = "Yes";
            return ;
        }
        if((a+b)>n){
            ans="No";
            return ;
        }
        recursive(n,b,a+b);
    }
}
