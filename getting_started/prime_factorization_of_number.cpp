#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    /* int temp = num, div = 2; */
    /* while (temp != 1) { */
    /*     int i = 2; */
    /*     while (i * i <= div) { */
    /*         if (div % i == 0) */
    /*             break; */
    /*         i++; */
    /*     } */
    /*     if (i * i > div) { */
    /*         while (temp % div == 0) { */
    /*             cout << div << ' '; */
    /*             temp /= div; */
    /*         } */
    /*     } */
    /*     div++; */
    /* } */
    // The above approach is right but gives TLE
    // because I was unnecessarily testing the primality for 
    // each number before proceeding to dividing the number
    // this is an extra overhead which is really not required

    int div = 2, temp = num;
    while (div * div <= temp) {
        while (temp % div == 0) {
            cout << div << ' ';
            temp /= div;
        }
        div++;
    }

    if (temp != 1) {
        cout << temp;
    }

    return 0;
}
