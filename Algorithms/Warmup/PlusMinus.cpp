#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    vector<int> result(3);
    fill(result.begin(),result.end(),0);
    for(auto value : arr){
        if(value < 0){
            ++result[0];
        }else if(value == 0){
            ++result[1];
        }else{
            ++result[2];
        }
    }
    
    double negative_count = (double)result[0] / n;
    double zero_count = (double)result[1] / n;
    double positive_count = (double)result[2] / n;
    cout << positive_count << endl;
    cout << negative_count << endl;
    cout << zero_count << endl;
    return 0;
}