//{ Driver Code Starts
//Initial Template for Java



import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            int n = Integer.parseInt(br.readLine().trim());
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            new Solution().rearrange(arr, n);
            for (int i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }
}

// } Driver Code Ends


//User function Template for Java




class Solution {
    void rearrange(int arr[], int n) {
        int[] tmp = new int[n];
        int i=-1;
        int j=n;
        for(int k=0;k<n;k++){
            if(arr[k]>=0){
                tmp[++i]=arr[k];
            }else{
                tmp[--j]=arr[k];
            }
        }
        int k=0;
        int J=j;
        int I=i;
        j=n-1;
        i=0;
        while(i<=I && j>=J){
            arr[k++]= tmp[i++];
            arr[k++]= tmp[j--];
        }
        while(i<=I){
            arr[k++]=tmp[i++];
        }
        while(j>=J){
            arr[k++]=tmp[j--];
        }
    }
}