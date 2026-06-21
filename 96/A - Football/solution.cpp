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
    
    string t;
    cin >> t;
 
    int count = 1;
 
    for(int i=1; i<t.length(); i++){
        if(t[i]==t[i-1]){
            count++;
        }else{
            count = 1;
        }
 
        if(count >= 7){
            cout << "YES" << endl;
            return 0;
        }
        
    }
    
    cout << "NO" << endl;
}