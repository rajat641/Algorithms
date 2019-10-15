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
int a[3*100002];
int parent[3*100002];
 int main(){
 // freopen("input.txt","r",stdin);
    int n,kk;
    cin>>n>>kk;
    for(int u=1;u<=n-1;u++) cin>>a[u];
    
    vector< int >vv;
    for(int u=0;u<3*100002;u++)parent[u]= -1;
    int k=1;
    for(int u=1;u<=n-1;u++)
    parent[u]=u+a[u];
    while(k!=-1){
    	vv.push_back(k);
    	vv.push_back(parent[k]);
    	k=parent[k];
    }
    sort(vv.begin(),vv.end());
    if(binary_search(vv.begin(),vv.end(),kk))
    puts("YES");
    else puts("NO");
    //set< int >ss;
    
     return 0;}
