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
        vector <int> arr;
 
        for(int i=1; i<=n; i++){
            arr.push_back(i);
        }
        
        for(int i=2; i<=n; i++){
            arr.push_back(i);
        }
        arr.push_back(1);
        
        for(int i=2; i<=n; i++){
            arr.push_back(i);
        }
        arr.push_back(1);
        
        for(int i=1; i<=n; i++){
            arr.push_back(i);
        }
 
        for(auto a:arr){
            cout << a << " ";
        }
 
        cout << endl;
    }
    
    return 0;
}