#include<bits/stdc++.h>
using namespace std;
#define ll   long long 
//#define max 706000
#define gc getchar_unlocked
#define pc putchar_unlocked
//inline void get(int *p){register  int n=0,sign=1,a=gc();while(a<'0'||a>'9'){ if(a=='-'){sign=-1;a=gc();break;} a=gc();}while(a>='0' && a<='9'){n=(n<<1)+(n<<3)+a-'0';a=gc();}*p=n*sign;}
 
 
//inline void put(int n){char d[10];int i=0;if(n<0){pc('-');n=-n;}do{d[i++]=n%10+'0';n=n/10;}while(n);while(i)pc(d[--i]);pc('\n');}
#define modu 1000000007
long long modular_pow(ll int  base, ll int  exponent)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base);
        exponent = exponent >> 1;
        base = (base * base);
    }
    return result;
}
 

 
 int gcd(ll int a,ll int b){
 	if(b==0)
 	return a;//gcd
 	else return gcd(b,a%b);
 }
 
bool chek(int x){
	return (x&&!(x&(x-1)));// power of 2
}

int main() {
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;
	map<int,int>m1;
	map<int,int>m2;
	for(int u=0;u<n;u++){
		int x;
		cin>>x;
		m1[x]++;
	}
	int m;
	cin>>m;
	for(int u=0;u<m;u++){
		int y;
		cin>>y;
		m2[y]++;
	} 
	          map<int,int>::iterator j=m2.begin();
			for(map<int,int>::iterator i=m1.begin();i!=m1.end();i++){
     	                 if(i->second!=j->second){
     	                 	cout<<i->first<<" ";
     	                 }
     	                 j++;
     }
	
return 0;}  
