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
 
    vector <int> pref(n+1, 0);
 
    pref[0] = 0;
 
    for(int i=0; i<n; i++){
        pref[i+1] = pref[i] + arr[i];
    }
 
    int ans = INT_MAX;
    int index = -1;
 
    for(int i=0; i<n-k+1; i++){
        int sum = pref[i+k] - pref[i];
 
        if(sum < ans){
            ans = sum;
            index = i;
        }
    }
    
    cout << index + 1 << endl;
 
    return 0;
}