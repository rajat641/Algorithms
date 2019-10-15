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
#define     sc(a)  scanf("%d",&a) 
#define     p(a)  printf("%d\n",a) 
#define     l(i,a)  for(int i=0;i<a;i++)
#define     re(j,a,b)  for(int j=a;j<=b;j++)  
# define ll   long long 
#define modu 1000000007
ll  modular_pow(ll int  base, ll int  exponent)
{
    if(exponent==0)
    return 1;
    else if(exponent%2==0){
        ll int res=modular_pow(base,exponent/2);
        return (res*res );
        
        
    }
    else{
        return (modular_pow(base,exponent-1) * base);
        
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


ll max(ll x, ll y){
	if(x>=y) return x;
	else return y;
}
vector< pair< ll , ll > >v;
int dp[100001];
int main() {

//	freopen("inp.txt","r",stdin);
//string s= "rajat";
int n;
cin>>n;
l(i,n){
	ll st ,en;
	cin>>st>>en;
	v.push_back(make_pair(st, en));
	dp[i]=0;
}
if(n==1){
	puts("1");
}
else{

dp[0]=1;
re(i,1,n-2){
	ll disl=v[i].first-v[i-1].first;
	ll disr=v[i+1].first-v[i].first;
	if(disl> v[i].second )
	else{
	if(disr> v[i].second){
	v[i].first+=v[i].second;
	dp[i]=dp[i-1]+1;}
	else dp[i]=dp[i-1];}
	
}
dp[n-1]=dp[n-2]+1;
cout<< dp[n-1]<<endl;
v.clear();

}
return  0;}
