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
    
    int current = 1;
    int answer = 1;
    int previous = -1;
 
    while(t--){
        int h, m;
        cin >> h >> m;
 
        int time = h*60 + m;
        
        if(time == previous){
            current++;
            answer = max(answer, current);
        }else{
            current = 1;
        }
 
        previous = time;
 
    }
 
    cout << answer << endl;
 
    return 0;
}