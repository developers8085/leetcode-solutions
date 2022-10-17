class Solution {
    public String fractionToDecimal(int num, int den) {
        
        if(num == 0)
            return "0";
        StringBuilder ans = new StringBuilder();
        ans.append(((num > 0) ^ (den > 0)) ? "-" : "");
        long numerator = Math.abs((long)num);
        long denominator = Math.abs((long)den);
        ans.append(numerator/denominator);
        numerator=numerator%denominator;
        if(numerator ==0){
         return ans.toString();   
        }
        ans.append(".");
        Map<Long,Integer> mp = new HashMap<Long,Integer>();
        mp.put(numerator,ans.length());
        while(numerator!=0 ){
            numerator = numerator*10;
            ans.append(numerator/denominator);
            numerator = numerator%denominator;
            if(mp.containsKey(numerator)){
                int index = mp.get(numerator);
                ans.insert(index, "(");
                ans.append(")");
                break;
            }else{
                mp.put(numerator,ans.length());
            }
        }
        return ans.toString();
    }
}