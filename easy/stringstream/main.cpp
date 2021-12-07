// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> arr;
    stringstream ss(str);
    char ch;
    int temp;
    ss >> temp;
    arr.push_back(temp);
    while(true){
        if(ss >> ch){
            ss >> temp;
            arr.push_back(temp);  
        } else break;  
    }
    
    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
