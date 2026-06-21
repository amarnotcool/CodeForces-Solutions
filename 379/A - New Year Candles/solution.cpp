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
    
    int a,b;
    cin >> a >> b;
 
    int sum = a;
    int num = a;
    int rem = 0;
 
    while(num > 0){
        num += rem;
        rem = num % b;
        num = num / b;
        sum += num;
    }
 
    cout << sum << endl;
 
 
    return 0;
}