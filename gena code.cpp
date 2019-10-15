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
vector< string > vv;
vector< string > ss;
bool che(string &s){
	map< char, int > ma;
	int le=s.length();
	for(int u=0;u<le;u++){
		ma[s[u]]++;
		if(s[u]-'0'> 1) return false;
	}
	if(ma.size()>2) return false;
	else {
		if(ma['1']>1) return false;
		else return true;
	}
}
int ret(string d){
	int c=0;
	int sz=d.length();
	for(int u=0;u<sz;u++){
		if(d[u]=='0') c++;
		
		
	}
	return c;
	
}

 int main(){
//freopen("input.txt","r",stdin);
int t;
cin>>t;
bool fl=true;
while(t--){
	string s;
	cin>>s;
	if(s=="0"){
		
		fl=false;
	}
//	if(fl){
	
	
	if(!che(s))
	{
		ss.push_back(s);
	}
	else vv.push_back(s);}
	if(fl){
	
	ll ans=0;
	for(int u=0;u<vv.size();u++){
		ans+=ret(vv[u]);
		
	}
	if(ss.size()==0){
		cout<<"1";
		for(int u=1;u<=ans;u++)cout<<"0";
		cout<<endl;
	}
	else{
		cout<<ss[0];
		for(int u=1;u<=ans;u++)cout<<"0";
		cout<<endl;
	}}
	else puts("0");
	vv.clear();ss.clear();


return 0;}
