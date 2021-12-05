#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        temp /= 10;
        cout << digit << endl;
    }

    return 0;
}
