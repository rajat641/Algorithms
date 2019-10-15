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

	
	
int a[3*100001];
vector< pair< ll , ll > >v;
int main(){
//freopen("inp.txt","r",stdin);
int n,k;
//int n;
cin>>n;
l(i,n){
	ll x1,y1;
	cin>>x1>>y1;
	v.push_back(make_pair(x1,y1));
	
}
map< pair< ll , ll > , ll >mm;
l(i,n-1){
	//pair< int , int > st=v[i];
	for(int j=i+1;j<n;j++){
		mm[make_pair((v[i].first+v[j].first),v[i].second+v[j].second)]++;
		
	}
	
}
ll ans=0;
for(map< pair< ll , ll > , ll >::iterator i=mm.begin();i!=mm.end();i++){
	ans +=(i->second)*(i->second-1);
	
}
cout<<(ans/2)<<endl;

return 0;}    

