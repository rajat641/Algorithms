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
#define     l(i,a)  for(i=0;i<a;i++)
#define     re(j,a,b)  for(j=a;j<=b;j++)  
# define ll   long long 
#define modu 1000000007
int modular_pow(ll int  base, ll int  exponent,int m)
{
    if(exponent==0)
    return 1;
    else if(exponent%2==0){
        ll int res=modular_pow(base,exponent/2,m);
        return (res*res +m)%m;
        
        
    }
    else{
        return (modular_pow(base,exponent-1,m) * base)%m;
        
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
finaaly it worked!!!!!!
 
*/
bool che(int x, int y){
	
	if(y-x>=0) return true;
	else return false;
	
}
bool hd(int b[], int sz){
	for(int u=1;u<=sz;u++){
		if(b[u]>0) return true;
		
	}
	return false;
}
 int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
int m;
cin>>m;
int s;
cin>>s;
if( 9*m< s)
cout<<"-1"<<" "<<"-1"<<endl;
else{
	int s1=s;
	int a[m+1];
	int b[m+1];
	for(int u=1;u<=m;u++) a[u]=0;
	for(int u=1;u<=m;u++){
		for(int j=9;j>=0;j--){
			if(che(j,s)){
				s-=j;
				a[u]=j;break;
			}
			
		}
		
	}
	for(int u=1;u<=m;u++)
	b[u]=a[u];
	if(!hd(a,m)&&m>1){
		cout<<"-1"<<" "<<"-1"<<endl;
	}
	else{
		sort(b+1,b+m+1);
		if(b[1]==0){
			for(int u=2;u<=m;u++){
				if(b[u]>0) {
					b[1]=1;
			       b[u]--;break;}
				
			}
			
		}
		for(int u=1;u<=m;u++)
		cout<<b[u];
		cout<<" ";
		for(int u=1;u<=m;u++)cout<<a[u];
	}
	
	
	
}
return 0;}
