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
    
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
 
    if(x1 == x2){
        int diff = abs(y1-y2);
        cout << x1+diff << " " << y1 << " " << x2+diff << " " << y2;
    }else if(y1 == y2){
        int diff = abs(x1-x2);
        cout << x1 << " " << y1+diff << " " << x2 << " " << y2+diff;
    }else if(abs(x1-x2) == abs(y1-y2)){
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }else{
        cout << -1;
    }
    
    return 0;
}