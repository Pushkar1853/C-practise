#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
// Maps tutorial ordered
// Remember maps uses red black "trees" implementation

int main()
{
    map<int, string> m;
    m[1] = "abc";               // O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});

    // auto it = m.find(3);     // O(log(n))

    // if(it!= m.end())            ==> safety check for erase

    // m.erase(3);              // O(log(n))

    // m["abcd"]= "abcd"           ==> O(s.size()*log(n))
    // m.clear();

    // if(it== m.end()){
    //     cout<<"NO Value";
    // }
    // else{
    //     cout<<(it->first)<<" "<<(it->second)<<endl;
    // }
    print(m);

    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << (it->first) << " " << (it->second) << endl;
    }

    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}