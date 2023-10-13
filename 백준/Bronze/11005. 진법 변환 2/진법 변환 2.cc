#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int x, B;
    string N;
    
    cin >> x >> B;
    
    while(x != 0) {
        if((x % B) >= 0 && (x % B) <= 9) N += (x % B) + '0';
        else N += (x % B) + 55;
        
        x /= B;
    }
    
    reverse(N.begin(), N.end());
    
    cout << N;
}