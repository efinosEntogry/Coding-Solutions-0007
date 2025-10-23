#include <iostream>

using namespace std;

int multiply(int a, int b) {
    if (b == 0) return 0;
    if (b > 0)
        return a + multiply(a, b - 1);
    else
        return -a + multiply(a, b + 1);
}

int main() {

    cout << multiply(-9, 2) << endl;

    return 0;
}
