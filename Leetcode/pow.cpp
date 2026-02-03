#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

/*
1. chuyen n thanh long long tranh overflow 
2. check n, chan thi chia 2 le thi chia 2 + 1
2.1 check x, x < 0 -> 1 / x
3. square x len bu cho n 
4. loop den khi n < 0
*/

double myPow(double x, int n) {
    double sum = 0;
    long long exp = n;
    double result = 1;
    if (n < 0) {
        x = 1 / x;
        exp = -(long long)n;
    }
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = result * x;
        }
        x = x * x;
        exp = exp / 2;
    }
    return result;
}

int main() {
    double a;
    int b;
    cin >> a >> b;
    cout << myPow(a, b) << endl;
}