#include <iostream>
using namespace std;

int main() {
    double grade, sub_grade, t_grade1 = 0, t_grade2 = 0;
    string sub, g;
    
    for(int i = 0; i < 20; i++) {
        cin >> sub >> grade >> g;
        
        if(g != "P") {
            if(g[0] == 'A') sub_grade = 4;
            else if(g[0] == 'B') sub_grade = 3;
            else if(g[0] == 'C') sub_grade = 2;
            else if(g[0] == 'D') sub_grade = 1;
            else sub_grade = 0;
            
            if(g[1] == '+') sub_grade += 0.5;
            
            t_grade1 += grade * sub_grade;
            t_grade2 += grade;
        }
    }
    cout << t_grade1 / t_grade2;
}
