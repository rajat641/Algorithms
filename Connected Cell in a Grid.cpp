#include<bits/stdc++.h>
using namespace std;

int a[200][200];
vector< vector< int > >v;
vector< int >visit;
int mark[2000];
int comp=0;
void dfs(int s){
    visit[s]=1;
    mark[s]=comp;
    for(vector< int >::iterator i=v[s].begin();i!=v[s].end();i++){
        if(!visit[*i]){
            //comp++;
            dfs(*i);}
    }
    
}
int pos[200][200];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int row, col;
    cin>>row>>col;
    int k=1;
    for(int u=1;u<=row;u++){
        for(int j=1;j<=col;j++){ cin>>a[u][j];pos[u][j]=k;k++;}
    }
    v=vector< vector< int > >(k+1);
    for(int u=1;u<=row;u++){
        for(int j=1;j<=col;j++){
            if(a[u][j]==1){
                int poss=pos[u][j];
                if(a[u-1][j]==1){
                    v[poss].push_back(pos[u-1][j]);
                    v[pos[u-1][j]].push_back(poss);
                }
                if(a[u+1][j]==1){
                    v[poss].push_back(pos[u+1][j]);
                    v[pos[u+1][j]].push_back(poss);
                }
                 if(a[u][j-1]==1){
                    v[poss].push_back(pos[u][j-1]);
                    v[pos[u][j-1]].push_back(poss);
                }
                 if(a[u][j+1]==1){
                    v[poss].push_back(pos[u][j+1]);
                    v[pos[u][j+1]].push_back(poss);
                }
                 if(a[u-1][j+1]==1){
                    v[poss].push_back(pos[u-1][j+1]);
                    v[pos[u-1][j+1]].push_back(poss);
                }
                 if(a[u-1][j-1]==1){
                    v[poss].push_back(pos[u-1][j-1]);
                    v[pos[u-1][j-1]].push_back(poss);
                }
                 if(a[u+1][j+1]==1){
                    v[poss].push_back(pos[u+1][j+1]);
                    v[pos[u+1][j+1]].push_back(poss);
                }
                 if(a[u+1][j-1]==1){
                    v[poss].push_back(pos[u+1][j-1]);
                    v[pos[u+1][j-1]].push_back(poss);
                }
            }
            
        }
        
    }
    visit=vector< int >(k+1,0);
    int ans=0;
    for(int jj=1;jj<=k;jj++){
          if(!visit[jj]){
            //  comp=1;
              dfs(jj);
              comp++;
             // ans= max(ans, comp);
          }
        
    }
    map< int , int >mm;
    for(int jj=1;jj<=k;jj++){
        mm[mark[jj]]++;
        ans= max(ans, mm[mark[jj]]);
      //  cout<< mark[jj]<<" ";
        
    }
    cout<< ans<<endl;
    return 0;
}

