class Solution {
public:
    static int func(int x){
        int ans=0;
        while(x!=1){
        if(x%2==1) x = 3*x+1;
        else x/=2;
        ans++;}
        return ans;
    }
    
        
    //}
    struct comp{
      bool operator()(int x, int y){
          if(func(x)==func(y)) return x<y;
          return func(x)< func(y);
      }
        
    };
    
    int getKth(int lo, int hi, int k) {
        vector< int > v;
        for(int i=lo;i<=hi;i++) v.push_back(i);
        sort(v.begin(), v.end(), comp());
    //   for(auto i:v) cout<< i<<" ";
        return v[k-1];
        
    }
};
