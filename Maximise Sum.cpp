
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

vector< ll >v;
ll a[1*100001];
set< ll>mm;
ll just[100001];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        ll m;
        scanf("%d%lld\n",&n,&m);
        //cin>>n >>m;
        
        v=vector< ll >(n+1,0);
        for(int u=1;u<=n;u++){
            scanf("%lld",&a[u]);
            if(u==1) v[u]= a[u]%m;
            else v[u] =(v[u-1]+a[u]%m)%m;
            mm.insert(v[u]);
        }
    //    mm.insert(0);
        ll ans=-1;
        ll x;
       for(int u=n;u>=1;u--){
           set< ll >::iterator i= mm.find(v[u]);
           if(i!=mm.end()){
           ++i;
           if(i== mm.end())
               just[u]=0;
           else just[u]=*i;
         //   cout<< *i<<" ";
               mm.erase(mm.find(v[u]));}
           else just[u]=0;
       }
        for(int u=n;u>=1;u--){
            ans= max(ans, max(v[u],(v[u]-just[u]+m)%m));
        //   cout<<just[u]<<" "; 
        }
        
        printf("%lld\n",ans);
        //p(ans);
        mm.clear();
        v.clear();
    }
    return 0;
}

