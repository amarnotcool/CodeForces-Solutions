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
        vector <int> f;
 
        for(int i=2; i*i <= n; i++){
            if(n%i!=0){
                continue;
            }else{
                f.push_back(i);
                n /= i;
            }
 
            if(f.size()==2){
                break;
            }
        }
 
        if(n==1 || f.size()<2 || f[0]==n || f[1]==n){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            cout << f[0] << " " << f[1] << " " << n << endl;
        }
    }
    
    return 0;
}