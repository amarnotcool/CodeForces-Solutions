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
    
    
    int n;
    cin >> n;
 
    int ans = n;
 
    for(int i= 0; i<n; i++){
        ans += (n - i) * i;
    }
 
    cout << ans << endl;
    
    return 0;
}