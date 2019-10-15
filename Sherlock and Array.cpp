#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long  rig[2000001];
long long lef[2000001];
long long  a[2000001];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int u=1;u<=n;u++) cin>>a[u];
        for(int u=1;u<=n;u++){
            lef[u]=lef[u-1]+a[u];
            
        }
        for(int u=n;u>=1;u--){
            rig[u]=rig[u+1]+a[u];
            
        }
        bool fl=true;
        for(int u=1;u<=n;u++){
            if(lef[u-1]== rig[u+1]){
                fl=false;break;
            }
            
        }
        if(!fl){
            puts("YES");
        }
        else puts("NO");
        for(int u=0;u<=100003;u++){
            rig[u]=0;
            lef[u]=0;
        }
    }
    return 0;
}

