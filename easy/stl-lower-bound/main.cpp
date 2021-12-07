// https://www.hackerrank.com/challenges/cpp-lower-bound/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i < n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    } 
    
    cin >> n;
    for(int i=0; i < n; i++){
        int query;
        cin >> query;
        vector<int>::iterator index = lower_bound(v.begin(), v.end(), query);
        if(*index == query)
            cout << "Yes " << index - v.begin() + 1 ;
        else
        {
            cout << "No " << index - v.begin() + 1;
        }
        cout << endl;
    }
    
    return 0;
}
