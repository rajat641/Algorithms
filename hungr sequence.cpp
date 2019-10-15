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
 
 
/*
c++ does my work!!! but some delay
 
*/

/*
playing with segment trees

*/
ll a[10000001];
vector< ll >prime;
/*
approach:
no of prime<=n/log(n)
here n=10000000
so clearly prime >100000
no need for nodding your head
*/
void seive(){
	for(int u=2;u<=10000000;u+=2) a[u]=1;
	for(int u=3;u<=10000000;u+=3) a[u]=1;
	for(int j=5;j*j<=10000000;j+=2){
		if(a[j]==0){
			for(int k=2;k*j<=10000000;k++) a[j*k]=1;
			
		}
		
	}
	prime.push_back(2);prime.push_back(3);
	for(int u=5;u<=10000000;u+=2){
		if(a[u]==0) prime.push_back(u);
	}
}

int main(){  
seive();
//freopen("input.txt","r",stdin); 
int n;
cin>>n;
for(int u=0;u<n;u++) cout<< prime[u]<<" ";
//v.clear();

	return 0;
} 

