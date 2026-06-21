#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        string a;
        string b;
        cin >> a >> b;
        
        string temp = a;
 
        a[0] = b[0];
        b[0] = temp[0];
 
        cout << a << " " << b << endl;
 
    }
 
    return 0;
}