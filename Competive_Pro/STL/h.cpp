// unordered map:
// 1. inbuilt implementation
// 2. Time complexity
// 3. valid keys datatype

#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string> &m){
    cout<< m.size()<<endl;
    for(auto &pr: m){
        cout<< pr.first << " " << pr.second<<endl;  
    }
}

int main(){
    unordered_map<int, string> m;
    m[1] = "abc";               //Tiem complexity => O(1)
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";

    print(m);

    return 0;
}