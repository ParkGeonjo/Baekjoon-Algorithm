#include <iostream>
using namespace std;

int main() {
    int total, n, p, pn, sum = 0;
    
    cin >> total;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> p >> pn;
        sum += p*pn;
    }
    
    if(sum == total) cout << "Yes";
    else cout << "No";
}