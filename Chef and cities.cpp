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
/*ll modular_pow(ll base, ll exponent)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % MOD;
        exponent = exponent >> 1;
        base = (base * base) % MOD;
    }
    return result;
}
 */
 
 
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


//ll max(ll x, ll y){
//	if(x>=y) return x;
//	else return y;
//}

void swap(char *x, char *y){
	char t;
	t= *x;
	*x= *y;
	*y=t;
	
}
/*string s;
void pr(int st, int e){
	if(st==e){
	cout<<s<<endl;
	}
	else re(i,st,e){
	swap(&s[i],&s[st]);	
	pr(st+1,e);
	swap(&s[i],&s[st]);
		
	}
	
}*/

//int a[300001];


/*int calmax(int x, int y, int g, int h ){
	
	for(int u=1000;u>=1;u--){
		if(mm[u].size()>0){
			int k= mm[u].size();
			for(int j=0;j<k;j++){
				pair< int , int >pp=mm[u][j];
				if(pp.first>=x&&pp.first<=g && pp.second>=y && pp.second<=h) return u;
				
			}
			
			
		}
		
	}
	
	
	
}*/
// use sparse matrix logic!!!





int a[1000];
int main(){
//	freopen("inp.txt","r", stdin);
    ios::sync_with_stdio(false);
    int n;
 //   get(&n);
   sc(n);
    //cin>>n;
    l(i, n){
    	sc(a[i+1]);
    //	get(&a[i+1]);
    	
    }
    int q; //get(&q);
    sc(q);
    while(q--){
    	int x;
    	sc(x);
    //	get(&x);
    	if(x==1){
    		int city, va;
    		sc(city);sc(va);
    	//	get(&city);
		//	 get(&va);
    		a[city]= va;
    		
    	}
    	else{
    	int r;
    	sc(r);
	//	get(&r);
    	ll ans=1;
    	int u=1;
    	int k=0;
    	while(1){
    	
    		u= 1+r*k;
    		if(u>n) break;
    		else ans = ans*a[u];
    		k++;
    		
    	}
    //	int d= log10(ans);
    //	cout<< d<<endl;
    	ll ten=ans;
    	while(ten>=10)
    	ten/=10;
    //	for(int u=1;u<d;u++)
    //		ten*=10;
    		printf("%lld %lld\n", ten, ans%modu);
    		//cout<< ans/ten<<" "<< ans<<endl;
    		
    	}
    	
   }
 return 0;
}
