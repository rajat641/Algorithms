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
vector< pair< ll , ll > >vv;
vector< ll >r1;
vector< ll >r2;
bool che(ll r1, ll r2){
	for(int u=0;u<vv.size();u++){
		if(vv[u].first>r1 && vv[u].second>r2) return false;
		
	}
	return true;
	
}

 int main(){
//freopen("input.txt","r",stdin);
int n;
//cin>>n;
ll x1,y1,x2,y2;
scanf("%d%lld%lld%lld%lld",&n,&x1,&y1,&x2,&y2);
//cin>>x1>>y1>>x2>>y2;
ll k1;ll k2;
for(int u=0;u<n;u++){
	ll int x,y;
	scanf("%lld%lld",&x,&y);//,&x2,&y2);
//	vv.push_back(make_pair((x-x1)*(x-x1)+(y-y1)*(y-y1),(x-x2)*(x-x2)+(y-y2)*(y-y2)));
	r1.push_back((x-x1)*(x-x1)+(y-y1)*(y-y1));
	r2.push_back((x-x2)*(x-x2)+(y-y2)*(y-y2));
	
	
}
//r1.push_back(0);
//r2.push_back(0);
//sort(r1.begin(),r1.end());
//sort(r2.begin(),r2.end());
//for(int g=0;g<r1.size();g++) cout<<r1[g]<<" ";printf("\n");
//for(int g=0;g<r2.size();g++) cout<<r2[g]<<" ";
bool fl=true;
ll int mm;
ll r11,r22;
ll ans=0;
for(ll u=0;u<r1.size();u++){
	r11=r1[u];
	r22=0;
	for(ll k=0;k<r2.size();k++){
		if(u==k) continue;
		if(r11<r1[k]){
		
		r22=max(r22,r2[k]);
	//	cout<<r1[u]<<" "<<r2[k]<<endl;}
		
		}}
		if(ans==0) ans=r11+r22;
		else ans=min(r11+r22,ans);
		//cout<<r1[u]<<" "<<r2[u]<<endl;
		
	}
	ll ans1=0;
	ll r111,r221;
for(ll u=0;u<r2.size();u++){
	r111=r2[u];
	r221=0;
	for(ll k=0;k<r1.size();k++){
		if(u==k) continue;
		if(r111<r2[k]){
		
		r221=max(r221,r1[k]);
	//	cout<<r1[u]<<" "<<r2[k]<<endl;}
		
		}}
		if(ans1==0) ans1=r111+r221;
		else ans1=min(r111+r221,ans1);
		//cout<<r1[u]<<" "<<r2[u]<<endl;
		
	}




printf("%lld\n",min(ans,ans1));
vv.clear();r1.clear();r2.clear();

return 0;}
