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
        int n,q;
        cin >> n >> q;
 
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        int y = 31;
 
        while(q--){
            int x;
            cin >> x;
 
            int p = pow(2,x);
            int q = pow(2,x-1);
 
            if(x >= y){
                continue;
            }
            
            y = x;
            
            for(int i=0; i<n; i++){
                if(arr[i]%p==0){
                    arr[i] += q;
                }
            }   
        }
 
        for(auto a: arr){
            cout << a << " ";
        }
 
        cout << endl;
    }
    
    return 0;
}