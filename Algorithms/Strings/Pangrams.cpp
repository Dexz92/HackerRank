#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    vector<char> list;
    size_t found;
    bool check = true;
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    for(char start = 'a'; start <= 'z'; ++start){
        list.push_back(start);
    }

    for(auto character : list){
        found = s.find(character);
        if(found == string::npos){
            check = false;
        }    
    }
    if(check){
        cout << "pangram" << endl;
    }else{
        cout << "not pangram" << endl;
    }

    return 0;
}