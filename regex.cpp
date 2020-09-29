#include <iostream>
#include <string>
#include <regex>
#include <sstream>

using namespace std;

/* function prototypes*/
void extractIntegers(string str);

int main()
{

    regex pattern1 ("[:alpha:]+");  // [:alpha:]

    string test = "Hello 45 h7.";

    smatch m;

    regex_search (test, m, pattern1);

       cout << "String that matches the pattern: " << endl;
    for (auto x : m)
        cout << x << " " << endl;
    
    string str = "1: 2 3 4 prakhar";
    extractIntegers(str);

    return 0;

} // end main

void extractIntegers(string str)
{
    stringstream ss;

    /* Storing the whole string into string stream */
    ss << str;

    /* Running loop till the end of the stream*/
    string temp;
    int found;
    while (!ss.eof()) {

        /*extracting word by word from stream*/
        ss >> temp;

        /* Checking the given word is integer*/
        if (stringstream(temp) >> found)
            cout << found << " ";

        /* To save from space at the end of string*/
        temp = "";
    }
} // end extractInteger