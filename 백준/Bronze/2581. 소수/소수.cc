#include <iostream>
using namespace std;

int main() {
    int n, m, sum = 0, min = -1;
    bool num[10001] = { true, true, false, };
    
    cin >> m >> n;
    
    for(int i = 2; i * i <= n; i++) {
        if(num[i]) continue;
        for(int j = 2; i * j <= n; j++) num[i * j] = true;
    }
    
    for(int i = m; i <= n; i++) {
        if(!num[i]) {
            sum += i;
            if(min == -1) min = i;
        }
    }
    
    if(sum != 0) cout << sum << endl << min;
    else cout << "-1";
}