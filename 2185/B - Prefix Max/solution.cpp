#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector <int> arr(n);
        int bada = INT_MIN;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
            bada = max(bada, arr[i]);
        }
 
        cout << bada*n << endl;
    }
    return 0;
}