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
 
 
/*
c++ does my work!!! but some delay
 
*/

/*
playing with segment trees

*/

int main(){  
//freopen("input.txt","r",stdin);
map< pair< int , int > , int > ma;
int n,x,y;
cin>>n>>x>>y;
for(int u=0;u<n;u++){
	int x1,y1; cin>>x1>>y1;
	if(y-y1==0){
		ma[make_pair(0,0)]++;
		//n--;
		 continue;
	}
	if(x-x1==0){
		ma[make_pair(-100000,-100000)]++;
	//	n--;
		continue;
	}
	else{
		int num1= y-y1;
		int den1=x-x1;
		int num= num1/__gcd(abs(num1),abs(den1));
		int den= den1/__gcd(abs(num1),abs(den1));
	
		if(den<0){
		den*=-1; num*=-1;}
		//cout<< num<<x1<<y1<<" "<<" "<<den<<" "<<endl;
		ma[make_pair(num,den)]++;}
		
	
//	n--;}
	
}
cout<< ma.size()<<endl;

	return 0;
} 

