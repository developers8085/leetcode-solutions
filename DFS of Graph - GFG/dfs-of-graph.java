//{ Driver Code Starts
// Initial Template for Java
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while (T-- > 0) {
            String[] s = br.readLine().trim().split(" ");
            int V = Integer.parseInt(s[0]);
            int E = Integer.parseInt(s[1]);
            ArrayList<ArrayList<Integer>> adj =
                new ArrayList<ArrayList<Integer>>();
            for (int i = 0; i < V; i++) adj.add(new ArrayList<Integer>());
            for (int i = 0; i < E; i++) {
                String[] S = br.readLine().trim().split(" ");
                int u = Integer.parseInt(S[0]);
                int v = Integer.parseInt(S[1]);
                adj.get(u).add(v);
                adj.get(v).add(u);
            }
            Solution obj = new Solution();
            ArrayList<Integer> ans = obj.dfsOfGraph(V, adj);
            for (int i = 0; i < ans.size(); i++)
                System.out.print(ans.get(i) + " ");
            System.out.println();
        }
    }
}

// } Driver Code Ends


class Solution {
    // Function to return a list containing the DFS traversal of the graph.
    public ArrayList<Integer> dfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj) {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        int n = adj.size();
        boolean visited[] = new boolean[n];
        Arrays.fill(visited,false);
        int s = 0;
        Stack<Integer> st = new Stack<Integer>();
        ans.add(0);
        visited[0]=true;
        st.push(0);
        while(st.size()>=1){
             s= st.peek(); st.pop();
             if(visited[s] == false){
                 visited[s]=true;
                 ans.add(s);
             }
             for(int i=adj.get(s).size()-1;i>=0;i--){
                 if(visited[adj.get(s).get(i)] == false){
                     st.push(adj.get(s).get(i));
                 }
             }
        }
        return ans;
    }
}