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
 
        bool all0 = true;
 
        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                all0 = false;
                break;
            }
        }
 
        if(all0 == true){
            cout << 0 << endl;
            continue;
        }
 
        if(n==1){
            if(arr[0]!=0){
                cout << 1 << endl;
                continue;
            }else{
                cout << 0 << endl;
                continue;
            }
        }
 
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0){
                continue;
            }
 
            if(arr[i] != 0) {
                count++;
            
            while(i < n && arr[i] != 0){
                i++;
            }
            }
        }
 
        if(count >= 2){
            cout << 2 << endl;
            continue;
        }
 
        cout << count << endl;
    }
    return 0;
}