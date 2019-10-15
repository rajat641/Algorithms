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
#define     sc(a)  scanf("%lld",&a) 
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

vector< int > vis;
int fl=1;
vector< int >seta;
vector< int >setb;
map< int ,set< int > >gr;
map< int , int >col;
//int fl=1;
void dfs(int x, int c){
vis[x]=1;
//col[c].push_back(x);
col[x]= c;
for(set< int >::iterator i= gr[x].begin();i!= gr[x].end();i++){
	if(!vis[*i]){
		if(col[x]==0) c=1;
		else c=0;
		dfs(*i, c);
		
	}
	else{
		if(col[*i]==col[x]) fl=0;
		
	}
	
}
		
}
int main(){
//	freopen("inp.txt","r", stdin);
 int n, m;
 cin>>n>>m;
 //gr= vector< vector< int > >(n+1);
 vis= vector< int >(n+1, 0);
 l(i, m){
 	int s, e;
 	cin>>s>>e;
 	gr[s].insert(e);
 	gr[e].insert(s);
 }
 int root=0;
 for(int u=1;u<=n;u++){
 	if(gr[u].size()>0){
 		root= u;break;
 	}
 }
 //seta.push_back(root);
 //int c=1;
 for(int u=1;u<=n;u++){
 if(vis[u]==0){
 int c=1;
dfs(u,c);}}
if(!fl) puts("-1");
else{
	for(map< int , int >::iterator i= col.begin();i!=col.end();i++){
		if(i->second==0){
			seta.push_back(i->first);
		}
		else setb.push_back(i->first);
		
	}
	cout<< seta.size()<<endl;
	l(i, seta.size()) cout<< seta[i]<<" ";
	cout<<endl;
	cout<< setb.size()<<endl;
	l(i, setb.size()) cout<< setb[i]<<" ";
	cout<<endl;
}

    return 0;}
