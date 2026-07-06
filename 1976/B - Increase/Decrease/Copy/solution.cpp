#include<bits/stdc++.h>
using namespace std;
#define int long long
    
void fast_io() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);
std::cout.tie(NULL);
}
    
signed main(){
    fast_io();
    
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        vector <int> brr(n+1);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        for(int i=0; i<n+1; i++){
            cin >> brr[i];
        }
 
        int count = 0;
        int diff = INT_MAX;
 
        for(int i=0; i<n; i++){
            count += abs(arr[i]-brr[i]);
               
            if (min(arr[i], brr[i]) <= brr[n] && brr[n] <= max(arr[i], brr[i])) {
                diff = 0;
            }
            else {
                diff = min(diff, min(abs(arr[i] - brr[n]), abs(brr[i] - brr[n])));
            }
        }
 
        count += (diff + 1);
 
        cout << count << endl;
    }
    
    return 0;
}
    