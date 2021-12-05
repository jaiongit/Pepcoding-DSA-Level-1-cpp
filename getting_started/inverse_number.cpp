#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n, count = 1;
    int inverse = 0;
    while (temp != 0) {
        int p = temp % 10;
        inverse += count * pow(10, p-1);
        count++;
        temp /= 10;
    }

    cout << inverse << endl;
    return 0;
}

