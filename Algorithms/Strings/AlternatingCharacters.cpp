#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    cin >> size;
    string toAppend = "";
    int nbrOfDeletions = 0;
    for(int i = 0; i < size; ++i){
        string temp;
        cin >> temp;
        for(int j = 1; j <= temp.size(); ++j){
            if(temp[j] == temp[j-1]){
                nbrOfDeletions++;
            }
        }
        cout << nbrOfDeletions << endl;
        nbrOfDeletions = 0;
       
    }
    
    return 0;
}
