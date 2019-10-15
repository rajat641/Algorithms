/*
 
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
#define     p(a)  printf("%lld\n",a) 
#define     l(i,a)  for(i=0;i<a;i++)
#define     re(j,a,b)  for(j=a;j<=b;j++)  
# define ll   long long 
#define modu 10007
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
uncowed forces
 
*/
//map< int, int >m;
 ll int fun(ll int x){
	ll int s=0;
	ll int y=x;
	while(y>0){
		s+= (y%10);
		y/=10;
	}
	return s;
}
 ll int cal( ll int x){
	if(x<10)
	return x;
	else return cal(fun(x));
}
int main(){
int t;cin>>t;
//get(&t);
//cin>>t;
while(t--){
	ll int a,d,l,r;//get(&a);get(&d);get(&l);get(&r);
	cin>>a>>d>>l>>r;
	//ll int sum=0;
	ll int diff= r- l+1;
      ll int arr[11];
      arr[1]=cal(a);
      for(ll int u=2;u<=9;u++){
      	arr[u]= cal(a+(u-1)*d);
      }
      ll int sum=0;//,c=0;
      ll int c= (r-l)/9;
      for(ll int u=1;u<=9;u++){
      	ll int mm=(l+u-1)%9;
      	if(mm==0)
      	mm=9;
      	sum +=arr[mm];
      	
      }
      ll int ans= sum*c;
      if(c==0)
      l= l+ 9*c;
      else l = l+9*c;
      ll int mm;
      while(l!=r){
      	 mm=l%9;
      	if(mm==0)
      	mm=9;
      	ans +=arr[mm];
      	l++;
     // 	cout<< ans<<" ";
      }
      mm= l%9;
      if(mm==0)
      mm=9;
      cout<<(ans+ arr[mm])<<endl;
}
return 0;
}  
