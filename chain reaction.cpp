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
#define     sc(a)  scanf("%d",&a) 
#define     p(a)  printf("%d\n",a) 
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
ll int a[1*1000003];
ll int b[1*1000003];
ll int des[4*1000003];
map< ll int , ll int > ma;
vector< ll int > dis(4*1000001);
vector< ll int > dp(4*1000001);
vector< ll int > dp1(4*1000001);
vector< ll int > dis2(4*1000001);
vector< pair< ll int , ll int > >pp;
int main(){
//freopen("input.txt","r",stdin);
     ll int n;
     cin>>n;
   //  ll int mm=0;
     for(ll int u=0;u<n;u++){
     
     cin>> a[u]>> b[u];
     pp.push_back(make_pair(a[u],b[u]));
     ma[a[u]]++;
    // mm=max(mm,a[u]);
     }
     sort(pp.begin(),pp.end());
     for(ll int u=0;u<=1000001;u++)
     dis[u]=0;
//   dis=vector< ll int >(mm+3,0);
     //vector< int > dis(mm+2,0);
     if(ma[0]>0)
     dis[0]=1;
     for(ll int u=1;u<=1000000;u++){
        if(ma[u]>0)
        dis[u]=dis[u-1]+1;
        else dis[u]=dis[u-1];
        
     }
     des[0]=0;
     for(ll int u=1;u<n;u++){
        int diss=pp[u].first-pp[u].second;
        if(diss<0)
        diss=0;
        if(diss-1>=0)
        des[u]=dis[pp[u].first]-dis[diss-1]-1;
        else des[u]=dis[pp[u].first]-1;
        
     }
   //  dp=vector< ll int >(n+2,0);
    dp[0]=0;
     for(ll int u=1;u<n;u++){
        dp[u]= des[u];
         if(u-des[u]-1 >=0)
         dp[u]+=dp[u-des[u]-1];
        
     }
     ll int ans=dp[n-1];
     ll int sum=0;
     for(ll int u=n-1;u>=0;u--){
        sum=n-u;
        if(u-1>=0)
        sum+=dp[u-1];
        ans=min(sum,ans);
        
     }
     cout<< ans<<endl;
     dis.clear();
     dis2.clear();
     ma.clear();dp.clear();dp1.clear();
   // for(int u=0;u<n;u++) cout<< dp[u]<<" ";
    return 0;
    
}
