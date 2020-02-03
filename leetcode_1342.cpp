class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int sz = arr.size();
        map< int , int > m;
        vector< pair< int , int > >v;
        for(int u=0;u<sz;u++) m[arr[u]]++;
        for(map< int , int >::iterator i= m.begin();i!=m.end();i++){
            v.push_back({i->second, i->first});
        }
        sort(v.begin(), v.end());
        int ans =sz;
            int c=0;
        for(int u=v.size()-1;u>=0;u--){
            ans-=v[u].first;
            c++;
            if(ans<=sz/2) return c;
            
            
        }
            return c;
        
        
    }
};
