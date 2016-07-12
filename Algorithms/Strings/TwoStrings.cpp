#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string value1,value2;
    int T;
    cin >> T;
    vector<char> list;
    bool check = false;
    size_t found;
    for(int i = 0; i < T; ++i){
        cin >> value1;
        cin >> value2;
        for(int j = 0; j < value1.size(); ++j){
            found = value2.find(value1[j]);
            if(found != -1){
                check = true;
            }
        }
        if(check){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        check = false;
    }  
    return 0;
}
