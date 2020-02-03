
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector< int > ans;
        int n = nums.size();
        int sum =nums[0];
        int sz = nums.size();
        
        for(int u=1;u<sz;u++){
            if(nums[u]==nums[u-1]){
                ans.push_back(nums[u-1]);
                
               // ans.push_back(u+1);break;
            }
            else sum+=nums[u];
            
        }
        ans.push_back(n*(n+1)/2 - sum);
        return ans;
        
    }
};
