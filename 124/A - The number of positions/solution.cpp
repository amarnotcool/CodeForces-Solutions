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
    
    int n, a, b;
    cin >> n >> a >> b;
 
    cout << n - max(a, n-b-1) << endl;
    
    return 0;
}