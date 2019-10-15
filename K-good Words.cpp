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
# define ll   long long 
#define     p(a)  printf("%d\n",a) 
#define     l(i,a)  for(int i=0;i<a;i++)
#define     re(j,a,b)  for(ll int j=a;j<=b;j++)  

#define modu 1000000007
ll  modular_pow(ll int  base, ll int  exponent)
{
    if(exponent==0)
    return 1;
    else if(exponent%2==0){
        ll int res=modular_pow(base,exponent/2)%modu;
        return (res*res )%modu;
        
        
    }
    else{
        return (modular_pow(base,exponent-1) * base)%modu;
        
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


ll max(ll x, ll y){
	if(x>=y) return x;
	else return y;
}
string s;
void swap(char *x, char *y){
	char t;
	t= *x;
	*x= *y;
	*y=t;
	
}
int c=0;
void pr(int st, int e){
	if(st==e){
	cout<<s<<endl;
	}
	else re(i,st,e){
	swap(&s[i],&s[st]);	
	pr(st+1,e);
	swap(&s[i],&s[st]);
		
	}
	
}

int main()
{
freopen("inp.txt", "r", stdin);
int t;
cin>>t;
while(t--){
	string s; int n;
	map< char , int >m;
	cin>>s>>n;
	int minn=INT_MAX;;
	int uu= s.length();
	l(i, uu){
		m[s[i]]++;
		//cout<< m[s[i]]
	//	if(i==0) minn= m[s[i]];
	//	minn=min(minn, m[s[i]]);
	}
//	vector< int >a(n+2, 0);
       int sum=0;
	int u=0;
	for(map< char, int >::iterator j= m.begin();j!= m.end();j++){
	
		for(map< char, int >::iterator i= m.begin();i!= m.end();i++){
			if(i->second< j->second)sum+=i->second;
			else if(i->second> j->second+n) sum+=(i->second-j->second-n);
		}
		minn=min(minn, sum);
		sum=0;
		++u;
	}
	m.clear();
	cout<< minn<<endl; }
  return 0;
}
