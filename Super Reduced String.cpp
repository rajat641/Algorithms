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


string ss;
int main(){
//	freopen("inp.txt","r", stdin);
// pre();
 
  cin>>ss;
    vector< char >d;
    vector< char >s;
    for(int u=0;u<ss.length();u++) s.push_back(ss[u]);
    while(1){
        bool fl=false;
        for(int u=0;u<s.size();u++){
           // if(s[u]=='*') continue;
            //else{
                if(s[u]==s[u-1]) {s[u]='*'; s[u-1]='*'; fl=true;}
            //}
            
        }
        for(int u=0;u<s.size();u++){
            if(s[u]!='*'){
               // d.append(s[u]);
                d.push_back(s[u]);
                
            }
        }
        //d.push_back('\0');
        s.clear();
        s.assign(d.begin(), d.end());
        d.clear();
      //  cout<<s<<endl;
        if(s.size()==0){ puts("Empty String"); break;}
           if(!fl){
               if(s.size()==0) puts("Empty String");
               else {
               	for(int u=0;u<s.size();u++) cout<<s[u];
               	cout<<endl;
               }
               break;
           }
        
    }
    return 0;
}
