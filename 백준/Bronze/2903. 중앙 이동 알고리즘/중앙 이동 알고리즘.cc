#include <iostream>
using namespace std;

int main() {
    int n, l_point = 2, point;
    
    cin >> n;
    
    for(int i = 0; i <= n; i++) {
        point = l_point * l_point;
        l_point += l_point - 1;
    }
    cout << point << endl;
}