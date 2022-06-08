#include <bits/stdc++.h>
#include<sstream>
using namespace std;

int ParityArray(int A[],int n)
{
    string str1 = "even";
    string str2 = "odd";

    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
            stringstream ss;
            string s;
        i.assign(str1);
        else
        i.assign(str2);
    }

    cout << "\n"
         << "Integer is: " << i << "\n";
}

int main()
{
    int A[] = {1, 2, 3, 1, 3};
    int i;
   cout<<ParityArray(A[i]);

    return 0;
}

