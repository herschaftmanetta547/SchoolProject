#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; i++) {
            if (i != n - i) {
                cout << i << " and " << n - i << endl;
            }
        }
    } else {
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                int sqrt_n = pow(n, 0.5);
                for (int j = 1; j <= sqrt_n; j++) {
                    if ((j * j) != n) {
                        cout << j << " and " << n - j << endl;
                    }
                }
            }
        }
    }
}
