#include<bits/stdc++.h>
using namespace std;
 
void check_even(int w){
    if(w % 2 ==0 && w != 2){
        cout << "YES";
    }else{
        cout << "NO"; 
    }
}
 
int main(){
    int w;
    cin >> w;
    check_even(w);
    
    return 0;
}