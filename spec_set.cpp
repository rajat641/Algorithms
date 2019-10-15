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
int modular_pow(int  base, int  exponent,int m)
{
     int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result%m * base%m)%m;
        exponent = exponent >> 1;
        base = (base%m   * base%m)%m;
    }
    return (result+m)%m;
}
 

 
 int gcd(ll int a,ll int b){
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
class comp{
	public:
		bool operator()(int x, int y){
			return x<y;
			
		}
	
};
vector< ll int>v;
ll int count1[300003];
int cal(int c, int s){
	int u=c*(2*s +1 -c);
	if(c%2==0){
		return (c/2)*(2*s +1 -c);
	}
	else{
		return c*((2*s +1 -c)/2);
	}
	
}
int main(){
//	freopen("input.in.h","r",stdin);
 int t;
sc(t);
while(t--){
	 int n,k;
	 sc(n);
	 sc(k);
	 if(k==1)
	 puts("0");
	 else{
	 	if(k>n) 
	 	 cout<<n<<endl;
	 	 else if(k==n)
	 	 cout<<n-1<<endl;
	 	 else{
	 	 	set< int>s;
	 	 //	s.insert(k);
	 	 	for(int u=1;u<=n;u++){
	 	 		if(u *k <=n){
	 	 		
				  if(s.find(u)==s.end())
	 	 		s.insert(u *k);}
	 	 		else break;
	 	 	}
	 	 	printf("%d\n",n-s.size());
	 	 	s.clear();
	 	 	
	 	 }
	 }
}
    return 0;
}
