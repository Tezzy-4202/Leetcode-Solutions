// Last updated: 6/12/2025, 10:16:47 PM
class Solution {
public:
    int c2n(char a){
        switch(a){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) {
     int result=0;
     for(int i=0;i<s.length();i++){
        if (i+1<s.length() && c2n(s[i])<c2n(s[i+1])){
            result -=c2n(s[i]);
        }
        else {
            result +=c2n(s[i]);
        }
     }
     return result;
    }
};