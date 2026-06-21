#include<bits/stdc++.h>
using namespace std;
#define int long long
    
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
    
signed main(){
    fast_io();
    
    int t;
    cin >> t;
 
    while(t--){
        int n, k;
        cin >> n >> k;
 
        vector <int> arr(n);
        int count = 0;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
 
            if(arr[i]==k){
                count++;
            }
        }
 
        sort(arr.begin(), arr.end());
        int nahiHai = 0;
 
        for(int i=0; i<k; i++){
            bool exists = binary_search(arr.begin(), arr.end(), i);
 
            if(!exists){
                nahiHai++;
            }
        }
        
        cout << max(count, nahiHai) << endl;
    
    }
    
    return 0;
}