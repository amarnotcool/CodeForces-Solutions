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
        int total2s=0;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
 
            if(arr[i]==2){
                total2s++;
            }
        }
 
        bool found = false;
 
        int left2s = 0;
        int right2s;
 
        for(int i=0; i<n-1; i++){
            if(arr[i]==2){
                left2s++;
            }
            right2s = total2s - left2s;
 
            if(left2s == right2s){
                found = true;
                cout << i+1 << endl;
                break;
            }
        }
 
        if(found == false){
            cout << -1 << endl;
        }
    }
}