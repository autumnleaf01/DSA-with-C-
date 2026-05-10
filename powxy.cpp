#include<iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        long long exp = n;
        bool negative = exp < 0;
        unsigned long long power = negative ? (unsigned long long)(-exp) : (unsigned long long)exp;

        double result = 1.0;
        double base = x;
        while (power > 0) {
            if (power & 1ULL) {
                result *= base;
            }
            base *= base;
            power >>= 1;
        }

        return negative ? 1.0 / result : result;
    }
};
int main(){
    Solution s;
    cout << s.myPow(2.00000, 10) << endl;
    cout << s.myPow(2.10000, 3) << endl;
    cout << s.myPow(2.00000, -2) << endl;
    return 0;
}