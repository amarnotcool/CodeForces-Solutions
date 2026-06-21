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
    
    int n, m, a, b;
    cin >> n >> m >> a >> b;
 
    int case1 = n*a;
    int case2 = (n/m)*b + (n%m)*a;
    int case3 = ceil((double)n / m) * b;
 
    cout << min({case1, case2, case3}) << endl;
    
    return 0;
}