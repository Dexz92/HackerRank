#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,temp;
    cin >> n;
    int arr[n];
    for(int i = 0; i != n; ++i){
        cin >> temp;
        arr[i] = temp;
    }
    vector<int> v(arr,arr+n);
    reverse(v.begin(),v.end());
    for(int a : v){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
