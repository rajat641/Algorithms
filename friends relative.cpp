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
int a[400];
int b[400];
//vector< pair< int , int > >fe;
 int main(){
 // freopen("input.txt","r",stdin);
     int n,t;
      cin>>t;
  //    int a[390];
    //  int fe[390];
      int mm=900;
      int mi=900;
     l(i,390){
       a[i]=0;
       b[i]=0;}
      while(t--){
      	char s;
      	int st, en ;
      	cin>>s>>st>>en;
    //  	mm=max(max(mm,st),max(mm,en));
      //	mi=min(min(mi,st),min(mi,en));
      	if(s=='M')
      	re(j,st,en) a[j]++;
      	else{
      		re(j,st,en) b[j]++;
      	}
      	
      	
      
	  }
	  ll ans=0;
	  ll anss=-1;
	  re(j,0,366){
	     ans=min(a[j],b[j]);
	     anss=max(ans,anss);
	  }
	  p(anss*2);
    
     return 0;}
