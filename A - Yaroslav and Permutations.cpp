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
#define     sc(a)  scanf("%d ",&a) 
#define     p(a)  printf("%lld\n",a) 
#define     l(i,a)  for(int i=0;i<a;i++)
#define     re(j,a,b)  for(int j=a;j<b;j++)  
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
int a[200];
vector< int > temp;
map< int , int >m;
bool che(){
	int sz=temp.size();
	l(i,sz){
		if(i==0) continue;
		else{
			if(temp[i]==temp[i-1]) return false;
		}
	}
	return true;
}
map< int , int >mori;
int main(){  
//freopen("input.txt","r",stdin);
int n;
cin>> n;
l(i,n){
	cin>>a[i];
	m[a[i]]++;
	mori[a[i]]++;
	
}
bool fl=true;
while(1){
for(map< int , int >::iterator i=m.begin();i!=m.end();i++){
	if(i->second>0){
	
temp.push_back(i->first);
i->second--;}
	
}
for(map< int , int >::iterator i=m.begin();i!=m.end();i++){
if(i->second!=0){
	fl=false;
break;}	

}
if(!fl) fl=true;
else break;



	
	
}
if(m.size()==1 && n>1) puts("NO");
else{

int c=1;
for(int i=n-1;i>=0;i--){
	if(i==n-1) continue;
	else{
		if(temp[i]!=temp[i+1])break;
		else c++;
	}
}

//if(c==0) puts("YES");
//else{
//cout<< temp.size()<<endl;
//cout<< temp[n-1];
int reqpos=temp.size()-c+1;
//cout<<reqpos<<endl;
int notpos=(mori[temp[temp.size()-1]]-c)*2;
//cout<<m[temp[temp.size()-1]]<<endl;
int rem=reqpos- notpos;
if(rem>=c) puts("YES");
else puts("NO");
 m.clear();
temp.clear();}
	return 0;
} 
