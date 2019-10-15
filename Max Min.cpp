#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N, K, unfairness = INT_MAX;
    cin >> N >> K;
    int list[N+1];
    for (int i=1; i<=N; i++)
        cin >> list[i];
    sort(list+1,list+N+1);
    for(int u=1;u<=N-K+1;u++){
    unfairness= min(unfairness,list[K+u-1]-list[u]);
    }
    
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
    cout << unfairness << "\n";
    return 0;
}

