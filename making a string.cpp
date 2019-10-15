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
//freopen("input.txt","r",stdin);
ll a[100];
int n;
cin>>n;
set< ll >se;
//map< ll, ll> ma;
for(int u=0;u<n;u++){
	cin>>a[u];
}
sort(a,a+n);
//for(int u=0;u<n;u++) cout<< a[u];
ll ans=0;
for(int u=n-1;u>=0;u--){
	if(u==n-1){
		se.insert(a[u]);
		ans+=a[u];
	}
	else{
		if(se.find(a[u])==se.end()){
			se.insert(a[u]);
			ans+=a[u];continue;
		}
		else{
			ll k=1;
			ll f=a[u];
			while(a[u]>0){
			//	cout<< f<<" ";
				if(se.find(--a[u])==se.end()){
					se.insert(a[u]);
					ans+=a[u];
					break;
				}
			//	else{
					//f-=k;k++;
			//	}
			}
			
		}
		
	}
	
}
//for(set< ll > ::iterator i= se.begin();i!=se.end();i++) cout<< *i<<" ";
cout<< ans<<endl;


//cout<<sum<<endl;

return 0;}
