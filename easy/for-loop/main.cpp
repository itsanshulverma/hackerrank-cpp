#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;
    for(int n = a; n <= b; n++){
        if(n >=1 && n <= 9){
            if(n == 1) cout << "one";
            if(n == 2) cout << "two";
            if(n == 3) cout << "three";
            if(n == 4) cout << "four";
            if(n == 5) cout << "five";
            if(n == 6) cout << "six";
            if(n == 7) cout << "seven";
            if(n == 8) cout << "eight";
            if(n == 9) cout << "nine";
        } else if(n > 9){
            if(n % 2 == 0) cout << "even";
            else cout << "odd";
        }
        cout << endl;
    }
    return 0;
}
