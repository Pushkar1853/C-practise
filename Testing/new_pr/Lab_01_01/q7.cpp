#include <iostream>
using namespace std;

int main()
{
    int z;
    cin >> z;
    int sum = 0, term1 = 0, term2 = 1, term3 = z;
    for (int i = 1; i <= 10; i++)
    {
        term1 = i * i;
        term2 *= i;
        if (i % 2 == 1)
            sum = sum + term1 * term3 / term2;
        else
            sum = sum - term1 * term3 / term2;
        term3 *= z;
    }
    cout << sum << endl;
    return 0;
}