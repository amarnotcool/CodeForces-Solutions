#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
 
        int quo = n / 3;
        int rem = n % 3;
        int sum;
 
        if((3 * a) < b){
            sum = n*a;
        }else{
            if((rem * a) > b){
                sum = (quo*b) + b;
            }else{
                sum = (quo*b) + (rem*a);
            }
        }
        
        cout << sum << endl;
    }
 
    return 0;
}