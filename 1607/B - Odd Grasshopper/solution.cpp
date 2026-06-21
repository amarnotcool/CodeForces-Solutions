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
        int x, n;
        cin >> x >> n;
 
        int rem = n%4;
        int pos = x;
        int finalMoves = 0;
 
        if(rem % 4 == 0){
            finalMoves = 0;
        }else if(rem % 4 == 1){
            finalMoves = -n;
        }else if(rem % 4 == 2){
            finalMoves = 1;
        }else{
            finalMoves = n+1;
        }
 
        if(pos % 2 == 0){
            pos += finalMoves;   
        }else{
            pos -= finalMoves;
        }
 
        cout << pos << endl;
    }
    
    return 0;
}