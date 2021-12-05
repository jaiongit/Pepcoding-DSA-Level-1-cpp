#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int m = num1, n = num2;

    while (m % n != 0) {
        int rem = m % n;
        m = n;
        n = rem;
    }

    int gcd = n;
    int lcm = (num1 * num2) / gcd;

    cout << gcd << endl << lcm;
    return 0;
}
