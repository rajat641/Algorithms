/*

overflow!!!!!!!!

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
 
 
/**
finaaly it worked!!!!!!
 
*/
//int L[1001][1001];
int a[100];
int fac(int x){
	int ans=0;
	for(int j=2;j*j<=x;j++){
		if(x%j==0){
			int c=0;
			while(x%j==0){
				c++;
				x/=j;
			}
			ans+=c;
		//	if(x==1)break;
		}
		
	}
	if(x>2)
	ans++;
	return ans;
	
}
 int main(){
 //	cout<< fac(10);
 	
int n;
cin>>n;
map< int , int >mapp;
vector< ll int >v;
int mm=-1;
for(int u=1;u<=n;u++){
	cin>>a[u];
mm=max(mm,a[u]);
mapp[a[u]]++;
}
for(int u=1;u<=mm;u++){
	if(u==1){
	//	if(mapp.find(u)!=mapp.end())
		v.push_back(0);
	}
	else{
	     if(u==2)
	     v.push_back(fac(1));
	     else
		v.push_back(fac(u));
		
	}
	
}
//for(int u=0;u<v.size();u++) cout<<v[u]<<" ";

vector< ll int >kk(mm+1,0);
kk[1]=0;
kk[2]=1;
kk[3]=2;
for(int u=4;u<=mm;u++){
	kk[u]=kk[u-1] + v[u-1];
	
}
multiset< int >ss;
for(int u=1;u<=mm;u++){
	if(mapp.find(u)==mapp.end())
	continue;
	else{
		for(int r=1;r<=mapp[u];r++)
		ss.insert(kk[u]);
	}
	
}
vector< ll int >vv1;
//cout<< ss.size();
int diff=0;
for(multiset< int> ::iterator i=ss.begin();i!=ss.end();i++ ){

	vv1.push_back(*i);
	

//cout<< *i<<endl;
	
}
//cout<< vv.size();
//cout<<vv1[0]<<vv1[1];
ll int sum=0;
ll int ssd=0;
for(ll int u=0;u<(1ll<<vv1.size());++u){
	for(ll int j=0;j<vv1.size();++j){
		if(u&(1ll<<j)){
			sum+=vv1[j];
			
		}
	//	cout<< sum<<endl;
	}
//	cout<< sum<<endl;
	if(sum%2==0){
//	cout<<sum<<endl;
	ssd+=sum;}
	sum=0;
}
//if(odd.size()>1){


cout<<ssd<<endl;
// cout<< ss.size();	
}
