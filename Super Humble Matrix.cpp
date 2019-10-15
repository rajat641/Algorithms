#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll dp[2000000];
void pre(){
   dp[0]=1;
    for(int u=1;u<=2000001;u++)
        dp[u]= (dp[u-1]*u)%1000000007;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    pre();
    int n, m;
    cin>>n>>m;
    ll p= n+m-1;
    ll x=p/2;
    ll ans=1;
  //  ll k=(n+m)/2;
    if(n>m) swap(n, m);
    int k=n;
   for(int u=1;u<=p;u++){
       if(u<=k) ans= (ans*dp[u])%1000000007;
       else{
           if(2*n <=(n+m-1)){
           if(u>n && u<=m-1)ans=(ans*dp[n])%1000000007;
               else ans=(ans*dp[k--])%1000000007;}
           else{
               ans=(ans*dp[--k])%1000000007;
               
           }
       
       }
   
//   string s;
  // s.
   }
    cout<< ans<<endl;
    
    return 0;
}
