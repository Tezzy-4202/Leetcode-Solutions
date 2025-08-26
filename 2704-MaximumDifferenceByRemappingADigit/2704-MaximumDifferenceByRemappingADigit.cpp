// Last updated: 8/26/2025, 11:43:56 PM
class Solution {
public:
    int minMaxDifference(int num) {
        string numStr = to_string(num);
        
        // Find maximum value
        int maxVal = num;
        for (char digit : numStr) {
            if (digit != '9') {
                string maxStr = numStr;
                // Replace all occurrences of this digit with '9'
                for (char& c : maxStr) {
                    if (c == digit) {
                        c = '9';
                    }
                }
                maxVal = stoi(maxStr);
                break;
            }
        }
        
        // Find minimum value
        int minVal = num;
        if (numStr[0] != '1') {
            // Replace all occurrences of first digit with '0'
            string minStr = numStr;
            char firstDigit = numStr[0];
            for (char& c : minStr) {
                if (c == firstDigit) {
                    c = '0';
                }
            }
            minVal = stoi(minStr);
        } else {
            // First digit is '1'
            // Option 1: Replace '1' with '0' (creates leading zeros)
            string minStr1 = numStr;
            for (char& c : minStr1) {
                if (c == '1') {
                    c = '0';
                }
            }
            int option1 = stoi(minStr1);
            
            // Option 2: Find first digit that's not '0' or '1' and replace with '0'
            int option2 = num;
            for (char digit : numStr) {
                if (digit != '0' && digit != '1') {
                    string minStr2 = numStr;
                    for (char& c : minStr2) {
                        if (c == digit) {
                            c = '0';
                        }
                    }
                    option2 = stoi(minStr2);
                    break;
                }
            }
            
            // Choose the smaller value
            minVal = min(option1, option2);
        }
        
        return maxVal - minVal;
    }
};