#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // find out the divisor div which is 10^(numberOfDigits)-1
    int temp = n, div = 1;
    while (temp > 10) {
        div *= 10;
        temp /= 10;
    }

    temp = n;
    // do not check for temp!=0 because temp becomes 0
    // before even all digits are printed, for e.g. 7600
    // this will only print 7 and 6, and not the
    // remaining 0's
    while (div != 0) {
        int digit = temp / div;
        cout << digit << endl;
        temp = temp % div;
        div /= 10;
    }

    return 0;
}
