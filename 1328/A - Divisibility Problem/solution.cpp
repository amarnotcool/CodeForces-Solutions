#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    while(n--){
        int a, b;
        cin >> a >> b;
 
        if((a%b)!=0){
            int rem = a/b;
            rem += 1;
            cout << (b*rem) - a << endl;
        }else{
            cout << 0 << endl;
        }
    }
 
    return 0;
}