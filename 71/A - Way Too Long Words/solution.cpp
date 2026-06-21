#include<bits/stdc++.h>
using namespace std;
 
void counting_strings(string input){
    int n = input.size();
    if(n>10){
        cout << input[0] << (n-2) << input[n-1]<<endl;
    }else{
        cout << input<<endl;
    }
    
 
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
    string input;
    cin >> input;
    counting_strings(input);
    }
    
}