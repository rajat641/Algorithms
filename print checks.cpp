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




int a[5001][5001];
int main(){  
freopen("input.txt","r",stdin); 
int n,mm,k;
cin>>n>>mm>>k;
for(int u=1;u<=n;u++){
	for(int j=1;j<=mm;j++) a[u][j]=0;
}
map< pair< int , int > , int >m;
vector< pair< int , int > >v;
map< pair< int , int >, int >cou;//(100001,0);
//map< int , int >col;
while(k--){
	int type;
	int r;
	int coll;
	cin>>type>>r>>coll;
	v.push_back(make_pair(type,r));
	cou[(make_pair(type,r))]++;
	m[make_pair(type,r)]=coll;
	
}
for(int u=0;u<v.size();u++){
	pair< int , int >test=v[u];
	if(cou[v[u]]>1){
		cou[v[u]]--;
	 continue;}
	if(m[test]!=-1){
		if(test.first==1){
			int roeee=test.second;
			
			for(int u=1;u<=mm;u++) a[roeee][u]=m[test];
		}
		else{
				int roeee=test.second;
			
			for(int u=1;u<=n;u++) a[u][roeee]=m[test];
		}
		
		m[test]=-1;
	}
}

for(int u=1;u<=n;u++){
	for(int j=1;j<=mm;j++){
		cout<<a[u][j]<<" ";
	}
	printf("\n");
}
m.clear();
v.clear();
	return 0;
} 

