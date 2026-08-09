#include <iostream>
using namespace std;
char A[64];

void Binary(int n) {
    if (n == 0) {
        cout << A << '\n';
        return;
    }

    A[n - 1] = '0';
    Binary(n - 1);
    A[n - 1] = '1';
    Binary(n - 1);
}

int main() {
    int n;
    if (!(cin >> n) || n <= 0 || n >= (int)sizeof(A)) {
        return 0;
    }

    A[n] = '\0';
    Binary(n);
}
