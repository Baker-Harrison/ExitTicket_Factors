#include <iostream>
#include <vector>

using namespace std;

void findFactorsHelper(int number, int divisor, vector<int>& factors) {
    if (divisor > number / 2) {
        return;
    }

    if (number % divisor == 0) {
        factors.push_back(divisor);
    }

    findFactorsHelper(number, divisor + 1, factors);
}

vector<int> findFactors(int number) {
    vector<int> factors = {1};

    findFactorsHelper(number, 2, factors);

    factors.push_back(number);

    return factors;
}
int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    for (int n : findFactors(number))
    {
        cout << n << endl;
    }
    return 0;
}

