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
#define     re(j,a,b)  for(j=a;j<=b;j++)  
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

/*
playing with segment trees

*/
struct node{
	int minn;
	int mini;
	int maxx;
	int maxi;
	
};
bool fl=true;
struct node tree[4*200001],w,ans;

int a[2000001];
void build(int id, int st, int en){
	if(st> en) return ;
	if(st==en){
		tree[id].minn=a[st];
		tree[id].mini=st;
		tree[id].maxx=a[st];
		tree[id].maxi=st;
		return ;
	}
	int mid= st+(en-st)/2;
	build(2*id,st,mid);
	build(2*id+1,mid+1,en);
	if(tree[2*id].minn > tree[2*id+1].minn){
		tree[id].minn=tree[2*id+1].minn;
		tree[id].mini=tree[2*id+1].mini;
		
	}
	else{
		tree[id].minn=tree[2*id].minn;
		tree[id].mini=tree[2*id].mini;
		
	}
	if(tree[2*id].maxx > tree[2*id+1].maxx){
		tree[id].maxx=tree[2*id].maxx;
		tree[id].maxi=tree[2*id].maxi;
		
	}
	else{
		tree[id].maxx=tree[2*id+1].maxx;
		tree[id].maxi=tree[2*id+1].maxi;
		
	}
//	return ;
	
}

struct node query(int id, int st, int en , int qst, int qen){
//	struct node ans;
	if(st >en || qst> en || qen< st){
	
		return w;
		
	}
	if(st>=qst && en<=qen){
	
		return tree[id];
		
	}
	int mid= st+ (en-st)/2;
//	if(qen<=mid) return query(2*id,st,mid,qst,qen);
//	if(qst>mid) return query(2*id+1,mid+1,en,qst,qen);
    struct node q1=query(2*id,st,mid,qst,qen);
	struct node q2=query(2*id+1,mid+1,en,qst,qen);
//	struct node ans;
	if(q1.maxx > q2.maxx){
	ans.maxx=q1.maxx;
		ans.maxi=q1.maxi;
	}
	else{
		ans.maxx=q2.maxx;
		ans.maxi=q2.maxi;
	}
	if(q1.minn> q2.minn){
		ans.minn=q2.minn;
		ans.mini=q2.mini;
	}
	else{
	 ans.minn=q1.minn;
		ans.mini=q1.mini;
	}
	return ans;

}

 int main(){
  //freopen("input.txt","r",stdin);
   // ios_base::sync_with_stdio(0);
	//cin.tie(NULL);cout.tie(NULL);
	w.maxx=-1;
    w.maxi=0;
    w.minn=99999999;
    w.mini=0;
    int n,m;
    sc(n);
    sc(m);
    for(int u=1;u<=n;u++)
	 sc(a[u]);
    build(1,1,n);
   // build1(1,1,n);
    while(m--){
    	int st, en, num;
    	sc(st);sc(en);sc(num);
    	//cin>>st>>en>>num;
    struct node ans1=query(1,1,n,st,en);
        
    	
    	if(ans1.minn==num && ans1.maxx==num){
    		puts("-1");
    	}
    	else{
    		if(ans1.minn!=num) p(ans1.mini);//<<endl;
    		else p(ans1.maxi);//<<endl;
    		
    	}
	//	fl=true; 
    }
    
     return 0;}
