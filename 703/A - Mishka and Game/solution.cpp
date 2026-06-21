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
    
    int mishka = 0;
    int chris = 0;
 
    int n;
    cin >> n;
 
    while(n--){
        int m,c;
        cin >> m >> c;
 
        if(m>c){
            mishka++;
        }else if(c>m){
            chris++;
        }
    }
 
    if(mishka > chris){
        cout << "Mishka" << endl;
    }else if(mishka == chris){
        cout << "Friendship is magic!^^" << endl;
    }else{
        cout << "Chris" << endl;
    }
    
    
    return 0;
}