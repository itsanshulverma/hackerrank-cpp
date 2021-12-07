// https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q;
    cin >> n >> q;
    int *arr[n];
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        arr[i] = new int[k];
        for(int j = 0; j < k; j++){
            cin >> arr[i][j];
        }
    } 
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
    
    return 0;
}
