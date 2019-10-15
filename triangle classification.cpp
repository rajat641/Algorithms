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
bool ri(int x, int y, int z){
    vector< int >v;
    v.push_back(x);v.push_back(y);v.push_back(z);
    sort(v.begin(),v.end());
    if(v[0]+v[1]==v[2])
    return true;
    return false;
	
	
}
bool od(int x, int y, int z){
    vector< int >v;
    v.push_back(x);v.push_back(y);v.push_back(z);
    sort(v.begin(),v.end());
    if(v[0]+v[1]<v[2])
    return true;
    return false;
	
	
}
 int main(){
//freopen("input.txt","r",stdin);
int t;
cin>>t;
if(t==1){
int n;cin>>n;
while(n--){
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	int d1=abs(x2-x1)*abs(x2-x1) +abs(y2-y1)*abs(y2-y1);
	int d2=abs(x2-x3)*abs(x2-x3) +abs(y2-y3)*abs(y2-y3);
	int d3=abs(x3-x1)*abs(x3-x1) +abs(y3-y1)*abs(y3-y1);
	if(d1==d2 || d2==d3|| d3==d1){
		puts("Isosceles triangle");
	}
	else
	puts("Scalene triangle");
	
}}
else{
	int n;cin>>n;
while(n--){
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	int d1=abs(x2-x1)*abs(x2-x1) +abs(y2-y1)*abs(y2-y1);
	int d2=abs(x2-x3)*abs(x2-x3) +abs(y2-y3)*abs(y2-y3);
	int d3=abs(x3-x1)*abs(x3-x1) +abs(y3-y1)*abs(y3-y1);
	int fl=0;
    if(d1==d2 || d2==d3|| d3==d1){
		//puts("Isosceles triangle");
		fl=1;
	}
	else fl=0;
	if(fl==1){
	//	cout<<d1<<d2<<d3<<endl;
		if(ri(d1,d2,d3))
		 puts("Isosceles right triangle");
		else{
		       if(od(d1,d2,d3)) puts("Isosceles obtuse triangle");
		       else puts("Isosceles acute triangle");
		}
		
	}
	else{
		if(ri(d1,d2,d3)) 
		puts("Scalene right triangle");
		else{
			if(od(d1,d2,d3)) puts("Scalene obtuse triangle");
			else puts("Scalene acute triangle");
			
		//	puts("-1");
		}
	}
	
	
//	puts("Scalene triangle");
//	double xx=sqrt((double)d1);	double yy=sqrt((double)d2);	double zz=sqrt((double)d3);
//	cout<<xx <<" "<<yy<<" "<<zz<<endl;;
	
}
printf("\n");
}

return 0;}
