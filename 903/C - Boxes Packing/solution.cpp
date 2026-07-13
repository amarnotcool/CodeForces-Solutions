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
    
    int n;
    cin >> n;
    vector <int> arr(n);
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
 
    sort(arr.begin(), arr.end());
 
    int ans = 1;;
    int count = 1;
 
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1]){
            count++;
        }else{
            ans = max(ans, count);
            count = 1;
        }
    }
 
    ans = max(ans, count);
 
    cout << ans << endl;
    
    return 0;
}