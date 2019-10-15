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
ll a[2*100001];
class comp{
	public:
		bool operator()(pair< ll , ll > x, pair< ll , ll > y){
			if(x.first==y.first) return x.second > y.second;
			//if(x.second> y.second) return true;
			//else{
				
			//}
			else
			return x.first < y.first;
		}
};
int main(){
//	freopen("inp.txt","r",stdin);
	int n,k;
	 cin>>n>>k;
//	sc(n);sc(k);
	re(i,1,n) cin>>(a[i]);
//	priority_queue< pair< ll , ll >,vector< pair< ll , ll > >, comp>q;
 set< pair< ll , ll >,comp >q;
	map< ll , ll >mm;
	re(i,1,k){
		mm[a[i]]++;
	}
	for(map< ll, ll>::iterator i=mm.begin();i!=mm.end();i++){
		pair< ll, ll >uu=make_pair(i->second, i->first);
		q.insert(uu);
		
	}
	pair< ll, ll> ans=*q.begin();
//	cout<< ans.first<<" "<<ans.second<<endl;
	if(ans.first==1) cout<< ans.second<<endl;
	else puts("Nothing");
/*ll answer=INT_MIN;
for(set< pair<ll ,ll> >::iterator hh=q.begin();hh!=q.end();hh++){
	        	if(hh->first==1)
	        	answer=max(answer,hh->second);
	        	else break;
	        }
	        if(answer==INT_MIN)  puts("Nothing");
	        else cout<< answer<<endl;
	        answer=INT_MIN;*/


	int uu=1;
//	cout<<n<<" "<<k;
	re(j,2,n-k+1){
	//	if(ans.first==1) q.erase(q.begin());
	//	else{
		mm[a[uu]]--;
		set< pair< ll , ll > >::iterator uhh=q.find(make_pair(mm[a[uu]]+1,a[uu]));
		q.erase(uhh);
		if(mm[a[uu]]>0)
		q.insert(make_pair( mm[a[uu]],a[uu]));
		
		
	//}
	uu++;
		mm[a[j+k-1]]++;
		if(q.find(make_pair(mm[a[j+k-1]]-1,a[j+k-1]))!=q.end()){
			set< pair< ll , ll > >::iterator uh=q.find(make_pair(mm[a[j+k-1]]-1,a[j+k-1]));
		//	uh->first=mm[a[j+k-1]];
		//	uh->second=a[j+k-1];
		q.erase(uh);
		q.insert(make_pair(mm[a[j+k-1]],a[j+k-1]));
		}
		else q.insert(make_pair(mm[a[j+k-1]],a[j+k-1]));
		//q.push(make_pair(a[j],mm[a[j]]));
		ans= *(q.begin());
	   /*     for(set< pair<ll ,ll> >::iterator hh=q.begin();hh!=q.end();hh++){
	        	if(hh->first==1)
	        	answer=max(answer,hh->second);
	        	else break;
	        }
	        if(answer==INT_MIN)  puts("Nothing");
	        else cout<< answer<<endl;
	        answer=INT_MIN;*/
	
	//	cout<< ans.first<<" "<<ans.second<<endl;
	//	cout<<"1111";
		if(ans.first==1) cout<< ans.second<<endl;
	    else puts("Nothing");
	}
	
return 0;}    
