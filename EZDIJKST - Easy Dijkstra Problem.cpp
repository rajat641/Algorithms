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
#define     re(j,a,b)  for(int j=a;j<b;j++)  
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
vector< vector< pair<int,int> > >graph;
vector< int> dis;
class comp{
	public:
		bool operator()(pair<int,int> a,pair<int,int> b){
			return a.second > b.second;
			
		}
	
};
int main(){
//	freopen("input.txt","r",stdin);
	int t;
	scanf("%d",&t);
	
	while(t--){
		priority_queue< pair<int,int>,vector< pair<int,int> > ,comp >q;
		int n,k;
		scanf("%d",&n);
		scanf("%d",&k);
		graph=vector< vector< pair<int,int> > >(n+1);
		dis=vector<int>(n+1,INT_MAX);
		int j=0;
		while(j<k){
			int a,b,c;
			scanf("%d",&a);
			scanf("%d",&b);
			scanf("%d",&c);
			graph[a].push_back(make_pair(b,c));
		//	graph[b].push_back(make_pair(a,c));
			
			j++;
		}
		int star,end;
		scanf("%d",&star);
		scanf("%d",&end);	
		dis[star]=0;
		q.push(make_pair(star,0));
		while(!q.empty()){
		int p=q.top().first;
			q.pop();
			int sz=graph[p].size();
			for(int l=0;l<sz;l++){
				int vv=graph[p][l].first;
				int dd=graph[p][l].second;
				if(dd+ dis[p]<dis[vv]){
					dis[vv]=dis[p] +dd;
					q.push(make_pair(vv,dis[vv]));
					
					
				}
				
			}
			
			
		}
		if(dis[end]==INT_MAX)
		cout<<"NO"<<endl;
		else cout<<dis[end]<<endl;
		dis.clear();
		graph.clear();
	
	}
return 0;}    
