#include <iostream>
using namespace std;

int height(int n) {
    if(n == 0){
        return 1;
    }
    int result = 1;
    for(int i = 1; i <= n; ++i){
        if(i % 2 == 1){
            result = result * 2;
        }else{
            result = result + 1;
        }
    }
    return result;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
