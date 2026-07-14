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
    
    string s;
    cin >> s;
 
    int count = 0;
    
    for(char c: s){
        if(c == '4' || c == '7'){
            count++;
        }
    }
 
    if(count == 4 || count == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}