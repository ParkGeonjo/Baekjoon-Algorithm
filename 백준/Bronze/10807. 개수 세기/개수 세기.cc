#include <iostream>
using namespace std;

int main() {
    int n, a[100], f, count = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> a[i];
    
    cin >> f;
    
    for(int i = 0; i < n; i++) if(a[i] == f) count++;
    
    cout << count;
}