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
        
        map<int, int> m;
 
        int ans = 0;
 
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
 
            int k = x - i;
 
            ans += m[k];
            m[k]++;
        }
 
        cout << ans << endl;
    }
    
    return 0;
}