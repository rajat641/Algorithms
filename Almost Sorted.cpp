#include <bits/stdc++.h>

using namespace std;

int a[1000001];
vector< int >v;
map< int , int >mm;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    for(int u=1;u<=n;u++) {cin>>a[u];
                           mm[a[u]]=u;
                           v.push_back(a[u]);}
    bool fl=true;
    int st ,en;
    sort(v.begin(), v.end());
    int kk=0;
    for(int u=1;u<=n;u++){
        if(a[u]!=v[u-1]) kk++;
        if(kk>2){
            fl=false;break;
        }
    }
    if(!fl){
        bool ff=true;
        vector< int >ch ;
        // logic for second case!!!!!!!!!!!!!!!!
        for(int u=1;u<=n;u++){
            if(a[u]!=v[u-1]){
                ch.push_back(a[u]);
            
        }
        
        
        }
    //st=ch[0];
        for(int u=1;u<ch.size();u++){
            if(ch[u]< ch[u-1]) continue;
            else{
                
                puts("no");ff=false;break;
            }
        }
    if(ff){
        cout<<"yes"<<endl;
        cout<<"reverse ";
        cout<<mm[ch[0]]<<" "<<mm[ch[ch.size()-1]]<<endl;
    }
    }
    else{
        puts("yes");
        if(kk>0){
        cout<<"swap ";
        vector< int >dd;
        for(int u=1;u<=n;u++){
            if(a[u]!=v[u-1]){
                dd.push_back(u);
            }
            
        }
        
            cout<< dd[0]<<" "<<dd[1]<<endl;}
    }
    return 0;
}

