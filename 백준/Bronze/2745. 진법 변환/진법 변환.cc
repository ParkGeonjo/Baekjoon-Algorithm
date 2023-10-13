#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int B, index, x, ans = 0;
    string N;
    
    cin >> N >> B;
    
    for(int i = 0; i < N.length(); i++) {
        index = N.length() - (i + 1);
        if(N[index] >= '0' && N[index] <= '9') x = N[index] - '0';
        else x = N[index] - 55;
        
        ans += x * pow(B, i);
    }
    cout << ans;
}