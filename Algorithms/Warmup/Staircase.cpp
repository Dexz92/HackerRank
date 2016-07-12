#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
   
    int counter = 0;
    int spaces = n-1;
    while(counter != n){
      for(int i = 0; i != spaces; ++i){
          cout << " ";
      }
      
      for(int i = n; i != spaces; --i){
          cout << "#";
      }
        --spaces;
      cout << endl;
      ++counter;
    }
    
    return 0;
}