// https://www.hackerrank.com/challenges/cpp-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> m;
    int n;
    cin >> n;
    for(int i=0; i < n; i++){
        int queryNo, marks;
        string name;
        cin >> queryNo >> name;
        switch (queryNo) {
            case 1:
                cin >> marks;
                m[name] += marks; 
                break;
            case 2:
                m.erase(name);
                break;
            case 3:
                cout << m[name] << endl;
                break;
        }
    }   
    return 0;
}



