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
    
    int n, x;
    cin >> n >> x;
    int sum = x;
    int count = 0;
 
    while(n--){
        char c;
        int k;
        cin >> c >> k;
 
        if(c == '+'){
            sum += k;
        }else{
            if(sum >= k){
                sum -= k;
            }else{
                count++;            
            }
        }
    }
 
    cout << sum << " " << count << endl;
    
    return 0;
}