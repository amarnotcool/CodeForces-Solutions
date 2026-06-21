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
        int arr[7];
        for(int i=0; i<7; i++){
            cin >> arr[i];
        }
 
        sort(arr, arr+7);
        int sum = 0;
        for(int i=0; i<6; i++){
            sum -= arr[i];
        }
 
        sum += arr[6];
 
        cout << sum << endl;
    }
    
    return 0;
}