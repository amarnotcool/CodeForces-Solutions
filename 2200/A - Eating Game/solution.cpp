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
 
        for(int i=0; i<n; i++){
            bada = max(bada, arr[i]);
        }
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == bada){
                count++;
            }
        }
 
        cout << count << endl;
    }
 
    return 0;
}