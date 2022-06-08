#include <iostream>
using namespace std;

// namespace std;
int main()
{
#ifndef ONLINE_JUDJE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int savings;
    cin >> savings;

    if (savings > 5000)
    {
        if (savings>10000)
        {
            cout<<"Roadtrip with Sarah\n";
        }
        else{
            cout << "Shopping with Sarah\n";
        }
    }
    else if (savings > 2000)
    {
        cout << "Emma\n";
    }
    else
    {
        cout << "Friends\n";
    }
    return 0;
}