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
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    } 
 
    sort(arr.begin(), arr.end());
 
    for(int i=0; i<=3000; i++){
        if(arr[i] != i+1){
            cout << i+1 << endl;
            return 0;
        }
    }
    
    return 0;
}