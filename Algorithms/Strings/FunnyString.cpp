#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    string ord_string,reverse_string;
    cin >> T;
    bool check = true;
    for(int i = 0; i < T; ++i){
        cin >> ord_string;
        reverse_string = string(ord_string.rbegin(),ord_string.rend());
        for(int j = 1; j < ord_string.length(); ++j){
            int first = abs(ord_string.at(j) - ord_string.at(j-1));
            int second = abs(reverse_string.at(j) - reverse_string.at(j-1));
            if(first != second){
                check = false;
            }
        }
        if(check){
            cout << "Funny" << endl;
        }else{
            cout << "Not Funny" << endl;
        }
        check = true;
    }
    return 0;
}
