
#include <bits/stdc++.h>
using namespace std;
# define ll   long long 
vector< vector< pair< ll, ll > > >g;
vector< ll > dis;
class comp{
    public:
         bool operator()(pair< ll , ll> a, pair< ll, ll > b){
      return a.second > b.second;
               }  
    
};
void dij(int st){
    dis[st]=0;
    priority_queue< pair< ll , ll>, vector< pair< ll , ll> >, comp> q;
    q.push(make_pair(st, 0));
    while(!q.empty()){
        pair< ll , ll > kk= q.top();
        q.pop();
        for(vector<pair< ll , ll> >::iterator i= g[kk.first].begin();i!= g[kk.first].end();i++){
            if(dis[kk.first] + i->second < dis[i->first])
                {
                dis[i->first]=dis[ kk.first] + i->second;
                q.push(make_pair(i->first,dis[ kk.first] + i->second));
            }
            
            
        }
        
        
        
    }
    
}
map< pair< ll , ll >, ll >mm;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        ll ver, ed;
        cin>> ver>>ed;
        dis= vector< ll > (ver+1, INT_MAX);
        g=vector< vector< pair< ll , ll > > >(ver+2);
        for(ll u=1;u<=ed;u++){
            ll st, en, wt;
            cin>>st>>en>>wt;
            if(mm[make_pair(st, en)]==0){
            mm[make_pair(st, en)]= wt;
            g[st].push_back(make_pair(en, wt));
                g[en].push_back(make_pair(st, wt));}
            else{
                wt= min(wt,mm[make_pair(st, en)]);
                    mm[make_pair(st, en)]= wt;
            g[st].push_back(make_pair(en, wt));
                g[en].push_back(make_pair(st, wt));
                
            }
        }
        ll start;
         cin>> start;
        dij(start);
        for(ll u=1;u<=ver;u++){
            if(u== start) continue;
            if(dis[u]!= INT_MAX)
            cout<< dis[u]<<" ";
            else cout<<"-1"<<" ";
        }
        cout<<endl;
       dis.clear();g.clear();
        
    }
    return 0;
}

