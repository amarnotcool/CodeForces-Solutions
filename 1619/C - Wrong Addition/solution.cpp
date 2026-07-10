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
        int a, s;
        cin >> a >> s;
        string b = "";
 
        bool imposs = false;
 
         while(a>0){
            int rem = a % 10;
            a = a/10;
 
            
            if(s == 0){
                imposs = true;
                break;
            }
 
            int num1 = s%10;
         
            int num2 = s%100;
 
            if(num1 >= rem){
                b.push_back((num1 - rem) + '0');
                s = s/10;
            }else{
                if(num2 < 10 || num2 > 18){
                    imposs = true;
                    break;
                }
 
                int v = num2 - rem;
 
                if(v > 9){
                    imposs = true;
                    break;
                }
                b.push_back(v + '0');
                s = s/100;
            }
        }
 
        while(s>0){
            b.push_back((s%10) + '0');
            s /= 10;
        }
 
        reverse(b.begin(), b.end());
 
        while(b.size() > 1 && b[0] == '0'){
            b.erase(b.begin());     
        }
 
        if(imposs){
            cout << -1 << '
';
            continue;
        }else{
            cout << b << endl;
        }
 
    }
    
    return 0;
}