#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    vector<int> width;
    int N,T,value,i,j,output;
    cin >> N;
    cin >> T;
    int countBike,countCar,countAll = 0;
    for(int k = 0; k < N; ++k){
        cin >> value;
        width.push_back(value);
    }
    
    for(int k = 0; k < T; ++k){
        cin >> i;
        cin >> j;
        for(int x = i; x <= j; ++x){
            if(width[x] == 1){
                countBike++;
            }else if(width[x] == 2){
                countCar++;
            }else if(width[x] == 3){
                countAll++;
            }
        }
        if((j-i)+1 == countAll && countBike == 0 && countCar == 0){
            output = 3;
        }else if(countCar > 0 && countBike == 0 ){
            output = 2;
        }else{
            output = 1;
        }
        
        cout << output << endl;

        countBike = 0;
        countCar = 0;
        countAll = 0;
        output = 0;
    }
    return 0;
}
