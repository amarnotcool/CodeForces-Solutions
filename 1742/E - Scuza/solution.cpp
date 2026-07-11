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
        int n, q;
        cin >> n >> q;
        vector <int> arr(n);
        
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        vector <int> pref(n);
        pref[0] = arr[0];
 
        for(int i=1; i<n; i++){
            pref[i] = pref[i-1] + arr[i];
        }
 
        vector <int> maxm(n);
        maxm[0] = arr[0];
 
        for(int i=1; i<n; i++){
            maxm[i] = max(maxm[i-1], arr[i]);
        }
 
        while(q--){
            int x;
            cin >> x;
 
            int i = upper_bound(maxm.begin(), maxm.end(), x) - maxm.begin() - 1;
 
            if(i < 0){
                cout << 0 << " ";
            }else{
                cout << pref[i] << " ";
            }
        }
 
        cout << endl;
    }
    
    return 0;
}