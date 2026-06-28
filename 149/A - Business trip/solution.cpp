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
    vector <int> months(12);
 
    for(int i=0; i<12; i++){
        cin >> months[i];
    }
 
    sort(months.rbegin(), months.rend());
 
    if(n==0){
        cout << 0 << endl;
        return 0;
    }
    
    int sum = 0;
    for(int i=0; i<12; i++){
        sum += months[i];
        
        if(sum >= n){
            cout << i+1 << endl;
            return 0;
        }
    }
 
    cout << -1 << endl;
    
    return 0;
}