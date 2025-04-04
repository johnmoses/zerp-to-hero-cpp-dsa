#include <iostream>
#include <ctime>

using namespace std;

string GenerateCaptcha(int n) {
    time_t t;

    srand((unsigned) time(&t)); // all characters

    char * chrs = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ0123456789";

    string captcha = "";

    while(--n)
        captcha.push_back(chrs[rand() % 62]);

    return captcha;
}

int main() {
    cout << "CAPTCHA" << endl;
    cout << GenerateCaptcha(10) << endl;

    return 0;
}