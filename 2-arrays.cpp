#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector< int >v;
        vector< int >vv;
        int k; cin>>k;
        for(int u=0;u<n;u++){
            int g;
            cin>>g;
            v.push_back(g);
            
        }
        for(int u=0;u<n;u++){
            int g;
            cin>>g;
            vv.push_back(g);
            
        }
        sort(v.begin(),v.end());
        sort(vv.begin(),vv.end());
        bool fl=true;
        for(int u=0;u<n;u++){
            for(int j=0;j<n;j++){
                if(v[u] + vv[j]>=k && vv[j]!=-1){
              //      fl=false;
                    vv[j]=-1;break;
                }
                
            }
            
            
            //if(!fl) fl=true;
            
        }
        bool fl2=true;
        for(int u=0;u<n;u++){
            if(vv[u]!=-1){
                puts("NO");
                fl2=false;
                break;
            }
            
        }
        if(fl2){
            puts("YES");
        }
        
    }
    return 0;
}

