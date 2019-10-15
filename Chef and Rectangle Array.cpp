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
inline void get(int *p){register  int n=0,sign=1,a=gc();while(a<'0'||a>'9'){ if(a=='-'){sign=-1;a=gc();break;} a=gc();}while(a>='0' && a<='9'){n=(n<<1)+(n<<3)+a-'0';a=gc();}*p=n*sign;}
  
 
inline void put(int n){char d[10];int i=0;if(n<0){pc('-');n=-n;}do{d[i++]=n%10+'0';n=n/10;}while(n);while(i)pc(d[--i]);pc('\n');}
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
string s;
void swap(char *x, char *y){
	char t;
	t= *x;
	*x= *y;
	*y=t;
	
}
int c=0;
void pr(int st, int e){
	if(st==e){
	cout<<s<<endl;
	}
	else re(i,st,e){
	swap(&s[i],&s[st]);	
	pr(st+1,e);
	swap(&s[i],&s[st]);
		
	}
	
}

//int a[300001];

int a[1000][1000];
int b[1000][1000];
int dp[1000][1000];
vector< vector< pair< int , int > > >mm;
int n, m;
int ans[1000][1000][10][10];
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




void precomp(){
    for (int i=0;(1<<i)<=n;i++){
        for(int j=0;(1<<j)<=m;j++){
            for (int x=0;x+(1<<i)-1<n;x++){
                for (int y=0;y+(1<<j)-1< m;y++){
                    if (i==0&&j==0)
                        ans[x][y][i][j] =a[x][y]; 
                    else if (i == 0)
                        ans[x][y][i][j] =max(ans[x][y][i][j-1], ans[x][y+(1<<(j-1))][i][j-1]);
                    else if (j == 0)
                        ans[x][y][i][j] = max(ans[x][y][i-1][j], ans[x+(1<<(i-1))][y][i-1][j]);
                    else 
                        ans[x][y][i][j] = max(max(max(ans[x][y][i-1][j-1], ans[x + (1<<(i-1))][y][i-1][j-1]), ans[x][y+(1<<(j-1))][i-1][j-1]), ans[x + (1<<(i-1))][y+(1<<(j-1))][i-1][j-1]);
                    
                }
            }
        }
    }
}

int calmax(int x, int y, int x1, int y1){
    int k = log2(x1 - x + 1);
    int l = log2(y1 - y + 1);
    
    return max(max(max(ans[x][y][k][l], ans[x1 - (1<<k) + 1][y][k][l]), ans[x][y1 - (1<<l) + 1][k][l]), ans[x1 - (1<<k) + 1][y1 - (1<<l) + 1][k][l]);
    
}


int main() {
    
 // freopen("inp.txt", "r", stdin);

get(&n);
get(&m);


//mm=vector< vector< pair< int , int > > >(1001);
re(i,0, m) dp[0][i]=0;
re(i,0,n) dp[i][0]=0;
re(i, 0,n-1){
	re(j,0,m-1){
		get(&a[i][j]);//=0;
		b[i+1][j+1]= a[i][j];
		dp[i+1][j+1]=b[i+1][j+1]+dp[i][j+1]+dp[i+1][j]- dp[i][j];
	
		
	}
}


	
precomp();
int q;
get(&q);
// main logic comes here man!!!!
while(q--){
	int st, en;
	get(&st);
	get(&en);
 //sc(st);
//sc(en);
 int blx, bty;

	int ans=INT_MAX;
	for(int u=1;u<=n-st+1;u++){
		for(int k=1;k<=m-en+1;k++){
			 blx=  u+st-1;
			bty=  k+en-1;
			
		 	ans= min(ans, abs((blx-u+1)*(bty-k+1)*calmax(u-1, k-1, blx-1, bty-1)-(dp[blx][bty]-dp[blx][k-1]-dp[u-1][bty]+dp[u-1][k-1])));
	//	 cout<<calmax(u, k, blx, bty)<<endl;
		 }
                           
			
		
		
	}

			
			
		
			
		
		
	
//	cout<<"\n";
	put(ans);}

	




    return 0;
}
