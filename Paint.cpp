#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int canvas = 40;
    int colors;
    cout << "insert number of colors >> " << endl;
    cin >> colors;


    int total = 5* colors + canvas;
    cout << total << endl;
    float tax = total + 0.1*total;
    cout << tax << endl;
    int f = ceil(tax);
    cout << f; // for some reason first declare f - doenst work wit cout << ceil(tax)

    return 0;
}