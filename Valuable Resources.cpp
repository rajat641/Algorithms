/*
RAJAT SINGH
VIT VELLORE
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
 
 
/*
finaaly it worked!!!!!!
 
*/

 int main(){
//freopen("in.txt","r",stdin);
int n;
cin>>n;
vector<pair<ll, ll> > v;
ll mmx;
ll mix;
ll mmy;
ll miy;
for(int u=0;u<n;u++){
ll st,en;
cin>>st>>en;
if(u==0){
mmx=st;
mix=st;
mmy=en;
miy=en;

}
else{
mmx=min(mmx,st);
mix=max(mix,st);
mmy=min(mmy,en);
miy=max(miy,en);
}}
ll ans1,ans2;
if(mmx>=0 && mix>=0)
    ans1=mix-mmx;
else {if(mix<0 && mmx<0)
    ans1=abs(mmx- mix);
else ans1= abs(mmx) + abs(mix);}

if(mmy>=0 && miy>=0)
    ans2=miy-mmy;
else {if(miy<0 && mmy<0)
    ans2=abs(mmy- miy);
else ans2= abs(mmy) + abs(miy);}


if(ans1> ans2)
    cout<<(ll)ans1*ans1<<endl;
else cout<<(ll)ans2*ans2<<endl;


//v.push_back(make_pair(st,en));



return 0;}