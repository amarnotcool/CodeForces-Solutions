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
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        int chota = *min_element(arr.begin(), arr.end());
 
        if(arr[0] == chota){
            cout << "Bob" << endl;
        }else{
            cout << "Alice" << endl;
        }
 
    }
    
    return 0;
}