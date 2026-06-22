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
    
    int n,m;
    cin >> n >> m;
 
    int a = min(n,m);
 
    if(a%2==0){
        cout << "Malvika" << endl;
    }else{
        cout << "Akshat" << endl;
    }
    
    return 0;
}