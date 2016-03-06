#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b = "";
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    string temp_a = a;
    string temp_b = b;
    a[0] = b[0];
    b[0] = temp_a[0];
    cout << a << " " << b << endl;
    return 0;
}
