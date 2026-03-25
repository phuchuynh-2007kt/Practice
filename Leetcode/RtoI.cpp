#include <iostream>
#include <string>

using namespace std;

int value(const char s) {
    switch(s){
        case 'I':
        return 1;
        case 'V':
        return 5;
        case 'X':
        return 10;
        case 'L':
        return 50;
        case 'C':
        return 100;
        case 'D':
        return 500;
        case 'M':
        return 1000;
    }
    return 0;
}

int romanToInt(string s) {
    int total = 0;
    for (size_t i = 0; i < s.length(); i++) {
        char c = s[i];
        if (i < s.length() - 1 && (value(c) < value(s[i + 1]))) {
            total -= value(c);
            continue;
        }
        total += value(c);
    }
    return total;
}

int main() {
    string s = "MCMXCIV";
    cout << romanToInt(s) << endl;
}