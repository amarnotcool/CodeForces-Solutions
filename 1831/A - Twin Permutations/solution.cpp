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
        
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        
        int sum = 1 + n;
        
        vector <int> v;
        
        for(int i=0; i<n; i++){
            int chahiye  = (sum - arr[i]);
            v.push_back(chahiye);
        }
        
        for(int i=0; i<n; i++){
            cout << v[i] << " ";
        }
        
        cout << endl;   
    }
 
    return 0;
}