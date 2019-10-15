#include <bits/stdc++.h>

using namespace std;

vector< int >ss;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t; scanf("%d", &t);
    
    for(int u=0;u<t;u++){
        int x;
        scanf("%d", &x);
        if(!u) ss.push_back(x);
    else{
    //    sort(ss.begin(), ss.end());
        
        if(x> *ss.rbegin()){ss.push_back(x);}
        else{
            vector< int >::iterator j= lower_bound(ss.begin(), ss.end(), x);
            *j=x;
            
        }
        
    }
    
    }
    printf("%d", ss.size());
        ss.clear();
    return 0;
}
