#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long T,output;
    long B,W,X,Y,Z;
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> B;
        cin >> W;
        cin >> X;
        cin >> Y;
        cin >> Z;
        if(X+Z < Y){
            Y = X + Z;
        }
        if(Y+Z < X){
            X = Y + Z;
        }
        output = B*X + W*Y;
        cout << output << endl;
        
    }
    return 0;
}