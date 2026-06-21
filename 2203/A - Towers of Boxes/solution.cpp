#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n, m, d;
        cin >> n >> m >> d;
        int count = 0;
        
        while(n>0){
            int weight = m;
            n--;
            count++;
            while(weight<=d){
                n--;
               weight += m;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}