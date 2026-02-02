#include <iostream>
#include <climits>

using namespace std;

int divide(int dividend, int divisor) {
        long long res = 0, dvd = abs(dividend);
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        for (int i = 31; i >= 0; i--) {
            if ((llabs(divisor) << i) <= dvd) {
                res += 1 << i;
                dvd -= llabs(divisor << i);
            }
        }
        if ((dividend < 0) ^ (divisor < 0)) {
            res = -res;
        }
        return res;
    }

int main() {
    int a, b;
    cin >> a >> b;
    cout << divide(a, b) << endl;
}