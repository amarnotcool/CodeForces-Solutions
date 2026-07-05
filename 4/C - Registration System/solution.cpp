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
 
    map<string, int> m;
 
    while(t--){
        string s;
        cin >> s;
 
        if(m.find(s) == m.end()){
            cout << "OK" << endl;
            m[s] = 1;
        }else{
            cout << s << m[s] << endl;
            m[s]++;
        }
    }
    
    return 0;
}