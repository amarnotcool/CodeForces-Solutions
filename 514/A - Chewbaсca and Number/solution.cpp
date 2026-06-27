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
 
    for(int i=0; i<s.size(); i++){
        int d = s[i]-'0';
 
        if(i==0 && d==9){
            continue;
        }
 
        s[i] = min(d + '0', (9 - d) + '0');
    }
 
    cout << s << endl;
    
    return 0;
}