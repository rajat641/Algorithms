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
 
 
/*
c++ does my work!!! but some delay
 
*/

/*
playing with segment trees

*/

int main(){  
//freopen("input.txt","r",stdin);
map< int , pair< int , int > >m;
map< int , int >occur;
int n; cin>>n;
pair< int , int >z;
z=make_pair(0,0);
for(int u=1;u<=n;u++){
	int x;
	cin>>x;
	if(m[x]==z) m[x]=make_pair(u,u);
	else{
		pair< int , int >temp=m[x];
		temp.second=u;
		m[x]=temp;
		
	}
	occur[x]++;
	
}
vector< int > poss;
int max=-1;
for(map< int , int > ::iterator j=occur.begin();j!=occur.end();j++){
	if(j->second>max)
	max=j->second;
	
}
for(map< int , int > ::iterator j=occur.begin();j!=occur.end();j++){
	if(j->second==max) poss.push_back(j->first);

	
}
//cout<<poss.size();
int ans;
int diff=10000000;
pair< int , int >app;
for(int u=0;u<poss.size();u++){
	pair< int , int >te=m[poss[u]];
	if(diff>te.second-te.first){
		ans=poss[u];
		app=te;
		diff=te.second-te.first;
		
	}
	
}
cout<<app.first<<" "<<app.second<<endl;
	return 0;
} 

