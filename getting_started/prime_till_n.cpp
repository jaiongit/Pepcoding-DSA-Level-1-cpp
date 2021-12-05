#include <iostream>

using namespace std;

int main() {
    int low, high;
    cin >> low >> high;

    for (int n = low; n <=high; n++) {
        int div = 2;
        while (div * div <= n) {
            if (n % div == 0) {
                break;
            }
            div++;
        }
        if(div * div > n)
            cout << n << endl;
    }
    return 0;
}
