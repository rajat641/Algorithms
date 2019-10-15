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
//#define     p(a)  printf("%lld\n",a) 
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

 int main(){
   // freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	string s;
	cin>>s;
	int ans=0;
	for(int u=0;u<s.length();u++){
		if(s[u]=='+')
		ans++;
		else ans--;
		
	}
	string h;
	int ans2=0;
//	int ans=0;
	cin>>h;
	int que=0;
	for(int u=0;u<h.length();u++){
		if(h[u]=='?') que++;
		else{
			if(h[u]=='+') ans2++;
			else ans2--;
			
		}
	}
	if(que==0){
		if(ans==ans2) puts("1.000000000000");
		else puts("0.000000000000");
		
	}
	else{
		ll int ways= 1ll<< que;
		vector< int  >v;
		for(ll u=0;u<(1ll<<que);u++){
			int sd=0;
			int neg=0;
			for(ll j=0;j<que;j++){
				if(u&(1ll<<j)){
					sd++;
					
				}
				
			}
			neg= (-1)*(que- sd);
			v.push_back(neg +sd);
			
		}
		ll way=0;
		for(int u=0;u<v.size();u++){
			if(v[u]+ ans2==ans)
			way++;
			
			
		}
		printf("%.9lf\n",double(way)/double(ways));
	}
	
            
return 0;}
