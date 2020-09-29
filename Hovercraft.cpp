#include <iostream>

using std::cin;
using std::cout;

int main(void)
{
    //sales price per unit
    int sell = 3000;

    //input for how many sold
    int sold;
    cin >> sold;

    int profit = sold * sell;

    //production cost per month is 21000
    if (profit > 21000)
    {
        cout << "Profit";
    }
    if (profit < 21000)
    {
        cout << "Loss";
    }
    if (profit == 21000)
    {
        cout << "Broke Even";
    }
}