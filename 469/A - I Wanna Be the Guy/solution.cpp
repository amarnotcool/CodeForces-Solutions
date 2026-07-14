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
    
    vector <bool> level(n+1, false);
 
    int p;
    cin >> p;
 
    while(p--){
        int x;
        cin >> x;
        level[x] = true;
    }
 
    int q;
    cin >> q;
 
    while(q--){
        int x;
        cin >> x;
        level[x] = true;
    }
 
    for(int i=1; i<=n; i++){
        if(!level[i]){
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
 
    cout << "I become the guy." << endl;
 
    return 0;
}