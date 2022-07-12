#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); ++i)
    {
        std ::cout << v[i] << " ";
    }
    std ::cout << endl;
    // vector<int>::iterator it;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        std ::cout << (*it) << " ";
    }
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    // for (pair<int, int> &value : v_p)
    for (auto &value : v_p)
    {
        std ::cout << value.first << " " << value.second << endl;
    }
    // for (int value : v)
    // {
    //     // making copy of values
    //     cout << value << " ";
    // }
    std ::cout << endl;
    return 0;
}