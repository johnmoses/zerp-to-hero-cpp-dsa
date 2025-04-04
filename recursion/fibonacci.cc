#include <iostream>
#include <vector>

using namespace std;

long fibonacci_recur(int x, vector<long> cache) {
    if (cache[x] > -1) {
        return cache[x];
    }
    cache[x] = fibonacci_recur(x-1, cache) + fibonacci_recur(x-2, cache);
    return cache[x];
}

int main() {
    cout << "Fibonacci" << endl;
    return 0;
}