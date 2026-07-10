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
    
    int n, q;
    cin >> n >> q;
    vector <int> arr(n);
    vector <int> last(n, 0);
 
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
 
    int timer = 0;
    int g = 0;
 
    while(q--){
        int t;
        cin >> t;
 
        int ans = -1;
 
        if(t == 1){
            int a, b;
            cin >> a >> b;
            a--;
            
            int o;
            
            if(last[a] == timer){
                o = arr[a];
            }else{
                o = g;
            }
 
                sum = sum - o + b;
                ans = sum;
 
                arr[a] = b;
                last[a] = timer;
        }else{
            int a;
            cin >> a;
 
            timer++;
            g = a;
            sum = n * a;
            ans = sum;
        }
 
        cout << ans << endl;
    }
    
    return 0;
}