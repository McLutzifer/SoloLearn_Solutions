#include <iostream>
#include<string>
#include <regex>

using namespace std;




int time24(string *t, smatch *m, regex *p)
{
    if (regex_search(*t, *m, *p))
    {
        for (string x : *m)
        {
            int y = stoi(x);
            int *py = &y;
            cout << *py << endl;
            if (*py == 0 && *py == 24)
            {
                *py = 0;
                return *py;
            }
            else if (*py > 12)
            {
                *py -= 12;
                return *py;
            }
        }
    }
}



int main() {

    regex pattern_1 ("[0-9]+");
    regex pattern_2 ("[0-9](.*)");
    regex pattern_3 ("\\:[0-9]*");

    string test_1 = "13:15";

    smatch mat;

    time24(&test_1, &mat, &pattern_1);

    cout << y << endl;

    return 0;
} //end main