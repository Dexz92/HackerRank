#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int T,N,digit,temp;
    int counter = 0;
    cin >> T;
    for(int i = 0; i < T; ++i){
          cin >> N;
          temp = N;
        do{
            digit = N % 10;
            N = N / 10;
            if(digit != 0){
                if(temp % digit == 0){
                    counter++;
                }
            }
            
        }while(N > 0);
            cout << counter << endl;
            counter = 0;
    }
    return 0;
}
