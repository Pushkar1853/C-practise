#include <bits/stdc++.h>
using namespace std;

bool is_positive(int x){
        return x>0;
    }

int main()
{
    // =>   Lambda function
    // auto sum = [](int x, int y){ return x + y; };
    // cout<<sum(2,3);

    
    vector<int> v ={ 2,3,5};
    // cout<< all_of(v.begin(),v.end(),[](int x){return x>0;});
    cout<< all_of(v.begin(),v.end(),is_positive)<<endl;

    cout<<any_of(v.begin(),v.end(),[](int x){return x<0;})<<endl;

    cout<< none_of(v.begin(),v.end(),[](int x){return x<0;})<<endl;
}