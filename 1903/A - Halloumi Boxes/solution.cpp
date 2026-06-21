#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector <int> arr(n);
        vector <int> a(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            a[i] = arr[i];
        }
 
        sort(a.begin() , a.end());
 
 
        if(arr == a){
            cout << "YES" << endl;
        }else{
            if(k == 1){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }        
    }
 
    return 0;
}