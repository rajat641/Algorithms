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

	
	
int a[2000][5];
int main(){
freopen("inp.txt","r",stdin);
int n;
int m;
sc(n);
sc(m);
int k=1;
for(int u=n;u>=1;u--){
	a[u][1]=k;
	k++;
	a[u][4]=k;
	k++;
	
}
for(int u=n;u>=1;u--){
	a[u][2]=k;
	k++;
	a[u][3]=k;
	k++;
	
}
//print the array!!!!!!!
bool fl=true;
vector< ll>vv;
for(int u=n;u>=1;u--){
	if(a[u][2]<=m){
	cout<< a[u][2]<<" ";vv.push_back(a[u][2]);
	}
//	else {
		//fl=false;
		if(vv.size()==m)
		break;
//	}
	if(a[u][1]<=m){
	cout<< a[u][1]<<" ";
	vv.push_back(a[u][1]);
	}
//	else {
		
	//	fl=false;
		if(vv.size()==m)
		break;
//	}
	if(a[u][3]<=m){
	cout<< a[u][3]<<" ";vv.push_back(a[u][3]);
	}
//	else {
	//	fl=false;
		if(vv.size()==m)
		break;
//	}
		if(a[u][4]<=m){
		cout<< a[u][4]<<" ";
		vv.push_back(a[u][4]);}
	//else {
	//	fl=false;
		if(vv.size()==m)
		break;
	//}
	
	
}

return 0;}    

