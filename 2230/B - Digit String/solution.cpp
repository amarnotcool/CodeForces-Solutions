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
        string s;
        cin >> s;   
 
        int n = s.length();
 
        if(n==0){
            cout << 0 << endl;
        }
 
        int count4s = 0;
        int odds = 0;
 
        int extra = 0;
 
        for(int i=0; i<n; i++){
            if(s[i]=='4'){
                count4s++;
            }else if(s[i]=='3' || s[i]=='1'){
                odds++;
            }else if(s[i]=='2'){
                extra = min(odds, extra + 1);
            }
        }
 
        int total = count4s + extra;
 
        cout << total << endl;
        
    }
    
    return 0;
}