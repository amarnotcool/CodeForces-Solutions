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
        int n,x,y,z;
        cin >> n >> x >> y >> z;
        
        int lwoAI = n;
        int hwoAI = 0;
 
        while(lwoAI > 0){
            lwoAI -= (x+y);
            hwoAI++;
        }
 
        int lwAI = n;
        int hwAI = z;
 
        lwAI -= (z*x);
 
        while(lwAI > 0){
            lwAI -= (x + (10*y));
            hwAI++;
        }
 
        cout << min(hwoAI, hwAI) << endl;
        
    }
    return 0;
}