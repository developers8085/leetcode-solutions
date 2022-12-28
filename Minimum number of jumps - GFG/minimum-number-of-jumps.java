// { Driver Code Starts
import java.lang.*;
import java.io.*;
import java.util.*;
class GFG
 {
	public static void main (String[] args) throws IOException
	 {
	 
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
        int t = Integer.parseInt(br.readLine()); 

        while(t-- > 0){
            int size = Integer.parseInt(br.readLine());
            String[] arrStr = ((String)br.readLine()).split("\\s+");
            int[] arr= new int[size];
            for(int i = 0;i<size;i++){
                arr[i] = Integer.parseInt(arrStr[i]);
            }
            System.out.println(new Solution().minJumps(arr));
        }
	 }
	 
}
// } Driver Code Ends


class Solution{
    static int minJumps(int[] arr){
        
        int n = arr.length;
        if(n==1)
          return 0;
        if(arr[0]<=0)
        return -1;
        int jumps=1;
        int maxReach = arr[0];
        int step = arr[0];
        for(int i=1;i<n;i++){
            if(i==n-1){
                return jumps;
            }
            maxReach = Math.max(maxReach,i+arr[i]);
            step--;
            if(step==0){
                jumps++;
                if(i>=maxReach){
                    return -1;
                }
                step = maxReach - i;
            }
        }
        return -1;
    }
    int anotherSol(int[] arr){
        int n = arr.length;        
        if(n==1)
          return 0;
        if(arr[0]<=0)
        return -1;
         
        int min_jump[] = new int[arr.length];
        // Arrays.fill(min_jump,Integer.MAX_VALUE);
        min_jump[0]=0;
        for(int i=1;i<n;i++){
            min_jump[i]=n+1;
            for(int j=0;j<i;j++){
                if(j+arr[j]>=i && min_jump[j]!=n+1){
                    min_jump[i]=Math.min(min_jump[j]+1,min_jump[i]);
                    break;
                }
            }
            if(min_jump[i]==n+1){
                return -1;
                // break;
            }
        }
        if(min_jump[n-1]==n+1)
          min_jump[n-1]=-1;
        return min_jump[n-1];
    }
}