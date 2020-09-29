#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int points, price;
    cin >> points;
    cin >> price;

    if (points/12 >= price)
    {
        cout << "Buyy it!";
    }
    else
    {
        cout << "Try again";
    }

    return 0;
}