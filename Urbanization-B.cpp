#include<bits/stdc++.h>
using namespace std;

int main(){
//	freopen("inp.txt","r",stdin);
	int n1, n2, m;
	cin>>m>>n1>>n2;
	vector< int >v;
	for(int u=0;u<m;u++){
		int x; cin>>x; v.push_back(x);
		
	}
	if(n1>n2){
		int t= n1;
		n1= n2;
		n2=t;
		
	}
	sort(v.rbegin(), v.rend());
	long long  sum=0;
	int n3=n2;
	long long  sum1=0;
	for(int u=0;u<m;u++){
		if(u<n1) sum+=v[u];
		else{
			sum1+=v[u];n3--;
			if(n3==0) break;
			
		}
		
	}
//	cout<<n2;
//	cout<< sum<<" "<<sum1<<endl;
  double ans = double(sum1)/ n2;
     ans += double(sum)/n1;
	printf("%.8llf\n", ans);
	
	
	
	return 0;
	

