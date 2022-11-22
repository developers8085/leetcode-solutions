//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;


// } Driver Code Ends
//User function template for JAVA

class Solution
{
    //Function to find the minimum indexed character.
    public static int minIndexChar(String str, String patt)
    {
        int[] hs = new int[256];
        for(int i=0;i<256;i++){
            hs[i]=-1;
        }
        int n = patt.length();
        int m = str.length();
        for(int i=0;i<n;i++){
            hs[patt.charAt(i)]++;
        }
        for(int i=0;i<m;i++){
            if(hs[str.charAt(i)]>=0){
                return i;
            }
        }
        return -1;
    }
}

//{ Driver Code Starts.

class GFG {
	public static void main (String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0)
		{
		    t--;
		    
		    String s1=sc.next();
		    String s2=sc.next();
		    
		    int res = new Solution().minIndexChar(s1, s2);
		    System.out.println(res);
		}
	}
}

// } Driver Code Ends