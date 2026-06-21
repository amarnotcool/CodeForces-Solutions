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
        vector<int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        bool poss = true;
 
        for(int i=0; i<n-1; i++){
            if((arr[i]%2) != (arr[i+1]%2)){
                continue;
            }else{
                poss = false;
                break;
            }
        }
 
        if(poss){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}