#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,value,min_value,amount_of_operations,min_index;
    cin >> N;
    vector<int> list;
    bool check = false;
    for(int i = 0; i < N; ++i){
        cin >> value;
        list.push_back(value);
    }
    sort(list.begin(),list.end());
    min_index = 0;
    while(min_index < N){
        cout << (N-min_index) << endl;
        min_value = list[min_index];
        for(int i = min_index; i < N; ++i){
            list[i] = list[i] - min_value;
            if(list[i] == 0){
                min_index = i + 1;
            }
        }
    }
      
            
        
    
    return 0;
}
