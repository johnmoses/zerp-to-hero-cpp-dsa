// Begining with string processing

#include <iostream>
#include <string>

using std::string;

using std::cin;
using std::cout;
using std::endl;

int main() {
    string line;
    cout << "Enter some text: ";
    while (cin >> line)
        cout << "You entered: " << line << endl;

    return 0;
}