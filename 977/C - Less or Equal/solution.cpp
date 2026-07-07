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
    
    int n, k;
    cin >> n >> k;
    vector <int> arr(n);
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
 
    sort(arr.begin(), arr.end());
 
    if(k==0){
        if(arr[0] > 1){
            cout << arr[0] - 1;
        }else{
            cout << -1;
        }
    }else if(k == n){
        cout << arr[n-1];
    }else{
        if(arr[k] == arr[k-1]){
            cout << -1;
        }else{
            cout << arr[k-1];
        }
    }
    
    return 0;
}