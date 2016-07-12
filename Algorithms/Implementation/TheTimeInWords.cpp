#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int hour_var,minutes_var;
    cin >> hour_var;
    cin >> minutes_var;
    map<int,string> hours;
    map<int,string> minutes;
    map<int,string>::iterator it_hour;
    map<int,string>::iterator it_min;


    
    minutes.insert(pair<int,string>(1,"one minute"));
    minutes.insert(pair<int,string>(2,"two minutes"));
    minutes.insert(pair<int,string>(3,"three minutes"));
    minutes.insert(pair<int,string>(4,"four minutes"));
    minutes.insert(pair<int,string>(5,"five minutes"));
    minutes.insert(pair<int,string>(6,"six minutes"));
    minutes.insert(pair<int,string>(7,"seven minutes"));
    minutes.insert(pair<int,string>(8,"eight minutes"));
    minutes.insert(pair<int,string>(9,"nine minutes"));
    minutes.insert(pair<int,string>(10,"ten minutes"));
    minutes.insert(pair<int,string>(11,"eleven minutes"));
    minutes.insert(pair<int,string>(12,"twelve minutes"));
    minutes.insert(pair<int,string>(13,"thirteen minutes"));
    minutes.insert(pair<int,string>(14,"fourteen minutes"));
    minutes.insert(pair<int,string>(15,"quarter"));
    minutes.insert(pair<int,string>(16,"sixteen minutes"));
    minutes.insert(pair<int,string>(17,"seventeen minutes"));
    minutes.insert(pair<int,string>(18,"eighteen minutes"));
    minutes.insert(pair<int,string>(19,"nineteen minutes"));
    minutes.insert(pair<int,string>(20,"twenty minutes"));
    minutes.insert(pair<int,string>(21,"twenty one minutes"));
    minutes.insert(pair<int,string>(22,"twenty two minutes"));
    minutes.insert(pair<int,string>(23,"twenty three minutes"));
    minutes.insert(pair<int,string>(24,"twenty four minutes"));
    minutes.insert(pair<int,string>(25,"twenty five minutes"));
    minutes.insert(pair<int,string>(26,"twenty six minutes"));
    minutes.insert(pair<int,string>(27,"twenty seven minutes"));
    minutes.insert(pair<int,string>(28,"twenty eight minutes"));
    minutes.insert(pair<int,string>(29,"twenty nine minutes"));
    minutes.insert(pair<int,string>(30,"half"));
    
    hours.insert(pair<int,string>(1,"one"));
    hours.insert(pair<int,string>(2,"two"));
    hours.insert(pair<int,string>(3,"three"));
    hours.insert(pair<int,string>(4,"four"));
    hours.insert(pair<int,string>(5,"five"));
    hours.insert(pair<int,string>(6,"six"));
    hours.insert(pair<int,string>(7,"seven"));
    hours.insert(pair<int,string>(8,"eight"));
    hours.insert(pair<int,string>(9,"nine"));
    hours.insert(pair<int,string>(10,"ten"));
    hours.insert(pair<int,string>(11,"eleven"));
    hours.insert(pair<int,string>(12,"twelve"));
    hours.insert(pair<int,string>(12,"thirteen"));
    
    if(minutes_var == 0){
        it_hour = hours.find(hour_var);
        cout << it_hour->second << " o' clock" << endl; 
    }else if(minutes_var <= 30){
        it_hour = hours.find(hour_var);
        it_min  = minutes.find(minutes_var);
        cout << it_min->second << " past " << it_hour->second << endl;
    }else{
        it_hour = hours.find(hour_var+1);
        it_min = minutes.find(60-minutes_var);
        cout << it_min->second << " to " << it_hour->second << endl;
    }




    

    return 0;
}
