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
ll a[2*100002];
int main() {

//	freopen("inp.txt","r",stdin);
//string s= "rajat";
int t;
sc(t);
while(t--){
	int n;
	sc(n);
	if(n==1){
		cin>>a[1];
	 puts("0");}
	else{
	
	ll sum=0;
//	a[0]=INT_MAX;
//	a[n+1]=INT_MAX;
	re(i,1,n){
		scanf("%lld",&a[i]);
		sum+=a[i];
	}
	ll sum1=0;
	re(i, 2,n-1){
		if(a[i-1]<=a[i] && a[i+1]<=a[i]){
			sum1+=(a[i]-max(a[i+1], a[i-1]));
		}
		
	}
	if(a[1]>=a[2]) sum1+=(a[1]-a[2]);
	if(a[n]>=a[n-1]) sum1+=(a[n]-a[n-1]);
	
	printf("%lld\n", sum- sum1);
}
}

return  0;}
