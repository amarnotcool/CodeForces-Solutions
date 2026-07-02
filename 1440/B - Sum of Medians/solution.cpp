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
        int n, k;
        cin >> n >> k;
        vector <int> arr(n*k);
 
        for(int i=0; i<n*k; i++){
            cin >> arr[i];
        }
 
        int m = n - (n+1)/2;
        int index = (n*k) - m - 1;
 
        int ans = 0;
        for(int i=0; i<k; i++){
            ans += arr[index];
            index -= m+1;
        }
 
        cout << ans << endl;
    }
    
    return 0;
}