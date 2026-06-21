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
    vector <int> arr(t);
 
    int totalSum = 0;
 
    for(int i=0; i<t; i++){
        cin >> arr[i];
        totalSum += arr[i];
    }
 
    sort(arr.rbegin(), arr.rend());
 
    int count = 0;
    int yourSum = 0;
    int twinSum = -1;
 
    for(int i=0; i<t; i++){
        twinSum = totalSum - yourSum;
        if(yourSum <= twinSum){
            yourSum += arr[i];
            count++;
        }
    }
 
    cout << count << endl;
    
    return 0;
}