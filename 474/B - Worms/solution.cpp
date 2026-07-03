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
    
    int n;
    cin >> n;
    vector <int> arr(n);
 
    cin >> arr[0];
 
    for(int i=1; i<n; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
 
    int m;
    cin >> m;
 
    while(m--){
        int x;
        cin >> x;
 
        int ans = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
 
        cout << ans+1 << endl;
    }
    
    return 0;
}