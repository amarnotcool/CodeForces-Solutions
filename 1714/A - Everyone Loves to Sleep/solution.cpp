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
        int n, h, m;
        cin >> n >> h >> m;
        int sleep = h*60 + m;
        vector <int> differences;
 
        while(n--){
            int a, b;
            cin >> a >> b;
 
            int alarm = a*60 + b;
 
            int diff = -1;
 
            if(alarm >= sleep){
                diff = alarm - sleep;
            }else{
                diff = alarm + (24*60 - sleep);
            }
            
            differences.push_back(diff);
        }
 
        sort(differences.begin(), differences.end());
 
        int c = differences[0]/60;
        int d = differences[0]%60;
 
        cout << c << " " << d << endl;
    }
    
    return 0;
}