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
    vector<int> v(n), u(n);
 
    for(int i=0; i<n; i++){
        cin >> v[i];
        u[i] = v[i];
    }
 
    sort(u.begin(), u.end());
 
    vector<int> pref1(n+1, 0), pref2(n+1, 0);
 
    for(int i=1; i<=n; i++){
        pref1[i] = pref1[i-1] + v[i-1];
        pref2[i] = pref2[i-1] + u[i-1];
    }
 
    int m;
    cin >> m;
    
    while(m--){
        int a, b, c;
        cin >> a >> b >> c;
 
        if(a == 1){
            cout << pref1[c] - pref1[b-1] << endl;
        }else{
            cout << pref2[c] - pref2[b-1] << endl;
        }
        
    }
    
    return 0;
}