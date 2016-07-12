#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j;
    cin >> n;
    string values[n];
    for(i = 0; i < n; i++){
       cin >> values[i];
        
    }
     
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == 0 || j == 0 || i == n-1 || j == n-1 ){
                   cout << values[i][j];
            }else if(values[i][j] > values[i][j-1] && values[i][j] > values[i][j+1] && values[i][j] >values[i-1][j] && values[i][j] > values[i+1][j]){
                cout << "X";
            }else{
                cout << values[i][j];
            }
        }
        cout << endl;
    }
    
    
  
    return 0;
}