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
        int n;
        cin >> n;
 
        int x = (n-1)/2;
        int sum = (x*(x + 1)*(2*x+1))/6;
 
        int ans = 8 * sum;
 
        cout << ans << endl;
    }
    
    return 0;
}