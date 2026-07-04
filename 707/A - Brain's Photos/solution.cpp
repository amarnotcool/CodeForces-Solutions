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
    
    int x, y;
    cin >> x >> y;
 
    bool poss = true;
 
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            char a;
            cin >> a;
 
            if(a == 'M' || a == 'C' || a == 'Y'){
                poss = false;
            }
        }
    }
 
    if(!poss){
        cout << "#Color" << endl;
    }else{
        cout << "#Black&White" << endl;
    }
    
    return 0;
}