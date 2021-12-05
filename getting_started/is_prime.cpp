#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // bool flag = true;
        // don't even need the flag variable
        
        /* takes large time for inputs of order 10^9
        for (int i = 2; i <= n/2; i++) {
            if (n%i == 0) {
                flag = false;
                break;
            }
        }
        
        // don't need to the flag
        for (int div = 2; div*div <= n; div++) {
            if (n % div == 0) {
                flag = false;
                break;
            }
        }*/

        int div = 2;
        while (div * div <= n) {
            if (n % div == 0)
                break;
        div++;
        }

        //if (flag)
        
        // if the loop has executed fully
        if (div * div > n)
            cout << "prime" << endl;
        // loop was interrupted before the condition became false
        // i.e., the condition was still true but the number is not
        // prime
        else
            cout << "not prime" << endl;
    }
    return 0;
}
