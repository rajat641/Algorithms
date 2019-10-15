#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long a[500001]; 
long long ri[500001];
long long le[500001];
long long ans=0;
int kk=0;
int n;
int  rec(int st, int en){
    if(st>=en) return 0 ;
    for(int u=st-1;u<= en+1;u++){
    	le[u]=0;
    	ri[u]=0;
    	
    }
    
     for(long long  u=st;u<= en;u++){
          //  cin>>a[u];
            le[u]= le[u-1]+ a[u];
            
        }
        for(int u=en;u>=st;u--){
            ri[u]= ri[u+1]+ a[u];
        }
    int fl=0;
    int uu;
    for(int u=st;u<= en;u++){
        if(le[u]==ri[u+1]){
           //  uu=u;
             //kk++;
            //fl=1;
            return  max(rec(st, u), rec(u+1, en))+1;
		//	break;
            
        }
        
    }
   //if(fl){
 //  	fl=0;
        
    //rec(uu+1, en);
	//return rec(st, uu);
//	return rec(uu-1, en);
//	return rec(st, uu+1);
	
    //}
  return 0 ;
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  freopen("inn.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;ans=0;
        for(int u=1;u<= n;u++){
            cin>>a[u];
         //   le[u]= le[u-1]+ a[u];
            
        }
      //  for(int u=n;u>=1;u--){
      //      ri[u]= ri[u+1]+ a[u];
    //    }
        if(n==1) puts("0");
        else{
         kk=rec(1, n);
         //if(kk)
            cout<< kk<<endl;
           // else cout<< kk<<endl;
            kk=0;
            
        }
    }
    return 0;
}

