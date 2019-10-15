#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int a[4*100001];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        long long int res=0;
        for(int u=1;u<=x;u++){
            cin>>a[u];
            if(u%2==1) res^= a[u];
        }
        if(x%2==0) puts("0");
        else printf("%lld\n",res);//<<endl;
        
    }
    return 0;
}

