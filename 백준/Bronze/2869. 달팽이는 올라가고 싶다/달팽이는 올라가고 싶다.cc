#include <iostream>
using namespace std;

int main() {
    int a, b, v, day;
    
    cin >> a >> b >> v;
    
    day = (v-b)/(a-b);
    
    if((v-b)%(a-b) != 0) day++;
    
    cout << day;
}