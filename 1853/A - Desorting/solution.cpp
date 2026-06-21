#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        vector <int> brr(n);
        int count = 0;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        brr = arr;
        sort(brr.begin(), brr.end());
 
        int i=0;
 
        if(arr==brr){
            int chota = INT_MAX;
            for(i=0; i<n-1; i++){
                chota = min(chota, (arr[i+1] - arr[i]));
                
            }
 
            cout << (chota/2)+1 << endl;
 
 
        }else{
            cout << count << endl;
        }
    }
 
 
    return 0;
}