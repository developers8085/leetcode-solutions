class Solution {
    public String intToRoman(int num) {
        
        String ans="";
        
        while(num>=1000){
            int mult = num/1000;
            while(mult>0){
                ans = ans+"M";
                mult--;
            }
            num = num%1000;
        }
        while (num >= 900) {
            ans += "CM";
            num -= 900;
        }
        while(num>=500){
            ans = ans+"D";
            num = num-500;
        }
        while (num >= 400) {
            ans += "CD";
            num -= 400;
        }
        while(num>=100){
            ans=ans+"C";
            num = num-100;
        }
        while (num >= 90) {
            ans += "XC";
            num -= 90;
        }
        while(num>=50){
            ans = ans+"L";
            num = num-50;
        }
        while (num >= 40) {
            ans += "XL";
            num -= 40;
        }
        while(num>=10){
            ans = ans + "X";
            num = num-10;
        }
        while (num >= 9) {
            ans += "IX";
            num -= 9;
        }
        while (num >= 5) {
            ans += "V";
            num -= 5;
        }
        if(num ==4){
            ans = ans+"IV";
            num =0;
        }
        while(num>0){
            num--;
            ans = ans+"I";
        }
        return ans;
        }
    }
