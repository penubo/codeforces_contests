#include <iostream>
#include <cmath>

using namespace std;

#define MAX pow(10, 9)

bool isPrime(int num) {

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int a, b, n;

    cin >> n;

    for (b = 4; b <= MAX; b++) {
        if (!isPrime(b)) {
            a = n + b;
            if (!isPrime(a)) {
                cout << a << " " << b << "\n";
                break;
            }
        }
    }

    return 0;
}
