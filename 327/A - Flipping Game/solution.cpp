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
    
    int n;
    cin >> n;
 
    int ones = 0;
    int curr = 0;
    int best = INT_MIN;
 
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
 
        if(x == 1){
            ones++;
            x = -1;
        }else{
            x = 1;
        }
 
        curr += x;
        best = max(best, curr);
 
        if(curr < 0){
            curr = 0;
        }
    }
 
    cout << ones + best << endl;
 
    return 0;
}
        