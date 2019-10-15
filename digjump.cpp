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
 
 
/*
c++ does my work!!! but some delay
 
*/

/*
playing with segment trees

*/

int dist[100005];
int vis[100005];
vector< int > V[10];
int main(){   
    string s;
    int N,i=0,j;
    cin>>s;
    N=s.size();
 
    for(int i=0;i<N;i++){
       //int val = s[i]-'0';
       vis[i]=0;
       V[s[i]-'0'].push_back(i);
    }
    queue< int >qq;
    qq.push(0);
    dist[0]=0;
    vis[0]=true;
    while(!qq.empty()){
          	i=qq.front();	
    	    if(i==N-1){
    	    	printf("%d\n",dist[N-1]);
    	    	break;
    	    }
    	    qq.pop();
    	    int val = s[i]-'0';
            int vsz = V[val].size();
            for(j=0; j<vsz; j++){
               int nidx = V[val][j];
               if(!vis[nidx]){
                  vis[nidx]=true;
                  qq.push(nidx);
                  dist[nidx] = dist[i]+1;
               }
            }
            V[val].clear();
    	    if((i+1)<=N-1&&!vis[i+1]){
    	        qq.push(i+1);
    	        vis[i+1]=true;
				dist[i+1]=dist[i]+1;	
    	    } 
    	    if((i-1)>=0&&!vis[i-1]){
    	    	qq.push(i-1);
    	    	vis[i-1]=true;
				dist[i-1]=dist[i]+1;
    	    }     
			 
    } 
	return 0;
} 

