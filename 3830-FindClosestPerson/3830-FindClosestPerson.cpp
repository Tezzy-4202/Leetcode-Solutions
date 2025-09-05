// Last updated: 05/09/2025, 18:39:02
class Solution {
public:
    int findClosest(int x, int y, int z) {
        return abs(x-z)==abs(y-z)?0:abs(x-z)<abs(y-z)?1:2;
    }
};