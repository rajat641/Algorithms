/*

overflow!!!!!!!!

*/
 
#include<bits/stdc++.h>
using namespace std;
#define ll   long long 
//#define max 706000
#define gc getchar_unlocked
#define pc putchar_unlocked
//inline void get(int *p){register  int n=0,sign=1,a=gc();while(a<'0'||a>'9'){ if(a=='-'){sign=-1;a=gc();break;} a=gc();}while(a>='0' && a<='9'){n=(n<<1)+(n<<3)+a-'0';a=gc();}*p=n*sign;}
  
 
//inline void put(int n){char d[10];int i=0;if(n<0){pc('-');n=-n;}do{d[i++]=n%10+'0';n=n/10;}while(n);while(i)pc(d[--i]);pc('\n');}
#define     sc(a)  scanf("%lld",&a) 
#define     p(a)  printf("%lld\n",a) 
#define     l(i,a)  for(i=0;i<a;i++)
#define     re(j,a,b)  for(j=a;j<=b;j++)  
# define ll   long long 
#define modu 1000000007
int modular_pow(ll int  base, ll int  exponent,int m)
{
    if(exponent==0)
    return 1;
    else if(exponent%2==0){
        ll int res=modular_pow(base,exponent/2,m);
        return (res*res +m)%m;
        
        
    }
    else{
        return (modular_pow(base,exponent-1,m) * base)%m;
        
    }
}
 
 
 
 int gcd(int a,int b){
    if(b==0)
    return a;//gcd
    else return gcd(b,a%b);
 }
 
bool chek(int x){
    return (x&&!(x&(x-1)));// power of 2
}
int onebits(int n){
    return __builtin_popcount(n);//count number od set bits in a number
 
}
 
 
/**
finaaly it worked!!!!!!
 
*/


ll int a[100001];
vector< ll int >dp;
int main(){
    int t;
    cin>>t;
    while(t--){
    	ll int n;
    	cin>>n;
    	ll int sum2=0;
        bool fl=true;
        ll int mm=INT_MIN;
    	dp=vector< ll int >(n+1,0);//vector< ll int >dp(n+1,0);
    	for(ll int u=1;u<=n;u++){
    		cin>>a[u];
    		if(a[u]>=0){
                fl=false;
                sum2+=a[u];}
    		mm=max(mm,a[u]);
    	}
        if(fl){
            cout<<mm<<" "<<mm<<endl;
            
        }
        else{
        ll int sum=0;
        ll int maxx=INT_MIN;
    	for(ll int u=1;u<=n;u++){
    		dp[u]=max(dp[u-1]+a[u],a[u]);
            maxx=max(maxx,dp[u]);
          // cout<<dp[u]<<" ";
    		
    	}//cout<<endl;
            cout<<maxx<<" "<<sum2<<endl;}dp.clear();
    }
    return 0;
}

