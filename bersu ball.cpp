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
vector< vector<  int > >v;
 int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
int n;
cin>>n;
v=vector< vector<  int > >(n+1);
vector< int >b;
for(int u=0;u<n;u++){
	int x;
	cin>>x;
	b.push_back(x);
//	v[u].push_back(x-1);
//	v[u].push_back(x);
//	v[u].push_back(x+1);
}
sort(b.begin(),b.end());
for(int u=0;u<n;u++){
//	int x;
//	cin>>x;
    int x=b[u];
	b.push_back(x);
	v[u].push_back(x-1);
	v[u].push_back(x);
	v[u].push_back(x+1);
}

int m;
cin>>m;
multiset< int >vv;
for(int u=0;u<m;u++){
	int y;
	cin>>y;
	vv.insert(y);
	
}
//sort(vv.begin(),vv.end());
int ans=0;
for(int u=0;u<n;u++){
	for(vector< int >::iterator i=v[u].begin();i!=v[u].end();i++){
		if(binary_search(vv.begin(),vv.end(),*i)){
			ans++;
			vv.erase(vv.find(*i));
			break;
		}
		
	}
	
}
cout<< ans<<endl;
vv.clear();v.clear();

return 0;}
