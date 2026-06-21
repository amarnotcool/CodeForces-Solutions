#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int x = 0;
 
    while(n--){
        string operation;
        cin >> operation;
 
        if(operation == "X++"){
            x++;
        }
 
        if(operation == "++X"){
            ++x;
        }
 
        if(operation == "X--" ){
            x--;
        }
 
        if(operation == "--X" ){
            --x;
        }
    }
 
    cout << x;
}