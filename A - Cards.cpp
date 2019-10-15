/*
RAJAT SINGH
VIT VELLORE
*/

#include<bits/stdc++.h>
#include<string>
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
#define     re(j,a,b)  for( int j=a;j<=b;j++)  

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


ll maxx(ll x, ll y){
	if(x>=y) return x;
	else return y;
}

void swap(int *x, int *y){
	int t;
	t= *x;
	*x= *y;
	*y=t;
	
}
/*string s;
void pr(int st, int e){
	if(st==e){
	cout<<s<<endl;
	}
	else re(i,st,e){
	swap(&s[i],&s[st]);	
	pr(st+1,e);
	swap(&s[i],&s[st]);
		
	}
	
}*/


ll a[400001];
multimap< ll, ll >s;

int main(){
//	freopen("inp.txt","r", stdin);
int t; cin>>t;
vector< ll >mark(t+1, 0);
 ll sum=0;
l(i, t){
	cin>>a[i];
	//s.insert(a[i]);
	//s[a[i]]=i;
	s.insert(make_pair(a[i], i));
	sum+=a[i];
}
ll tt= 2*sum/t;

for(int u=0;u<t;u++){
      for(int u1=0;u1<t;u1++){
      	if(a[u]!=-1 && a[u1]!=-1&& a[u]+a[u1]==tt&& u!=u1){
      		cout<< u+1<<" "<<u1+1<<endl;
      		a[u]=-1;
      		a[u1]=-1;
      		break;
      	}
      	
      } 
	
}
//cout<< tt<<endl;
    return 0;}
