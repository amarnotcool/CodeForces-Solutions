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
        int n,x ;
        cin >> n >> x;
 
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        sort(arr.rbegin(), arr.rend());
 
        int sum = 0;
        int ans = 0;
 
        for(int i=0; i<n; i++){
            sum += arr[i];
 
            if(sum >= (i+1) * x){
                ans = i+1;
            }
        }
 
        cout << ans << endl;
    }
    
    return 0;
}