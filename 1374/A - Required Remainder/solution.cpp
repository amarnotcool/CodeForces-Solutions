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
    
    int t;
    cin >> t;
 
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;
 
        int ans = n - (n%x) + y;
 
        if(ans > n){
            ans -= x;
        }
 
        cout << ans << endl;
    }
    
    return 0;
}