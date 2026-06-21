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
 
        bool notfound = true;
 
        for(int i=1; i<n-1; i++){
            if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
                notfound = false;
                cout << "YES" << endl;
                cout << i << " " << i+1 << " " << i+2 << endl;
                break;
            }
        }
 
        if(notfound){
            cout << "NO" << endl;
        }
    }
    return 0;
}