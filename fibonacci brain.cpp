#include<bits/stdc++.h>
#include<queue>
#include<iostream>
using namespace std;
#define pp pair<int,int>
using namespace std;
const int INF=INT_MAX;
int a[2][2]={{1,1},{1,0}};
void mul(int F[2][2], int M[2][2]){
/*	int c[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;i++) c[i][j]=0;
		
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
		
		c[i][j] +=a[i][k]*b[k][j];
	}
		
		
	}
		
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
		a[i][j]= c[i][j];
	}*/
	int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
 
  a[0][0] = x%10;
  a[0][1] = y%10;
  a[1][0] = z%10;
  a[1][1] = w%10;
	
	
}
void power(int a[2][2], int n){
		
	if(n==0|| n==1)
	return;
	else if(n%2==0){
		power(a,n/2);
		mul(a,a);
		
	}
	else{
	int c[2][2]={{1,1},{1,0}};
	power(a,n-1);
	mul(a,c);
}
}


int main()
{
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		if(n==1)
		puts("0");
		else if(n==2) puts("1");
		else{
			power(a,n-1);
			cout<<a[1][0]%10<<endl;
		
		}
		a[0][0]=1;
		a[0][1]=1;
		a[1][0]=1;
		a[1][1]=0;
//	a[2][2]={{1,1},{1,0}};
	}
	return 0;
}
