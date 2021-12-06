#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // find maximum among 3 entered numbers
    int max = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }

    // now check triplet condition
    bool isTriplet = false;
    if (max == a) {
        if (b * b + c * c == a * a) isTriplet = true;
    } else if (max == b) {
        if (a * a + c * c == b * b) isTriplet = true;
    } else if (max == c) {
        if (a * a + b * b == c * c) isTriplet = true;
    }

    if (isTriplet) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
