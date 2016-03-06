#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int n,a,b = 0;
    cin >> n;
    set<int>con;
    for(int i = 0; i != n; ++i){
       cin >> a >> b;
       if(a == 1){
           con.insert(b);
       }else if(a == 2){
           con.erase(b);
       }else{
           set<int>::iterator it = con.find(b);
           if(it != con.end()){
               cout << "Yes" << endl;
           }else{
               cout << "No" << endl;
           }
       }
    }
    return 0;
}
