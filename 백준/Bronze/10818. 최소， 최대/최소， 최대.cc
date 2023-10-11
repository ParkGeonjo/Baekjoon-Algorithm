#include <iostream>
using namespace std;

int main() {
    int n, a[1000000], min = 1000000, max = -1000000;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        if(min > a[i]) min = a[i];
        if(max < a[i]) max = a[i];
    }
    cout << min << " " << max;
}