// https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int> s;
    int n;
    cin >> n;
    for(int i=0; i < n; i++){
        int queryNo, query;
        cin >> queryNo >> query;
        switch (queryNo) {
            case 1:
                s.insert(query);
                break;
            case 2:
                s.erase(query);
                break;
            case 3:
                cout << (s.find(query) != s.end() ? "Yes" : "No") << endl;
        }
    }
    return 0;
}



