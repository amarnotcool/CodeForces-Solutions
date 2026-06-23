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
 
    vector <int> arr;
    int num = 1;
 
    while(arr.size() < 1000){
        if(num % 3 != 0 && num % 10 != 3){
            arr.push_back(num);
        }
        num++;
    }
 
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        cout << arr[n-1] << endl;
    }
    
    return 0;
}