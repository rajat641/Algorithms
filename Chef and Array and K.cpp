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
# define ll   long long 
#define     p(a)  printf("%lld\n",a) 
#define     l(i,a)  for(ll i=0;i<a;i++)
#define     re(j,a,b)  for(ll int j=a;j<=b;j++)  

#define modu 1000000007

 
 
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

ll a[400001];
ll  f[2000001];
// referncee from hackerearth!!!
ll fast_pow(ll  base, ll n,ll M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    ll  halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
ll findMMI_fermat(ll n,ll M)
{
    return fast_pow(n,M-2,M);
}
ll C(ll n, ll r, ll MOD){
	   ll numerator=f[n];
        ll denominator=(f[r]*f[n-r])%MOD;
        ll mmi_denominator=findMMI_fermat(denominator,MOD);
        return (numerator*mmi_denominator)%MOD;
	
} 
void pre(){
// ll  f[100001];
    f[0]=1;
    ll i=1;
    ll MOD=1000000007;
    while(i<=100000)
    {
        f[i]=((f[i-1]%MOD)*(i)%MOD)%MOD;
        i++;
    }
	
	
}
/*
lesson of this problem----
 test a lot your program!!!!
 if you are not good in testing.. you can proceed!!1
 best ques on NUMBER THEORY

 */
int main() {
    
// freopen("inp.txt", "r", stdin);
 pre();
    ll t;
    sc(t);
    while(t--){
    	ll  c=0;
    	ll sum=0;
    	ll  n,k;
		 scanf("%lld%lld", &n, &k);
		 //sc(n);sc(k);
    //	c=n;
         ll m=0;
    	l(i,n){
    		 scanf("%lld", &a[i]);
    //	sc(a[i]);
    	if(a[i]==0) c++;}
    //	if(k==1){
    //		ans= n- c;
    //	}
    //	else if(c<2){
    	 if(n==1) puts("1");
    	 else{
    	 	ll d;
    	 	if(c>0) d= n-c+1;
    	 	else d=n;
    	 	if(c==n) m=1;
    	 	else if(k> d){
    	 		int r;
    	 		if(k>d)
    	 		if(k%2==0) r=d;
    	 		else r= d-1;
    	 		while(r>=0){
    	 			sum+=C(d, r, modu);
    	 			if(sum> modu) sum%= modu;
    	 			r-=2;
    	 		}}
    	 		else{
    	 			int r;
    	 			r=k;
    	 				while(r>=0){
    	 			sum+=C(d, r, modu);
    	 			if(sum> modu) sum%= modu;
    	 			r-=2;
    	 		}
    	 		
    	 		}
    	 		if(m==0) p(sum);
    	 		else puts("1");
    	 		
    	 	}
    	 	
    	 	
    
    
    	
}
   
    return 0;
}
