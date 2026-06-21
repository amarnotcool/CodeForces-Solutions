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
 
        int chota = INT_MAX;
 
        for(int i=0; i<n-1; i++){
            chota = min(chota, arr[i]);
            if(arr[i+1] > arr[i]){
                arr[i+1] = chota;
            }
        }
 
        int sum = 0;
 
        for(int x: arr){
            sum += x;
        }
 
        cout << sum << endl;
 
    }
    
    return 0;
}