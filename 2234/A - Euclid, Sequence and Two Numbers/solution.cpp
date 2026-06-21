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
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        sort(arr.rbegin(), arr.rend());
 
        bool poss = true;
 
        if (n == 2) {
            cout << arr[0] << " " << arr[1] << '
';
            continue;
        }
 
        for(int i=0; i<n-2; i++){
            if(arr[i]%arr[i+1] != arr[i+2]){
                poss = false;
                break;
            }
        }
 
        if(!poss){
            cout << -1 << endl;
        }else{
            cout << arr[0] << " " << arr[1] << endl;
        }
    }
    
    return 0;
}