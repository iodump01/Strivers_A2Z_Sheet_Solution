// https://practice.geeksforgeeks.org/problems/right-triangle/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

// Input
// 5

// Output
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5 