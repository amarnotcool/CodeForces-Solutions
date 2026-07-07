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
        int n, c;
        cin >> n >> c;
        vector <int> arr;
 
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
 
            arr.push_back(x+i+1);
        }
 
        sort(arr.begin(), arr.end());
 
        int count = 0;
        int a = 0;
 
        for(int i=0; i<n; i++){
            if((a+arr[i])<=c){
                a += arr[i];
                count++;
            }else{
                break;
            }
        }
 
        cout << count << endl;
    }
    
    return 0;
}