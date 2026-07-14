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
 
    while(true){
        n++;
 
        int a = n % 10;
        int b = (n / 10) % 10;
        int c = (n / 100) % 10;
        int d = (n / 1000) % 10;
        
        if (a != b && a != c && a != d &&
            b != c && b != d &&
            c != d)
            {
            cout << n;
            break;
        }
 
    }   
  
    return 0;
}