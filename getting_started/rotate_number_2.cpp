#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int nod = 0;
    for (int temp = n; temp > 0; temp /= 10) {
        nod++;
    }

    if (k >=0) {
        k = k % nod;
    } else {
        k = nod - (-k % nod);
    }

    int div = 1, mul = 1;
    for (int i = 1; i <= nod; i++) {
        if (i <= k) {
            div *= 10;
        } else {
            mul *= 10;
        }
    }

    int rotated = (n % div) *  mul + (n / div);
    cout << rotated << endl;

    return 0;
}
