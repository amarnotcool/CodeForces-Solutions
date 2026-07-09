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
        int n, k;
        cin >> n >> k;
        vector <int> arr(n);
 
        int oddCount = 0;
        int evenCount = 0;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
 
            if(arr[i] % 2 == 1){
                oddCount++;
            }else{
                evenCount++;
            }   
        }
 
        bool poss = false;
 
        for(int odd = 1; odd <= min(k, oddCount); odd+=2){\
            int even = k - odd;
 
            if(even <= evenCount){
                poss = true;
                break;
            }
        }
 
        if(!poss){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
    
    return 0;
}