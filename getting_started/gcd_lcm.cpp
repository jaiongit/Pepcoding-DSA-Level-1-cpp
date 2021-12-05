#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int min = num1 > num2 ? num2 : num1;
    int m = num1, n = num2;
    long long int gcd = 1;

    for (int p = 2; p <= min; p++) {
        int div = 2;
        while (div * div < p) {
           if (p % div == 0) {
               continue;
           }
           div++;
        }
        if (p <= m && p <= n) {
            while (m % p == 0 && n % p == 0) {
                m /= p;
                n /= p;
                gcd *= p;
            }
        } else {
            break;
        }
        min = m > n ? n : m;
    }

    // lcm = gcd;
    // max = m > n ? m : n;
    // for (int p = 2; p <= max; p++) {
    //     int div = 2;
    //     while (div * div <= p) {
    //         if (p % div == 0)
    //             continue;
    //     }
    //     if (m != 1 || n != 1) {
    //         while (m % p == 0) {
    //             m /= p;
    //             lcm *= p;
    //         }
    //         while (n % p == 0) {
    //             n /= p;
    //             lcm *= p;
    //         }
    //     } else {
    //         break;
    //     }
    // }
    long long int lcm = gcd * m * n;

    cout << gcd << endl << lcm;
    return 0;
}
