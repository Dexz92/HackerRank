#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countPalindromes(const string& s){
    int number_of_operations = 0;
    int middle = s.length() / 2;
    int last = s.length();
    for(int i = 0; i < middle; ++i){
        int diff = abs(int(s.at(i))- int(s.at(last-i-1)));
        number_of_operations += diff;
    }
    return number_of_operations;
}

int main() {
    int T;
    cin >> T;
    string s;
    int number_of_operations = 0;
    for(int i = 0; i < T; ++i){
        cin >> s;
        cout << countPalindromes(s) << endl;
    }
    return 0;
}
