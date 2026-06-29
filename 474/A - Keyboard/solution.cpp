//474A - Keyboard
 
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
    
    char c;
    cin >> c;
    string s;
    cin >> s;
 
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
 
 
    for(char a: s){
        int p = keyboard.find(a);
        
        if(c == 'R'){
            cout << keyboard[p-1];
        }else{
            cout << keyboard[p+1];
        }
    }
    
    return 0;
}