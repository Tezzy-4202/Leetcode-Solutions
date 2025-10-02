// Last updated: 02/10/2025, 13:19:01
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrank = numBottles;
        int empty = numBottles;

        while (empty >= numExchange) {
            int newBottles = empty / numExchange;
            totalDrank += newBottles;
            empty = empty % numExchange + newBottles;
        }
        return totalDrank;
    }
};
