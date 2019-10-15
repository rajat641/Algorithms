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
ll int a[200001];
ll int te1[100001];
ll int te[200001];
ll int le[100001];
ll int re[100002];
int main()
{
freopen("inp.txt","r",stdin);
 int n;
 cin>>n;
 for(int u=1;u<=n;u++) cin>>a[u];
 for(int u=1;u<=n;u++){
 	if(u==1) te[u]=1;
 	else{
 		if(a[u]>a[u-1]) te[u]=te[u-1]+1;
 		else te[u]=1;
 	}
 	le[u]=0;
 	re[u]=0;
 	
 }
 if(n==1) puts("1");
 else{
 
 for(int u=n;u>=1;u--){
 	if(u==n) te1[u]=1;
 	else{
 		if(a[u]<a[u+1]) te1[u]=te1[u+1]+1;
 		else te1[u]=1;
 		
 	}
 	
 }
 
	 int ans=1;
	 a[0]=0;
	 a[n+1]= a[n]+1;
	 for(int u=1;u<=n;u++){
            
              	if(a[u+1]- a[u-1]>1) 
				  ans= max( ans, te[u-1]+te1[u+1]+1);
              	
             ans= max( ans, te[u-1]+1);ans= max( ans, te1[u+1]+1);
            // cout<< te[u]<<" "<<te1[u]<<endl; 
              
	 }
	 if(ans>1)
	 cout<< ans<<endl;
	 else cout<< te[n]<<endl;
	 }
  return 0;
}
