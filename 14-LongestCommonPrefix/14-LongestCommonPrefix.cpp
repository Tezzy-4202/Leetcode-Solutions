// Last updated: 6/7/2025, 7:18:50 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if ( strs.empty()){
            return "";
        }
        string prefix = strs[0];

        for ( int i=0;i<strs.size();i++){
            while ( strs[i].find(prefix)!=0){
                prefix = prefix.substr(0,prefix.length()-1);
                
            }
        }
        return prefix;
    }
};