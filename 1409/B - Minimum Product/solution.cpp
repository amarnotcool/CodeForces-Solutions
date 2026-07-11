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
        int a, b, x, y ,n;
        cin >> a >> b >> x >> y >> n;
        
        int a1 = a;
        int b1 = b;
        int rem = n;
 
        int d = min(a1-x, rem);
        a1 -= d;
        rem -= d;
        
        d = min(b1-y, rem);
        b1 -= d;
 
        int ans1 = a1 * b1;
        
        a1 = a;
        b1 = b;
        rem = n;
 
        d  = min(b1 - y, rem);
        b1 -= d;
        rem -=d;
 
        d = min(a1-x, rem);
        a1 -= d;
 
        int ans2 = a1 * b1;
 
        cout << min(ans1, ans2) << endl;
    }
    
    return 0;
}