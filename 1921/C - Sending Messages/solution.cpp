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
        int n, f, a, b;
        cin >> n >> f >> a >> b;
        vector <int> arr(n+1, 0);
 
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }
 
        int poss = true;
 
        for(int i=0; i<n; i++){
            int diff = arr[i+1] - arr[i];
            f -= min(a*diff, b);
 
            if(f <= 0){
                poss = false;
                break;
            }
        }
 
        if(poss){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}