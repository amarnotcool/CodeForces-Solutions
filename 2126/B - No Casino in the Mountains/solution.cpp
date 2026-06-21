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
        int n,k;
        cin >> n >> k;
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        int total = 0;
        int count = 0;
 
        bool rest = false;
 
        for(int i=0 ; i<n; i++){
 
            if(rest){
                rest = false;
                continue;
            }
 
            if(arr[i]==0){
                count++;
                if(count == k){
                    total++;
                    count = 0;
                    rest = true;
                }
            }else{
                count = 0;
            }
        }
 
        cout << total << endl;
 
    }
    
    return 0;
}