class Solution {
    public static int[] asteroidCollision(int n, int[] A) {
        Stack<Integer> s = new Stack<Integer>();
        for(int i=0;i<n;i++){
            if(s.isEmpty() == true || A[i]>=0 || s.peek()<0){
                s.push(A[i]);
            }else{
                while(!s.isEmpty() && s.peek()>=0 && s.peek()<Math.abs(A[i])){
                    s.pop();
                }
                if(s.isEmpty()==true){
                    s.push(A[i]);
                }else{
                    if(s.peek()>=0 && s.peek()==Math.abs(A[i])){
                        s.pop();
                    }else{
                        if(s.peek()<0)
                         s.push(A[i]);
                    }
                }
            }
        }
        int[] ans = new int[s.size()];
        int index =s.size()-1;
        while(!s.isEmpty()){
            ans[index--]=s.peek();s.pop();
        }
        return ans;
    }
}
