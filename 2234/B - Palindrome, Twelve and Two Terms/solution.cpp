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
    cin >>t;
 
    while(t--){
        int n;
        cin >> n;
 
        int rem = n%12;
        int a = -1;
 
        if(rem>=0 && rem<=9){
            a = rem;
        }else if(rem == 10){
            a = 22;
        }else if(rem == 11){
            a = 11;
        }
 
        if(n>=a){
            cout << a << " " << n-a << endl;
        }else{
            cout << -1 << endl;
        }
    }
    
    return 0;
}