//Given an integer num, repeatedly add all its digits 
//until the result has only one digit, and return it.
#include <iostream>

using namespace std;

int addDigits(int num) {
        if (num < 10) return num;
        while(num >= 10) {
            int sum = 0;
            int temp = num;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            num = sum;
        }
        return num;
    }

int main() {
    int n;
    cin >> n;
    cout << addDigits(n);
}