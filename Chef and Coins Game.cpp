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
# define ll   long long 
#define     p(a)  printf("%d\n",a) 
#define     l(i,a)  for(int i=0;i<a;i++)
#define     re(j,a,b)  for(ll int j=a;j<=b;j++)  

#define modu 1000000007
ll modular_pow(ll base, ll exponent)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modu;
        exponent = exponent >> 1;
        base = (base * base) % modu;
    }
    return result;
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
ll POW(ll x,ll y){
	ll ans=1;
	for(ll i=1;i<=y;i++) ans*=x;
	return ans;
}
vector< ll >v;
int main() {
    
 //   freopen("inp.txt", "r", stdin);
    
    
    int t;
    sc(t);
    while(t--){
   	 ll n; cin>>n;
   	 //n=6;
   	 if(n<=5) puts("Chef");
   	 else{
   	 //	re(i,1,10){
   	 //	n=i;
   	 /*	set< ll >s;
   	 	for(int u=2;u*u <=n;u++){
   	 		if(n%u==0){
   	 			s.insert(u);
   	 			while(n%u==0) n/=u;
   	 			
   	 		}
   	 		if(n<2) break;
   	 		
   	 	}
   	 	if(n>1) s.insert(n);*/
   	 	if(n%6==0) puts("Misha");
   	 	else{
   	 		puts("Chef");
   	 		
   	 	}
   	 	//cout<< s.size()<<endl;}
   	 }
	}
    
    return 0;
}

