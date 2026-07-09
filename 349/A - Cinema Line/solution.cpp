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
 
    vector <int> arr(n);
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
 
    int Note25 = 0;
    int Note50 = 0;
    int Note100 = 0;
 
    for(int i=0; i<n; i++){
        if(arr[i] == 25){
            Note25++;
        }else if(arr[i] == 50){
            if(Note25 == 0){
                cout << "NO" << endl;
                return 0;    
            }else{
                Note25--;
                Note50++;
            }
        }else{
            if(Note50 >= 1 && Note25 >= 1){
                Note50--;
                Note25--;
            }
            else if(Note25 >= 3){
                Note25 -= 3;
            }
            else{
                cout << "NO" << endl;
                return 0;
            }
 
        }
    }
 
    cout << "YES" << endl;
 
    
    return 0;
}