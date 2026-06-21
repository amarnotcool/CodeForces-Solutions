#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n,k,x;
        cin >> n >> k >> x;
 
        int totalSum = (n*(n+1))/2;
        // cout << "TOTAL SUM:" << totalSum << endl;
 
        if(x > totalSum){
            // cout << "Condition 1: " << endl;
            cout << "NO" << endl;
            continue;
        }
        
        if(x == totalSum){
            if(k == n){
                // cout << "Condition 2: " << endl;
                cout << "YES" << endl;
                continue;
            }else{
                // cout << "Condition 3: " << endl;
                cout << "NO" << endl;
                continue;
            }
        }
 
        int minSum = (k*(k+1)/2);
        int rem = n-k;
        int remSum = (rem*(rem+1)/2);
 
        if(x<totalSum){
            if(x<minSum){
                // cout << "Condition 4: " << endl;
                cout << "NO" << endl;
                continue;
            }
            
            if(x<totalSum && x>(totalSum-remSum)){
                // cout << "Condition 5: " << endl;
                cout << "NO" << endl;
                continue;
            }
 
            // cout << "Condition 5: " << endl;
            cout << "YES" << endl;
            
        }
    }
    return 0;
}