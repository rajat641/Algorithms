#include<bits/stdc++.h>
using namespace std;
#define ll   long long 
//#define max 706000
#define gc getchar_unlocked
//#define pc putchar_unlocked
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
 
 
/**
finaaly it worked!!!!!!
 
*/
class compr{
	public:
		bool operator()(int x, int y){
			return x>y;
		}
		
	
};
int ans;
int main(){
	//freopen("inp.txt","r", stdin);
int t; cin>>t;

while(t--){
//	ans++;
	int sup=0;
		int vil=0;
	int op;
	cin>>op;
	int i;
	vector< string >ss;
	bool flp=true;
	l(i,op){
	//	ans++;
		string s; cin>>s;
		//int sz= s.length();
		ss.push_back(s);}
		l(i, ss.size()){
		int sz= ss[i].length();
		string s=ss[i];
	//	cout<<s<<endl;
		if(sz<3) vil++;
		else{
		
		int k= sz-1;
		bool fl= false;
		
		if((s[k]=='n' &&s[k-1]=='a' && s[k-2]=='m') ||(s[k]=='n' &&s[k-1]=='a' &&s[k-2]=='m'&&s[k-3]=='o'&&s[k-3]=='w')) fl=true;
		if(fl) sup++;
		else vil++;}
	//	cout<<vil<<" "<<sup<<endl;
		if(sup-vil>=2) {
		puts("superheroes"); flp=false;break;}
	else{
		if(vil-sup>=3) {
		puts("villains");flp=false;break;}
	//	ans++;
	}
		
		
		
	}
	if(flp)
	puts("draw");
//	cout<<op<<endl;
	
}
//p(ans);
	return 0;
}
