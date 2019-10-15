#include<bits/stdc++.h>
using namespace std;
vector< int >vv;
vector< vector< int > > v;
int a[4*1000002];
void build(int id, int st, int en){
	if(st> en) return;
	if(st==en){
	//	if(st==en)
		a[id]=vv[st];
		
		return ;
		
	}
	
	int mid= st+(en-st)/2;
	build(2*id+1, st, mid);
	build(2*id+2,mid+1,en);
	a[id]= max(a[2*id+1],a[2*id+2]);
	return ;
	
	
}
int quer(int id, int st, int en, int qst, int qen){
	if(st>en ||qst>en||qen<st)
	return -1;

	if(qst<=st&&qen>=en)
	return a[id];
//	if(qst<=st) return quer(2*id+1,st,(st+en)/2,qst,qen);
//	if(qen>en) return quer(2*id+2,(((st+en)/2)+1),en,qst,qen);
	
	return max(quer(2*id+1,st,(st+en)/2,qst,qen),quer(2*id+2,(((st+en)/2)+1),en,qst,qen));
	
	
	
	
}
int main(){
//	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int q;
	cin>>q;
	v=vector< vector< int > >(1000004);
	for(int u=1;u<=n;u++){
		int x;
		cin>>x;
		vv.push_back(x);
		v[x].push_back(u-1);
		
	}
	build(0,0,n-1);
	while(q--){
		int st, en;
		cin>>st>>en;
		st--;
		en--;
		int que= quer(0,0,n-1,st,en);
	//	cout<< que;
		int ans=upper_bound(v[que].begin(),v[que].end(),en)-v[que].begin();
		if(st-1>=0)
		ans-=(upper_bound(v[que].begin(),v[que].end(),st-1)-v[que].begin());
		//-upper_bound(v[que].begin(),v[que].end(),st);
	//	if(st>0)
	//	ans-=(upper_bound(v[st-1].begin(),v[st-1].end(),que)-lower_bound(v[st-1].begin(),v[st-1].end(),que));
		
		cout<< ans<<endl;
		}
		v.clear();
		vv.clear();
	
	return 0;
}
