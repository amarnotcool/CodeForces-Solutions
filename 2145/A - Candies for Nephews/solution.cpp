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
 
        int rem = n%3;
 
        if(rem==0){
            cout << rem << endl;
        }else{
            cout << 3-rem << endl;
        }
        continue;
    }
    
    return 0;
}