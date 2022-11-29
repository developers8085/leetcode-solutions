//{ Driver Code Starts
import java.util.Scanner;
import java.util.*;
import java.io.*;

class ThirdLargestElement
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			int n =sc.nextInt();
			int arr[] = new int[n];
			for(int i=0;i<n;i++)
				arr[i] = sc.nextInt();
			Solution g = new Solution();
			System.out.println(g.thirdLargest(arr,n));
		t--;
		}
	}
}
// } Driver Code Ends


class Solution
{
    int thirdLargest(int a[], int n)
    {
	    int f1 = a[0];
	    int f2 = -1;
	    int f3 = -1;
	    for(int i=1;i<n;i++){
	        if(a[i]>f3){
	            if(a[i]>f1){
	                f3 = f2;
	                f2=f1;
	                f1=a[i];
	            }else if(a[i]>f2){
	                f3=f2;
	                f2=a[i];
	            }else{
	                f3=a[i];
	            }
	        }
	    }
	    return f3;
    }
}
