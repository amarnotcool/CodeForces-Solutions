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
        int x, y;
        cin >> x >> y;
 
        if(x % y == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}