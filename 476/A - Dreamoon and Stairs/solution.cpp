#include<bits/stdc++.h>
using namespace std;
#define int long long
    
void fast_io() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);
std::cout.tie(NULL);
}
    
signed main(){
    fast_io();
    
    int n,m;
    cin >> n >> m;
 
    int start = (n+1)/2;
 
    for(int i=start; i<=n; i++){
        if(i % m == 0){
            cout << i << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}