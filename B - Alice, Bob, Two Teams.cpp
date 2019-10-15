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
 
 
/*
c++ does my work!!! but some delay
 
*/


ll a[5*100001];
string s;
string h;
vector< string >v;
/*
easy problem!!!!! but bad debugging by me...
read problem carefully


*/
int main(){  

//freopen("input.txt","r",stdin);
int n;
cin>>n;
int k=0;
ll maxx=-1;
ll maxxx=-1;
ll maxxxx=-1;
while(n--) {
sc(a[k++]);

}
cin>>s;
ll ansa=0;
 h=s;
int l=s.length();
ll ansb=0;
for(int u=0;u<l;u++){
	if(s[u]=='B') ansb+=a[u];
	else ansa+=a[u];
}
maxxx=ansb;
ll ansbb=ansb;
ll ansab=ansa;
for(int u=l-1;u>=0;u--){
if(s[u]=='B'){
	ansb-=a[u];
	ansa+=a[u];
	maxx=max(maxx,ansb);
}
else{
	ansb+=a[u];
	ansa-=a[u];
	maxx=max(maxx,ansb);
}
}

for(int u=0;u<=l-1;u++){
if(h[u]=='B'){
	ansbb-=a[u];
	ansab+=a[u];
	maxxxx=max(maxxxx,ansbb);
}
else{
	ansbb+=a[u];
	ansab-=a[u];
	maxxxx=max(maxxxx,ansbb);
}
	
}

p(max(maxxxx,max(maxx,maxxx)));

v.clear();
	return 0;
} 

