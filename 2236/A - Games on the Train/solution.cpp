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
        vector <int> arr(n);
 
        int bada = INT_MIN;
        int chota = INT_MAX;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
            bada = max(bada, arr[i]);
            chota = min(chota, arr[i]);
        }
 
        cout << (bada+1) - chota << endl;
 
 
    }
    
    return 0;
}