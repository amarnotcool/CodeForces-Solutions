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
 
        sort(arr.begin(), arr.end());
 
        bool mila = false;
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                mila = true;
                cout << "NO" << endl;
                break;
            }
        }
 
        if(!mila){
            cout << "YES" << endl;
        }
    }
    
    return 0;
}