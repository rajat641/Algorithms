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

	
	
vector< multiset< pair< int , string > > >vv;
//multimap< pair< int , int >, string> mm;
int main(){
//freopen("inp.txt","r",stdin);
int n,m;


cin>>n>>m;
vv=vector< multiset< pair< int , string > > >(m+200);
l(i,n){
	string name;
	int region;
	int score;
	cin>>name>>region>>score;
//	mm.insert(make_pair(make_pair(score,region),name));
	vv[region].insert(make_pair(score, name));
	
}
for(int u=1;u<=m;u++){
	if(vv[u].size()<=1) puts("?");
	else{
		multiset< pair< int , string > >::iterator gret=vv[u].end();
		--gret;
		multiset< pair< int , string > >::iterator secgret=(gret);
		--secgret;
		if(vv[u].size()==2){
			cout<<gret->second<<" "<<secgret->second<<endl;
		}
		else{
			multiset< pair< int , string > >::iterator thirgret=(secgret);
			--thirgret;
			if(thirgret->first==secgret->first) puts("?");
			else cout<<gret->second<<" "<<secgret->second<<endl;
		}
	}
	
}

vv.clear();
//mm.clear();
return 0;}    

