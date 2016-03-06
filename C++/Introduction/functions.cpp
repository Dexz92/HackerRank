#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c , int d){
    vector<int> v{a,b,c,d};
    auto top = max_element(v.begin(),v.end());
    return *top;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
