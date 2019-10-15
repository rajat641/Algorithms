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
        ll int res=modular_pow(base,exponent/2)%modu;
        return (res*res )%modu;
        
        
    }
    else{
        return (modular_pow(base,exponent-1) * base)%modu;
        
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
string s;
void swap(char *x, char *y){
	char t;
	t= *x;
	*x= *y;
	*y=t;
	
}
int c=0;
void pr(int st, int e){
	if(st==e){
	cout<<s<<endl;
	}
	else re(i,st,e){
	swap(&s[i],&s[st]);	
	pr(st+1,e);
	swap(&s[i],&s[st]);
		
	}
	
}
vector< pair< ll, ll > >v;
ll a[200001];
ll dp[200001];
int main()
{
freopen("inp.txt","r",stdin);
ll n ,k;
cin>> n>>k;
l(i, n){
	ll x, y;
	cin>>x>>y;
	a[i]=x;
	v.push_back(make_pair(x,y));
	
}
sort(v.begin(), v.end());
sort(a,a+n);
l(i,n){
	if(i==0) dp[i]=v[i].second;
	else dp[i]=dp[i-1]+ v[i].second;
	
}
ll ans=0;
l(i, n){
	ll cc=0;
	ll kk= v[i].first + k;
//	cout<<lower_bound(a+i, a+n,kk);
	if(lower_bound(a, a+n,kk)-a-1<= n-1){
	
	cc= lower_bound(a,a+n,kk)-a-1;
//	cout<< cc<<endl;
	if(binary_search(a,a+n,kk)){
	
		--cc;
		
	}
	if(i>0){
		ans= max(ans, dp[cc]- dp[i-1]);
	}
	else{
		ans= max(ans, dp[cc]);
	}}
	else{
	if(i>0)
	 ans=max(ans, dp[n-1]- dp[i-1]);
	else ans= max(ans, dp[n-1]);}
	
		
		
	//}
	
}
cout<< ans<<endl;
  return 0;
}
