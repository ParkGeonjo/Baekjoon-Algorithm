#include <iostream>
using namespace std;

int main() {
    int a[9], max = 0, index = 0;
    
    for(int i = 0; i < 9; i++) {
        cin >> a[i];
        if(max <= a[i]) {
            max = a[i];
            index = i;
        }
    }
    
    cout << max << "\n" << index+1;
}