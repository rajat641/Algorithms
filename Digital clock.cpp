*
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
#define     sc(a)  scanf("%d ",&a) 
#define     p(a)  printf("%lld\n",a) 
#define     l(i,a)  for(int i=1;i<a;i++)
#define     re(j,a,b)  for(int j=a;j<b;j++)  
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
bool che(int x, int y){
//	char a[1000];
//	char b[1000];
	set< int >v;
	vector< int >vv;
	int f=x;
	while(f!=0){
	//	v.insert(v.begin(),f%10);
	v.insert(f%10);
		f/=10;
	}
	int u;
	//for( u=0;u<v.size();u++)
	//a[u]=v[u];
	//a[u]='/0';
//	printf("%s",a);
	//v.clear();
	f=y;
	while(f!=0){
	//	vv.insert(vv.begin(),f%10);
	v.insert(f%10);
	//	ss1.insert(f%10);
		f/=10;
	}
	//if(v.size()!=vv.size())
	//return false;
	//else{
	
	//for( u=0;u<v.size();u++){
	
	if(v.size()>1)
	return false;
return true;
	//b[u]='/0';
//	v.clear();
//	vv.clear();}
	//printf("%s %s\n",a,b);
	//if(strcmp(a,b)==0) return true;
	
}
int main(){  
//freopen("input.txt","r",stdin);
int t;
cin>>t;
while(t--){
	int hr,min;
	ll ans=0;
	cin>>hr>>min;
	l(i,hr){
		l(j,min){
			if(che(i,j)){
			
			//ans++;
		//	cout<<i<<" "<<j<<endl;}
			ans++;}
		}
	}
	p(ans+1);
}
	return 0;
} 