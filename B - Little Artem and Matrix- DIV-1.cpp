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


ll max(ll x, ll y){
	if(x>=y) return x;
	else return y;
}

int a[200][200];
int b[200][300];
int main() {

//	freopen("inp.txt","r",stdin);
int r,c,q;
cin>>r>>c>>q;
int k=1;
re(i,1,r){
	re(j,1,c){
	a[i][j]=k++;}
}
map< int , int >mm;
for(int u=1;u<=r*c;u++) mm[u]=0;
int row[r+3];
int col[c+2];
//re(i,1,r) row[i]=0;
//re(j,1,c) col[j]=0;
while(q--){
	int x;
	cin>>x;
	if(x==2){
		int xq;
		cin>>xq;
		for(int u=1;u<=r;u++){
				int newpos= u-1;
				if(newpos==0){
					newpos=r;
			//		newpos+=1;
				}
				b[newpos][xq]=a[u][xq];
			}
	for(int u=1;u<=r;u++) a[u][xq]= b[u][xq]; 
	}
	else{
		if(x==1){
			int yq;
			cin>>yq;
			for(int u=1;u<=c;u++){
				int newpos= u-1;
				if(newpos==0){
					newpos=c;
				//	newpos+=1;
				}
				b[yq][newpos]=a[yq][u];
			}
			for(int u=1;u<=c;u++){
				a[yq][u]= b[yq][u];
				
			}
		}
		else{
			int xq, yq, val;
			cin>>xq>>yq>>val;
               mm[a[xq][yq]]= val;			
		}
		
	}
	
	
}
int cr=0;
for(map< int , int> ::iterator i= mm.begin();i!= mm.end();i++){
//	if(cr==c+1){
//		cr=1;cout<<endl;
//	}
//	else{
		 cout << i->second<<" "; cr++;
//	}
if(cr== c){
	cout<<endl;
	cr=0;
}
	
	
}


return  0;}
