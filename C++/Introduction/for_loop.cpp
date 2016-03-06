#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
    map<int,string> m;
    m.insert(make_pair(1,"one"));
    m.insert(make_pair(2,"two"));
    m.insert(make_pair(3,"three"));
    m.insert(make_pair(4,"four"));
    m.insert(make_pair(5,"five"));
    m.insert(make_pair(6,"six"));
    m.insert(make_pair(7,"seven"));
    m.insert(make_pair(8,"eight"));
    m.insert(make_pair(9,"nine"));

    int a,b = 0;
    cin >> a;
    cin >> b;
    for(int i = a; i <= b; ++i){
        if(i <= 9){
            cout << m.at(i) << endl;;
        }else if( i % 2 != 0){
            cout << "odd" << endl;
        }else if( i % 2 == 0){
            cout << "even" << endl;
        }
    }
    return 0;
}
