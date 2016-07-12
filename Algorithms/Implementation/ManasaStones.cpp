#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    set<int> list;
    int T,n,a,b;
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> n;
        cin >> a;
        cin >> b;
        if(n == 1){
            cout << 0 << endl;
        }else{
            list.clear();
            for(int i = 0; i <= n-1; ++i){
                int number = a * i + b * (n - 1 - i);
                list.insert(number);
            }
            for(set<int>:: iterator it = list.begin() ; it != list.end(); ++it){
                cout << *it << " ";
               
            }
             cout << endl;
        }
        
    }
    return 0;
}
