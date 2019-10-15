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
 
 
/*
c++ does my work!!! but some delay
 
*/

/*
playing with segment trees

*/
//int ma[3*1000001];
int vis[5*100005];
 int main(){
   //  freopen("input.txt","r",stdin);
   int n,m;
   cin>>n>>m;
   for(int u=1;u<=5*100005;u++) vis[u]=0;
   if(n==m)
   puts("0");
   else{
   	queue< pair< int , int > >q;
   	q.push(make_pair(n,0));
   	
   	int level=0;
   	while(!q.empty()){
   		pair< int , int> ff=q.front();
   		vis[ff.first]=1;
   		q.pop();
   		//steps++;
   		if(ff.first==m){
   			cout<<ff.second<<endl;break;
   		}
   		else{
   			if(vis[2*ff.first]==0 && ff.first<=m){
   			vis[2*ff.first]=1;
   			q.push(make_pair(2*(ff.first),ff.second+1));}
   			if(vis[ff.first-1]==0 && ff.first-1>0){
   			vis[ff.first-1]==1;
   			q.push(make_pair((ff.first)-1,ff.second+1));}
   		}
   		
   	}
   
   		
   	}
  
   //}
     return 0;}
