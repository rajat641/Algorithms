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
/*ll modular_pow(ll base, ll exponent)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % MOD;
        exponent = exponent >> 1;
        base = (base * base) % MOD;
    }
    return result;
}
 */
 
 
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

//int a[300001];
long long int  pow(long long int a,long long  int b,long long  int MOD)
{
    long long int x=1,y=a; 
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD; 
        b /= 2;
    }
    return x;
}
long long int InverseEuler(long long int n,long long  int MOD)
{
    return pow(n,MOD-2,MOD);
}
long long int com1(long long int  n,long long  int r,long long  int MOD)
{
long long int i;
    vector<long long int> f(n + 1,1);
    for ( i=2; i<=n;i++)
        f[i]= (f[i-1]*i) % MOD;
    return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}
long long int  Lucas(long long int n,long long int m,long long  int p)
{
    if (n==0 && m==0) return 1;
   long long  int ni = n % p;
   long long  int mi = m % p;
    if (mi>ni) return 0;
    return Lucas(n/p, m/p, p) * com1(ni, mi, p);
}
long long int com(long long int n,long long int r,long long int MOD)
{
   return Lucas(n, r, MOD);
}
long long combi(int n,int k)
{
    long long ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}
//char a[2000001];
//char b[2000001];
int main() {
    
//  freopen("inp.txt", "r", stdin);
    int t;
    sc(t);
    while(t--){
    string a, b;
     cin>>a>>b;
    	if(a==b){
    		puts("Lucky Chef");
    		puts("0");
    	}
    	else{
    		ll c1=0;
    		ll c2=0;
    		ll c3=0;
    		ll c4=0;
    		for(int u=0;u<a.length();u++){
    			if(a[u]!=b[u]){
    				if(a[u]=='1') c1++;
    				else c2++;
    				
    			}
    		  else{
    		  	if(a[u]=='1') c3++;
    		  	else c4++;
    		  	
    		  }
    			
    		}
    		if(c2+c4==0 || c1+c3==0){
    			puts("Unlucky Chef");
    			
    		}
    		else{
    			ll ans=0;
    		//	puts("Lucky Chef");
    		 if(c2>=c1){
    		 	 ans+=c1;
    		 	
    		 	 c2-=c1;
    		 	c1=0;
    		 	 ans +=(c2);
    		 	 //if(c2%2==1) ans++;
    		 	 puts("Lucky Chef");
    		 	 cout<< ans<<endl;
    		 	
    		 }
    		 else{
    		 	//ans+=c2;
    		 	ans +=c2;
    		 //	c2=0;
    		 	c1-=c2;// c2=0;
    		 //	if(c4==0){
    		 	//	puts("Unlucky Chef");
    		 	//	fl=1;
    		 //	}
    		 //	else{
    		 		puts("Lucky Chef");
    		 		ans +=c1;cout<< ans<<endl;
    		 //	}
    		 	
    		 }}
    	//	cout<< ans<<endl;}
    	}
    	
    	
    	 
    	
}
   
    return 0;
}
