#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function to compute 2^N
long long Power(int N) {
    return static_cast<long long>(pow(2, N));
}

int main() {
    cout << "N\t2^N" << endl;
    cout << "----------------" << endl;

    for (int N = 0; N <= 20; ++N) {
        cout << N << "\t" << Power(N) << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int Ackermann(int m, int n) {
    if (m == 0) return n + 1;
    if (n == 0) return Ackermann(m - 1, 1);
    return Ackermann(m - 1, Ackermann(m, n - 1));
}

int main() {
    cout << "A(3, 4) = " << Ackermann(3, 4) << endl;
    return 0;
}
#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n < 0) return;
    cout << n << " ";
    printNumbers(n - 1);
}

int main() {
    int n = 10;
    printNumbers(n);
    return 0;
}
#include <iostream>
using namespace std;

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int n = 5, k = 2;
    cout << "C(" << n << ", " << k << ") = " << binomialCoefficient(n, k) << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n, int i = 2) {
    if (n <= 2) return (n == 2);
    if (n % i == 0) return false;
    if (i * i > n) return true;
    return isPrime(n, i + 1);
}

int main() {
    int n = 29;
    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    return 0;
}
