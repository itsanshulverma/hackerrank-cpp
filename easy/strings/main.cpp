// https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string first, second;
    cin >> first >> second;
    int a, b;
    a = first.size();
    b = second.size();
    cout << a << " " << b << endl;
    cout << first << second << endl;
    char temp = first[0];
    first[0] = second[0];
    second[0] = temp;
    cout << first << " " << second;
    return 0;
}
