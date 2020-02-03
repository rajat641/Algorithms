class Solution {
public:
    vector<int> sumZero(int n) {
     
        vector< int > ans;
        if(n%2==1) ans.push_back(0);
        for(int u=1;u<=n/2;u++){
            ans.push_back(u);
            ans.push_back(-u);
            
        }
        return ans;
        
    }
};
