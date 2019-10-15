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
#define     re(j,a,b)  for(j=a;j<=b;j++)  
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
int ma[3*1000001];
 int main(){
  //freopen("input.txt","r",stdin);
   ll int n,m;
   cin>>n>>m;
 //  map< int , int >ma;
   for(int u=1;u<=n;u++)
   ma[2*u]++;
   for(int u=1;u<=m;u++)
   ma[3*u]++;
   ll max2=n*2;
   ll max3=3*m;
   int c=0;
   for(int u=1;u<=3000001;u++){
   	if(ma[u]==2){
   		if(max2+2 <= max3+3){
   			max2+=2;
   			ma[max2]++;
   			
   		}
   		else{
   			max3+=3;
   			ma[max3]++;
   		}
   	}
   	
   }
   
   //if(c>0)
   //cout<<min(2*c+max2,3*c+3*m)<<endl;
    cout<< max(max2,max3)<<endl;
    
     return 0;}
