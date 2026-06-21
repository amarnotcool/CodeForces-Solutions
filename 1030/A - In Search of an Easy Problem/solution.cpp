#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int arr[n];
    int count=0;
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
 
    for(int i=0; i<n; i++){
        count += arr[i];
    }
 
    if(count!=0){
        cout << "HARD";
    }else{
        cout << "EASY";
    }
 
    return 0;
}