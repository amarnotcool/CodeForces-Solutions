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
 
        int a = 1;
        int b = n-1;
 
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                a = n/i;
                b = n-a;
                break;
            }
        }
 
        cout << a << " " << b << endl;
    }
    
    return 0;
}