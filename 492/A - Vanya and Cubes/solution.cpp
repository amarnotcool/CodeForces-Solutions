#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int sum = 0;
    int cubes = 0;
    int i=1;
    int move = 0;
 
    while(!(cubes > n)){
        sum += i;
        cubes += sum;
        i++;
        move++;
    }
 
    cout << move-1 << endl;
    
    return 0;
}