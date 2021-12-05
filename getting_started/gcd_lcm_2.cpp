#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    long long int m, n;
    if (num1 > num2) {
        m = num2;
        n = num1 % num2;
    } else {
        m = num1;
        n = num2 % num1;
    }

    while (n != 0) {
        int temp = m;
        m = n;
        n = temp % n;
    }

    long long int gcd = m;
    long long int lcm = num1 / gcd * num2;
    cout << gcd << endl << lcm;
    return 0;
}
