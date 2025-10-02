// Last updated: 02/10/2025, 13:26:22
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int total = numBottles;
        while ( numBottles >= numExchange){
            numBottles -= numExchange - 1, numExchange++ , total++;
        }
        return total;
    }
};