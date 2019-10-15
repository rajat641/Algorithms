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
        ll int res=modular_pow(base,exponent/2)%modu;
        return (res*res )%modu;
        
        
    }
    else{
        return (modular_pow(base,exponent-1) * base)%modu;
        
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


ll v[200001];
vector< ll >le;
vector< ll >ri;
int main()
{
freopen("inp.txt","r",stdin);
int t;
sc(t);
while(t--){
	int n;
	sc(n);
	int fl=1;
	ll sum=0;
	
	vector< int > neg;
	ll mm;
	ll ans=INT_MIN;
	ll sum1=0;
//	v= vector< ll >(n+1,0);
	le= vector< ll >(n+1,0);ri= vector< ll >(n+1,0);
	re(i, 1,n){
	cin>> v[i];
	sum1=max(v[i], sum1+v[i]);
	ans= max( sum1, ans);
	if(v[i]<0) fl=0;
	if(i==1) mm= v[i];
	else mm= max(mm, v[i]);
	//else fll=1;
	if(v[i]<0) neg.push_back(i);
	
	sum+= v[i];}
	
	
	if(fl) cout<< sum<<endl;
	else{
		
		//ll ans=INT_MIN;
		sum=0;
		
		re(i, 1,n){
		sum= max( sum+ v[i], v[i]);
		ans= max( ans, sum);
		le[i]= sum;	
			
		}
		sum=0;
		for(int i= n;i>=1;i--){
				sum= max( sum+ v[i], v[i]);
		ans= max( ans, sum);
		ri[i]= sum;	
			
		}
		for(int u= 2;u<n;u++){
			ans= max( ans, ri[u+1]+ le[u-1]);
		}
		cout<< ans<<endl;
		
	
	}
	neg.clear(); le.clear();ri.clear();
	
	
}
  return 0;
}
