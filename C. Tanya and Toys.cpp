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

	
	
set< ll >v;
vector< ll > ans;
map< ll , ll >mm;
int main(){
//freopen("inp.txt","r",stdin);
int n ,m;
sc(n);
sc(m);
ll actm=m;
l(i,n){
	ll x;
	cin>>x;
	v.insert(x);
	mm[x]++;
}
ll sum=0;
for(ll u=1;u<=1000000000;u++){
	if(m<=0) break;
	if(mm[u]<1){
		ans.push_back(u);
		sum+=u;
		m-=u;
	}
	
	
}
if(m==0){

cout<< ans.size()<<endl;
for(int u=0;u< ans.size();u++){
	cout<< ans[u]<<" ";
	
}}
else{
	ll bb=ans.size();
	//ll sum=0;
//	for(int u=ans.size()-1;u>=0;u--){
//		if(sum-ans[u])
		
//	}
bool fl=true;
	cout<< ans.size()-1<<endl;
	l(i,ans.size()) {
		if(ans[i]<sum- actm)
	cout<< ans[i]<<" ";
	else{
		if(fl){
			fl=false;
		}
		else{
			cout<< ans[i]<<" ";
		}
		
	}
	
	}
	cout<<endl;
}

printf("\n");


return 0;}    
