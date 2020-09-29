#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    string txt;
    getline(cin, txt);
    int len = 0;
    int word = 1;
    
    for (int x : txt) {
        if ((x > 64 && x < 91) || (x > 96 && x < 123)) {    // A-Z = 65-90 , a-z = 97-122
           ++len;
        } 
        if (x == 32) { //space = 32
            ++word;
        }
    }
    
    float length = (float) len;
    float solution = length/word;
    
    cout << ceil(solution);

    return 0;
}
