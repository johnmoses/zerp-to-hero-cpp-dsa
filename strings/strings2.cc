// Compare strings

#include <iostream>
#include <string>

using std::string;
using std::getline;

using std::cin;
using std::cout;
using std::endl;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2)
        cout << "The two strings are equal" << endl;
    else
        cout << "The two strings are not equal" << endl;

    return 0;
}