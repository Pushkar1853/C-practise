#include <bits/stdc++.h>
using namespace std;

// => for arrays
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n); // Sorting inbuilt algorithm
//     // Intro sort:  (best sorting technique)
//     // 1.Quick sort
//     // 2. Heap Sort
//     // 3. Insertion sort
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << endl;
//     }
//     cout << endl;
// }

// => for vectors
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}