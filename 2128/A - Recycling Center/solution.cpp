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
        int n,c;
        cin >> n >> c;
        vector <int> arr;
 
        int total=0;
 
        for(int i=0; i<n; i++){
           int x;
           cin >> x;
            
           if(x<=c){
            arr.push_back(x);
           }else{
            total++;
           }
        }
 
        int l = arr.size();
 
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        
        int count = 1;
 
        for(int i=0; i<l; i++){
            if((arr[i]*count)>c){
                total++;
            }else{
                count *= 2;
            }
        }
 
        cout << total << endl;
 
    }
    
    return 0;
}