#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int nod = log10(n) + 1;
    int rev = 0;
    if (k > 0) {
        k = k % nod;
    } else {
        k = nod - (abs(k) % nod);
    }
    int div = pow(10, k);
    rev = (n % div) * pow(10, nod - k);
    rev += n / div;
        
    cout << rev << endl;

    return 0;
}
