// Last updated: 09/09/2025, 23:20:43
class Solution {
public:
    int mod = (long)(1000000007);
    int peopleAwareOfSecret(int n, int delay, int forget) {
        long noOfPeopleWithSecret = 0;
        
        // dp[i] stores the number of people who learn the secret on day i.
        vector<long> dp(n+1, 0);
        dp[1] = 1;
        
        for(int i=2; i<=n; i++){
            //start sharing today.
            long noOfNewPeopleWithSecret = 0;
            if((i-delay)>=1)
                noOfNewPeopleWithSecret = dp[i-delay];
            
            //forget today and stop sharing.
            long noOfPeopleForgetSecret = 0;
            if((i-forget)>=1)
                noOfPeopleForgetSecret = dp[i-forget];
            
            // Update the count of active sharers.
            noOfPeopleWithSecret = (noOfPeopleWithSecret + noOfNewPeopleWithSecret - noOfPeopleForgetSecret + mod) % mod;
            
            dp[i] = noOfPeopleWithSecret;
        }
        
        long ans=0;
        for(int i=n-forget+1; i<=n; i++){
            ans = (ans+dp[i])%mod;
        }
        return ((int)ans);
    }
};