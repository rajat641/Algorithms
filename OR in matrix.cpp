*

overflow!!!!!!!!

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
 
 
/**
finaaly it worked!!!!!!
 
*/
vector< pair< int , int > > vv;
int a[101][101];
int ans[101][101];
bool che(int r, int c){
//	int temp[r+1][c+1];
for(int u=0;u<r;u++){
	for(int k=0;k<c;k++){
		if(a[u][k]==1){
			int aa=0;
			for(int uu=0;uu<c;uu++) aa=aa| ans[u][uu];
			for(int uu=0;uu<r;uu++) aa=aa| ans[uu][k];
		     if(aa==0) return false;				
		}
		
	}
	
}	
return true;	
	
}
int main(){
  //   freopen("input.txt","r",stdin);
   int r,c;
   cin>> r>>c;
   //int a[r+1][c+1];
   for(int u=0;u<r;u++){
   	for(int k=0;k<c;k++){
   	
   	cin>> a[u][k];
   	if(a[u][k]==0)
   	vv.push_back(make_pair(u,k));
   } }
   //int ans[r+1][c+1];
   for(int u=0;u<r;u++){
   	for(int k=0;k<c;k++)
   	ans[u][k]=1;
   }
   for(int u=0;u<vv.size();u++){
   	int rr=vv[u].first;
   	int cc=vv[u].second;
   	for(int u=0;u<c;u++) ans[rr][u]=0;
   	for(int u=0;u<r;u++) ans[u][cc]=0;
   	
   	
   	
   	
   }
   if(che(r,c))
   {
   	puts("YES");
   	for(int u=0;u<r;u++){
   	for(int k=0;k<c;k++) cout<< ans[u][k]<<" ";
   	cout<<endl;
   	
   }}
   else puts("NO");

   
   	
   vv.clear();
   
	return 0;
	
}
