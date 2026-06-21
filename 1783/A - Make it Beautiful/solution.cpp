#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        int bada = INT_MIN;
        int chota = INT_MAX;
 
        for(int i=0; i<n; i++){
            bada = max(bada, arr[i]); 
            chota = min(chota, arr[i]); 
        }
 
        if(bada == chota){
            cout << "NO";
        }else{
            cout << "YES" << endl;
            cout << bada << " ";
            for(int i=0; i<n-1; i++){
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
 
    return 0;
}