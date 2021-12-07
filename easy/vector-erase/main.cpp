// https://www.hackerrank.com/challenges/vector-erase/problem

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
    int p1, p2;
    cin >> p1;
    v.erase(v.begin()+p1-1);
    
    cin >> p1 >> p2;
    v.erase(v.begin()+p1-1, v.begin()+p2-1);
    
    cout << v.size() << endl;
    for(int num: v){
        cout << num << " ";
    }
    return 0;
}
