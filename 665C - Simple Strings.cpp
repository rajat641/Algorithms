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

//char stri[200002];
string stri;
vector< int >poss;
int main() {

//freopen("inp.txt","r",stdin);
set< char >ss;


//scanf("%s", stri);
cin>>stri;
int u= stri.length();
//cout<< u<<endl;
poss= vector< int >(u+3,1);
//l(i, u+2) poss[i]=1;
l(i ,u){
	if(i>0){
		if(stri[i]==stri[i-1]) poss[i]=poss[i-1]+1;
		
		
	}
	
}
/*l(i, u){
	if(ss.find(stri[i])!= ss.end()){
		ss.erase(ss.find(stri[i]));
		
	}
	
}
if(!ss.empty()){

char rep= * ss.begin();
l(i, u){
	if(poss[i]%2==0){
		stri[i]= rep;
		
	}
	
}
printf("%s\n", stri);
}
else{*/
	set< char > trrru;
	l(i, 26){
		trrru.insert('a'+i);
	//	printf("%c ",'a'+i);
	//	cout<< (char)'a'+i<<" ";
	}
//	l(i,u) cout<< poss[i]<<" ";
	
l(i,u){
	bool fl1= false;
	bool fl2= false;
	char prev, succ;
	if(poss[i]%2==0){
        if(i-1>=0){
        	prev=stri[i-1];
        	//trrru.erase(trrru.find(prev));
        	fl1= true;
        }
        if(i+1 <u){
        	succ= stri[i+1];
        	//trrru.erase(trrru.find(succ));
        	fl2= true;
        }
        
		if( fl1 && fl2){
			if(succ == prev){
				if(succ=='a') stri[i]='b';
				else stri[i]='a';
				
			}
			else{
				trrru.erase(trrru.find(prev));
				trrru.erase(trrru.find(succ));	
				stri[i]= * trrru.begin();//'a'+(succ+ prev)%26 -1;
				trrru.insert(prev);trrru.insert(succ);
				
			}
			
		}
		else{
			if(fl1){
				trrru.erase(trrru.find(prev));stri[i]= * trrru.begin();trrru.insert(prev);
				
				
			}
			else{
				if(fl2){
					trrru.erase(trrru.find(succ));stri[i]= * trrru.begin();trrru.insert(succ);
					
				}
			}
			
		}
		/**stri[i]= *trrru.begin();
		if(fl1)
        trrru.insert(prev);
        if(fl2)
        trrru.insert(succ); */
		//	poss[i]=1;	
		
	}
	
}
cout<< stri<<endl;

poss.clear();
return  0;}


