#include <iostream>
#include <vector>

using namespace std;


vector<int> findFactors(int number);

int main() {
    for (int n : findFactors(100))
    {
        cout << n << endl;
    }
    return 0;
}

vector<int> findFactors(int number)
{

    static vector<int> factors;

    if (number == 0)
    {
        factors.push_back(0);
        return factors;
    }
    for (int i = 1; i >= 0; i++)
    {
        if (number % i == 0)
        {
            factors.push_back(i);
            factors.push_back(number / i);
            findFactors(number / i);
        }
    }

    return factors;
}
