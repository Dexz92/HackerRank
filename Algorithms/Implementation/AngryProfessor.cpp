#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,N,K,value;
    int counter = 0;
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> N;
        cin >> K;
        for(int j = 0; j < N; ++j){
            cin >> value;
            if(value <= 0){
                counter++;
            }
        }
        if(counter < K){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        counter = 0;
    }
    return 0;
}
