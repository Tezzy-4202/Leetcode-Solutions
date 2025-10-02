// Last updated: 02/10/2025, 13:21:36
class Solution {
public:
    bool isNoZero(int x){
        while ( x>0){
            if (x%10==0) return false;
                x/=10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        vector<int> arr;
        for ( int i=1;i<=n/2;++i){
            if ( isNoZero(i) && isNoZero(n-i)){
                return {i,n-i};
            }
        }
        return {};
    }
};