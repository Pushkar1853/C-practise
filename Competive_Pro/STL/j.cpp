#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
    // for (auto it = s.begin(); it != s.end(); ++it)
    // {
    //     cout << (*it) << endl;
    // }
}

int main()
{
    set<string> s;
    s.insert("abc");        // O(log(n))
    s.insert("zadf");
    s.insert("bcd");
    auto it = s.find("abc");   // O(log(n))
    if(it!=s.end()){
        // cout<<(*it);
        s.erase(it);
    }
    print(s);
    return 0;
}