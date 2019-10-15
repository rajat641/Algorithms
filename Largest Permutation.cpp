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
#define     re(j,a,b)  for(int j=a;j<=b;j++)  
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

	
	
int a[2*100001];map< int , int >mm; vector< int >v;
int ans[100001];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin>>n>>k;
   
    
    for(int u=1;u<=n;u++){ cin>>a[u];v.push_back(a[u]);
                         mm[a[u]]=u;
                         }
    sort(v.rbegin(),v.rend());
    
  //  map< int , int >::iterator i=mm.end();
    //--i;
    if(k>=n-1) k=n-1;
    int kk=0;
    if(k==n-1){
        for(int u=0;u<n;u++) cout<<v[u]<<" ";
    }
    else{
    int swapp=0;
        for(int u=0;u<n;u++){
            if(a[u+1]==v[u]) continue;
            else{
              //  if(swapp>=k) break;
                for(int j=u+1;j<n;j++){
                    if(a[j+1]==v[u]){
                        swap(a[u+1], a[j+1]);
                        swapp++;
                        break;
                    }
                    
                }
                
            }
            if(swapp==k) break;
        }
        for(int u=1;u<=n;u++) cout<<a[u]<<" ";
        
    }
    return 0;
}

