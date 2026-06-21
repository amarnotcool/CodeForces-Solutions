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
 
        sort(arr.begin(), arr.end());
 
        if(arr[n-1]==67){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
 
        
        // bool onePresent = false;
        // bool sixtySevenPresent = false;
        // for(int i=0; i<n; i++){
        //     if(arr[i] == 1){
        //         onePresent = true;
        //     }
 
        //     if(arr[i] == 67){
        //         sixtySevenPresent = true;
        //     }
        // }
 
        // if(onePresent==true && sixtySevenPresent==true){
        //     cout << "YES" << endl;
        // }else{
        //     cout << "NO" << endl;
        // }
    }
 
    return 0;
}