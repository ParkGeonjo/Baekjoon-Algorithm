#include <iostream>
using namespace std;

int main() {
    int a[9][9], max = 0, row, col;
    
    for(int i = 0; i < 9; i++) for(int j = 0; j < 9; j++) cin >> a[i][j];
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if(a[i][j] >= max) {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << max << endl << row + 1 << " " << col + 1;
}