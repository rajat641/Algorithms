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
 
 vector< pair< int , int > >v;
map< int , vector< int > >mx;
map< int , vector< int > >my;
map< pair< int , int > , vector< int > > coun;
int main(){  
//freopen("input.txt","r",stdin);
int n;
cin>>n;
l(i,n){
	int x,y;
	cin>>x>>y;
	v.push_back(make_pair(x,y));
	pair< int , int >uu=make_pair(x,y);
	coun[uu].push_back(i+1);
	mx[x].push_back(i+1);my[y].push_back(i+1);
}
ll ans=0;
l(i,n){
	int x=v[i].first;
	int y=v[i].second;
	pair< int , int >pa=make_pair(x,y);
	 ans+=(mx[x].size()-1 + my[y].size()-1);
	// if(i>0){
//	 vector< int > vv;
	 int jj;
//	 vv.assign(mx[x].begin(),mx[x].end());
	 jj=upper_bound(mx[x].begin(),mx[x].end(),i+1)-mx[x].begin();
	 if(binary_search(mx[x].begin(),mx[x].end(),i+1))
	 --jj;
	// else
	 
//	 vv.clear();
	 ans-=jj;
	// jj=upper_bound(vv.begin(),vv.end(),x)-vv.begin()-1;vv.clear();
//	 vv.assign(my[y].begin(),my[y].end());
	 jj=upper_bound(my[y].begin(),my[y].end(),i+1)-my[y].begin();
	 if(binary_search(my[y].begin(),my[y].end(),i+1))
	 --jj;
	 //vv.clear();
	 ans-=jj;
	 int jjj=upper_bound(coun[make_pair(x,y)].begin(),coun[make_pair(x,y)].end(),i+1)-coun[make_pair(x,y)].begin()-1;
	 ans-=jjj;
//	 if(coun[make_pair(x,y)]>1){
	 //	ans-=(coun[make_pair(x,y)]-1);
//	 }

	
}
cout<< ans<<endl;
coun.clear();v.clear();mx.clear();my.clear();
	return 0;
} 

