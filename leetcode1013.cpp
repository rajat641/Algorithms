class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sz = A.size();
        if(sz<3) return false;
        vector< int > dp(sz+2, 0);
        for(int u=1;u<=sz;u++) dp[u] = dp[u-1]+ A[u-1];
        int req = dp[sz]/3;
        int fl=0;
        int in;
        for(int start = 1;start<=sz-2;start++){
            if(dp[start]==req){
                fl=1;
                in= start;
                break;
            }
        }
        if(fl==0) return false;
        for(int end = in+1;end<=sz-1;end++){
                int sum1 = dp[in];
                int sum2 = dp[end]-sum1;
                int sum3 = dp[sz]- dp[end];
                if(sum1==sum2 && sum2==sum3) return true;
                
                
            }        
        return false;
    }
};
