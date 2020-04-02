class Solution {
public:
    map< int , int > dp;
    
    void recur(int n){
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                dp[i]+= (dp[j-1]* dp[i-j]);
            }
        }
        
    }
    
    int numTrees(int n) {
        dp[1]=1;
        //dp[2]=2;
        dp[0] = 1;
        recur(n);
        return dp[n];
        
    }
};
