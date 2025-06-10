// Last updated: 6/10/2025, 4:34:26 PM
class Solution {
public:
    int maxDifference(string s) {
        // Create a frequency array to count occurrences of each character (a-z)
        vector<int> mpp(26);
        // Initialize maxi to 0 (will store maximum odd frequency)
        // Initialize mini to string size (will store minimum even frequency)
        int maxi = 0, mini = s.size();
        
        for (char c : s) mpp[c - 'a']++;    // Count frequency of each character in the string
        // Convert char to index (a=0, b=1, ..., z=25)
        for (int i = 0 ; i < 26; i++) {
            if (mpp[i] % 2 != 0) maxi = max(maxi, mpp[i]);
            if (mpp[i] % 2 == 0 && mpp[i] > 0) mini = min(mini, mpp[i]);
        } 
        return maxi - mini;
    }
};
