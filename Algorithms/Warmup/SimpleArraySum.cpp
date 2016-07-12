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
    for(int i = 0; i != n; ++i){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    auto arr_sum = accumulate(arr.begin(),arr.end(),0);
    cout << arr_sum;
    return 0;
}