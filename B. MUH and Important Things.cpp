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
 
 
/*
c++ does my work!!! but some delay
 
*/
vector< int >vv;
map< int , int >m;
map< int , set< int > > mm;
int a[30000];
void pri(vector< int >&vv){
	int sz=vv.size();
	for(int u=0;u<sz;u++){
		if(vv[u]==-1) continue;
		else cout<<vv[u]+1<<" ";
		
	}
}

int main(){  

//freopen("input.txt","r",stdin);
int n;
cin>>n;
l(i,n){
cin>>a[i];
mm[a[i]].insert(i);}
l(i,n)
m[a[i]]++;
if(n<=2) puts("NO");
else{
	if(n==3){
		if(m.size()==1){
			puts("YES");
			cout<<"1"<<" "<<"2"<<" "<<"3"<<"\n";
			cout<<"1"<<" "<<"3"<<" "<<"2"<<"\n";
			cout<<"2"<<" "<<"1"<<" "<<"3"<<"\n";
		}
		else puts("NO");
	}
	else{
		int count=0;
		for(map< int , set< int > >::iterator j=mm.begin();j!=mm.end();j++){
			if(j->second.size()>=2) count+=j->second.size();
			
		}
		if(count<=2)puts("NO");
		else{
			puts("YES");
			
			for(map< int , set< int > >::iterator j=mm.begin();j!=mm.end();j++){
			for(set< int >::iterator d=j->second.begin();d!=j->second.end();d++){
				vv.push_back(*d);
			}
			vv.push_back(-1);
			
		                             }
		
			for(int f=1;f<=3;f++){
				if(f==1){
					pri(vv);
					cout<<"\n";
				}
				else{
					int in=0;
					if(f==2){
						
						for(int u=0;u<vv.size();u++){
							if(vv[u]!=-1)
							if(vv[u+1]!=-1){
								swap(vv[u],vv[u+1]);
								in=u+1;
								break;
							}
							
						}
						pri(vv);cout<<"\n";
						
					}
					else{
						int c=0;
						for(int u=in+1;u<vv.size();u++){
							if(vv[u]!=-1)
							if(vv[u+1]!=-1 ){
								swap(vv[u],vv[u+1]);
							// 	u=u+1;
								c++;
								if(c==2)break;
							}
						}
						pri(vv);cout<<"\n";
					}
					
				}
				
			}
			
		}
	}
	
}
vv.clear();mm.clear();m.clear();
	return 0;
} 

