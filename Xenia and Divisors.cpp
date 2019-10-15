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



//map< char, string> mm;
bool che(int ma[]){
	for(int u=1;u<=7;u++){
		if(ma[u]>0) return false;
		
	}
	return true;
	
}
vector< int > vv;
int main(){
//	freopen("input.txt","r",stdin);
   
    int n;
    cin>>n;
    int ma[8];
    map< int , int > m;
    for(int u=0;u<=7;u++) ma[u]=0;
    for(int u=1;u<=n;u++){
    	int x;cin>>x;
    	ma[x]++;
    	m[x]++;
    	
    }
  //  cout<< m.size();
    if(m.size()<3)
    puts("-1");
    else{
    	bool gg=true;
    	vector< set< int > > v;
    	while(1){
    		if(che(ma)) break;
    		int co=0;
    		map< int , int > di;
    		int rr[3];
    		for(int u=1;u<=6;u++){
    			set< int > ss;bool fl=true;
    			if(ma[u]>0){
    				
    				ss.insert(u);
    				rr[0]=u;
    		//	--ma[u];// co++;
    			for(int k=u+1;k<=7;k++){
    				if(ma[k]>0&&(k%u)==0){
    				
    				ss.insert(k);
    			//	di[k/u]++;
    				//cout<<k/u<<endl;
    			//	--ma[k];
    			rr[1]=k;
    				for(int i=k+1;i<=7;i++){
    					if(ma[i]>0 &&(i%k==0)){
    						ss.insert(i);
    					//	--ma[i];
    					rr[2]=i;
    						fl=false;break;
    					}
    					
    				}
    			//	cout<< rr[0]<<" "<<rr[1]<< " "<<rr[2]<<endl;
    				if(!fl){--ma[rr[0]];--ma[rr[1]];--ma[rr[2]];
    				 break;}
    			}
    			}
    		//	cout<<ss.size()<<endl;
    			if(!fl){
    			
    			fl=true;
    			v.push_back(ss);ss.clear();break;}
    			ss.clear();
    		
    		}
    	if(u==6){
    	gg=false;
		break;}
    		}
    		if(!gg)break;
    	}
    	if(v.size()==0|| v.size()!=(n/3))
    	puts("-1");
    	else{
    	//	cout<<v.size()<<endl;
    		for(int u=0;u<v.size();u++){
    			for(set< int > :: iterator i=v[u].begin();i!=v[u].end();i++) cout<< *i<<" ";
    			cout<<endl;
    		}
    		
    	}
    	
    }
    
    return 0;
}
