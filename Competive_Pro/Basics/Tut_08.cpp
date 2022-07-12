#include <bits/stdc++.h>
using namespace std;

void increment(int &n, int n1)
{
    n++;
    n1++;
}

int main()
{
    int a = 3;
    cout << a << endl;
    increment(a, 2);
    cout << a << endl;
    return 0;
}