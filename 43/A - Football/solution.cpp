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
 
    string x = "";
    int countx = 0;
    string y = "";
    int county = 0;
 
    bool first = true;
 
    while(n--){
        string s;
        cin >> s;
 
        if(first){
            x += s;
            countx++;
            first = false;
        }else{
            if(s == x){
                countx++;
            }else{
                y = s;
                county++;
            }
        }
    }
 
    if(countx > county){
        cout << x << endl;
    }else{
        cout << y << endl;
    }
    
    return 0;
}